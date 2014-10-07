; You should not remove this line for test running. Just use it as is.
#lang racket

; Load tests runner file.
(require "utils.rkt")

; +-------------------------------------------------------------+
; |Load the file modified type-expression-adt.rkt with the lazy |
; |procedural implementation of tuple adt                       |
; +-------------------------------------------------------------+
(require "type-expression-adt.rkt" "equation-adt.rkt" "asp.rkt")

; Setup
; -----------------------------------------------

; Support exception handling.
(define (try f (ans 'error))
  (with-handlers ((exn?
                   (lambda (exn) ans))) (f)))

; [Empty -> Number]
(define te1 (make-proc-te (make-tuple-te (list)) 'Number))

; [Number -> Boolean]
(define te2 (make-proc-te (make-tuple-te (list 'Number)) 'Boolean))

; [Boolean * Number -> [Number->Boolean]]
(define te3 (make-proc-te (make-tuple-te (list 'Boolean 'Number)) (make-proc-te (make-tuple-te (list 'Number)) 'Boolean)))

; [ [T1->Number]*[T2->Boolean] -> [T1*T2->[Number->Boolean]] ]
(define te4 (make-proc-te (make-tuple-te (list (make-proc-te  (make-tuple-te '(T1)) 'Number)
                                               (make-proc-te  (make-tuple-te '(T2)) 'Boolean)))
                          (make-proc-te  (make-tuple-te '(T1 T2))
                                         (make-proc-te  (make-tuple-te '(Number)) 'Boolean))))

; [Boolean * Number -> [Number->Boolean]]
(define te5 (make-proc-te (make-tuple-te (list 'Boolean 'Number)) (make-proc-te (make-tuple-te (list 'Number)) 'Boolean)))

(define tuple1 (make-tuple-te (list 'Boolean 'Number)))                 ; [Boolean * Number]
(define tuple2 (make-tuple-te (list 'Boolean 'Number)))                 ; [Number  * Boolean]
(define tuple3 (make-tuple-te (list 'T1 'T2)))                 ; [T1  * T2]

(define proc1 (make-proc-te (make-tuple-te (list 'Boolean)) 'Number))   ; [Boolean -> Number]
(define proc2 (make-proc-te (make-tuple-te (list 'Boolean)) 'Number))   ; [Boolean -> Number]
(define proc3 (make-proc-te (make-tuple-te (list 'T1)) 'T2))            ; [T1 -> T2]


; +-----------------------------+
; |         Question 5.b        |
; +-----------------------------+

; Tests for high-order?.
(display "high-order?:\t\t")
(run-tests
 (test (high-order? te1) => '#f)
 (test (high-order? te2) => '#f)
 (test (high-order? te3) => '#t)
 (test (high-order? te4) => '#t))

; +-----------------------------+
; |         Question 5.c        |
; +-----------------------------+

; Tests for lazy-procedural implementation.
(display "lazy-tuple:\t\t")
(run-tests
 (test (and (tagged-data? tuple1) (tagged-by? tuple1 '*)) => #t)
 (test ((get-content tuple1) (lambda (x) x)) => '(Boolean Number))
 (test (get-constructor   tuple1) => '*)
 (test (tuple-components  tuple1) => '(Boolean Number))
 (test (proc-parameter-tes te3) => '(Boolean Number))
 )

; Tests for Tuple correctness
(display "tuple-correctness:\t")
(run-tests
 (test (tuple? tuple1) => #t)
 (test (tuple? '()) => #f)
 (test (tuple? te1) => #f)
 (test (tuple? (proc-parameter-tuple-tes te1))  => #t)
 (test (tuple? (proc-parameter-tuple-tes te4))  => #t))