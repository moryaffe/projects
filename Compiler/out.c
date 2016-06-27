#include <stdio.h>
   #include <stdlib.h>
   #define DO_SHOW 1
   #include "cisc.h"
   #include "debug.h"

int main()
{
  START_MACHINE;

  JUMP(CONTINUE);

#include "char.lib"
#include "io.lib"
#include "math.lib"
#include "string.lib"
#include "system.lib"
#include "scheme.lib"
#include "primitive.lib"

   PUSH(IMM(0));
   PUSH(IMM(0));
   PUSH(LABEL(L_exit));
   PUSH(FP);
   MOV(FP, SP);
CONTINUE:
   MOV(ADDR(0), IMM(1054));
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_cons));
   MOV(IND(1020), R0);
   
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_pair));
   MOV(IND(1033), R0); 

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_car));
   MOV(IND(1016), R0); 
  
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_cdr));
   MOV(IND(1017), R0); 

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_number));
   MOV(IND(1031), R0); 

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_nil));
   MOV(IND(1030), R0); 

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_plus));
   MOV(IND(1011), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_mul));
   MOV(IND(1013), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_div));
   MOV(IND(1012), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_append));
   MOV(IND(1006), R0);
   
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_rational));
   MOV(IND(1035), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_sub));
   MOV(IND(1014), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_integer));
   MOV(IND(1023), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_char));
   MOV(IND(1019), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_proc));
   MOV(IND(1034), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_bool));
   MOV(IND(1015), R0);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_string));
   MOV(IND(1043), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_symbol));
   MOV(IND(1044), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_vector));
   MOV(IND(1050), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_zero));
   MOV(IND(1051), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_greater));
   MOV(IND(1010), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_lower));
   MOV(IND(1008), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_equal));
   MOV(IND(1009), R0);
   
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_vector_init));
   MOV(IND(1046), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_make_vector));
   MOV(IND(1027), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_vector_length));
   MOV(IND(1047), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_string_length));
   MOV(IND(1039), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_vector_ref));
   MOV(IND(1048), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_string_ref));
   MOV(IND(1040), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_list));
   MOV(IND(1025), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_set_car));
   MOV(IND(1037), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_set_cdr));
   MOV(IND(1038), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_integer_char));
   MOV(IND(1024), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_char_integer));
   MOV(IND(1018), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_vector_set));
   MOV(IND(1049), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_string_set));
   MOV(IND(1041), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_make_string));
   MOV(IND(1026), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_symbol_string));
   MOV(IND(1045), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_string_symbol));
   MOV(IND(1042), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_not));
   MOV(IND(1029), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_numerator));
   MOV(IND(1032), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_denominator));
   MOV(IND(1021), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_eq));
   MOV(IND(1022), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_remainder));
   MOV(IND(1036), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_map_reg));
   MOV(IND(1028), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_apply));
   MOV(IND(1007), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_gcd));
   MOV(IND(1052), R0);

   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), IMM(850001));
   MOV(INDD(R0, 2), LABEL(L_display));
   MOV(IND(1053), R0);



//const table
MOV(ADDR(1000), IMM(T_NIL));
MOV(ADDR(1001), IMM(T_VOID));
MOV(ADDR(1002), IMM(T_BOOL));
MOV(ADDR(1003), IMM(1));
MOV(ADDR(1004), IMM(T_BOOL));
MOV(ADDR(1005), IMM(0));

//symbol table
   MOV(R1, IMM(1000));
   MOV(R12, R1); //R12 - symbol table (need to go backwards)

MOV(R0, IMM(1004));
PUSH(R0);
PUSH(1);
MOV(R0, IMM(1002));
PUSH(R0);
PUSH(1);
  PUSH(IMM(1));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_1:
  CMP(R3, 0);
   JUMP_GE(L_loop_end_1);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_1);
L_loop_end_1:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_2:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_2);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_2);
L_loop_end_2:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_1));
   JUMP(L_clos_exit_1);
L_clos_code_1:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_3:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_3);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_3);
L_loop_end_3:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_4:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_4);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_4);
L_loop_end_4:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_2));
   JUMP(L_clos_exit_2);
L_clos_code_2:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_5:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_5);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_5);
L_loop_end_5:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_2:
POP(FP);
   RETURN;
L_clos_exit_1:
PUSH(R0);
PUSH(1);
  PUSH(IMM(1));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_6:
  CMP(R3, 0);
   JUMP_GE(L_loop_end_6);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_6);
L_loop_end_6:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_7:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_7);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_7);
L_loop_end_7:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_3));
   JUMP(L_clos_exit_3);
L_clos_code_3:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_8:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_8);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_8);
L_loop_end_8:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_9:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_9);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_9);
L_loop_end_9:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_4));
   JUMP(L_clos_exit_4);
L_clos_code_4:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_10:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_10);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_10);
L_loop_end_10:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_4:
POP(FP);
   RETURN;
L_clos_exit_3:
PUSH(R0);
PUSH(1);
  PUSH(IMM(1));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_11:
  CMP(R3, 0);
   JUMP_GE(L_loop_end_11);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_11);
L_loop_end_11:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_12:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_12);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_12);
L_loop_end_12:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_5));
   JUMP(L_clos_exit_5);
L_clos_code_5:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_13:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_13);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_13);
L_loop_end_13:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_14:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_14);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_14);
L_loop_end_14:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_6));
   JUMP(L_clos_exit_6);
L_clos_code_6:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_15:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_15);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_15);
L_loop_end_15:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_6:
POP(FP);
   RETURN;
L_clos_exit_5:
PUSH(R0);
PUSH(1);
  PUSH(IMM(1));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_16:
  CMP(R3, 0);
   JUMP_GE(L_loop_end_16);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_16);
L_loop_end_16:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_17:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_17);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_17);
L_loop_end_17:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_7));
   JUMP(L_clos_exit_7);
L_clos_code_7:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_18:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_18);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_18);
L_loop_end_18:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_19:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_19);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_19);
L_loop_end_19:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_8));
   JUMP(L_clos_exit_8);
L_clos_code_8:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_20:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_20);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_20);
L_loop_end_20:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_8:
POP(FP);
   RETURN;
L_clos_exit_7:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(1));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_21:
  CMP(R3, 0);
   JUMP_GE(L_loop_end_21);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_21);
L_loop_end_21:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_22:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_22);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_22);
L_loop_end_22:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_9));
   JUMP(L_clos_exit_9);
L_clos_code_9:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_23:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_23);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_23);
L_loop_end_23:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_24:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_24);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_24);
L_loop_end_24:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_10));
   JUMP(L_clos_exit_10);
L_clos_code_10:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_26:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_26);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_26);
L_loop_end_26:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_27:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_27);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_27);
L_loop_end_27:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_11));
   JUMP(L_clos_exit_11);
L_clos_code_11:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_28:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_28);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_28);
L_loop_end_28:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_29:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_29);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_29);
L_loop_end_29:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_12));
   JUMP(L_clos_exit_12);
L_clos_code_12:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_12:
POP(FP);
   RETURN;
L_clos_exit_11:
PUSH(R0);
  PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_30:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_30);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_30);
L_loop_end_30:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_31:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_31);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_31);
L_loop_end_31:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_13));
   JUMP(L_clos_exit_13);
L_clos_code_13:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_32:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_32);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_32);
L_loop_end_32:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_33:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_33);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_33);
L_loop_end_33:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_14));
   JUMP(L_clos_exit_14);
L_clos_code_14:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
  PUSH(1);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_35:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_35);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_35);
L_loop_end_35:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_36:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_36);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_36);
L_loop_end_36:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_15));
   JUMP(L_clos_exit_15);
L_clos_code_15:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_37:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_37);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_37);
L_loop_end_37:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_38:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_38);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_38);
L_loop_end_38:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_16));
   JUMP(L_clos_exit_16);
L_clos_code_16:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_39:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_39);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_39);
L_loop_end_39:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_40:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_40);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_40);
L_loop_end_40:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_17));
   JUMP(L_clos_exit_17);
L_clos_code_17:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_41:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_41);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_41);
L_loop_end_41:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_17:
POP(FP);
   RETURN;
L_clos_exit_16:
POP(FP);
   RETURN;
L_clos_exit_15:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_34:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_34);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_34);
L_loop_end_34:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_14:
POP(FP);
   RETURN;
L_clos_exit_13:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_25:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_25);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_25);
L_loop_end_25:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_10:
POP(FP);
   RETURN;
L_clos_exit_9:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(1));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_42:
  CMP(R3, 0);
   JUMP_GE(L_loop_end_42);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_42);
L_loop_end_42:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_43:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_43);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_43);
L_loop_end_43:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_18));
   JUMP(L_clos_exit_18);
L_clos_code_18:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_44:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_44);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_44);
L_loop_end_44:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_45:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_45);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_45);
L_loop_end_45:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_19));
   JUMP(L_clos_exit_19);
L_clos_code_19:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_47:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_47);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_47);
L_loop_end_47:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_48:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_48);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_48);
L_loop_end_48:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_20));
   JUMP(L_clos_exit_20);
L_clos_code_20:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_49:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_49);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_49);
L_loop_end_49:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_50:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_50);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_50);
L_loop_end_50:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_21));
   JUMP(L_clos_exit_21);
L_clos_code_21:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_21:
POP(FP);
   RETURN;
L_clos_exit_20:
PUSH(R0);
  PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_51:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_51);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_51);
L_loop_end_51:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_52:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_52);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_52);
L_loop_end_52:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_22));
   JUMP(L_clos_exit_22);
L_clos_code_22:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_53:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_53);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_53);
L_loop_end_53:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_54:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_54);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_54);
L_loop_end_54:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_23));
   JUMP(L_clos_exit_23);
L_clos_code_23:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
  PUSH(1);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_56:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_56);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_56);
L_loop_end_56:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_57:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_57);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_57);
L_loop_end_57:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_24));
   JUMP(L_clos_exit_24);
L_clos_code_24:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_58:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_58);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_58);
L_loop_end_58:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_59:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_59);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_59);
L_loop_end_59:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_25));
   JUMP(L_clos_exit_25);
L_clos_code_25:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_60:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_60);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_60);
L_loop_end_60:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_61:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_61);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_61);
L_loop_end_61:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_26));
   JUMP(L_clos_exit_26);
L_clos_code_26:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_62:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_62);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_62);
L_loop_end_62:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_26:
POP(FP);
   RETURN;
L_clos_exit_25:
POP(FP);
   RETURN;
L_clos_exit_24:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_55:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_55);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_55);
L_loop_end_55:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_23:
POP(FP);
   RETURN;
L_clos_exit_22:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_46:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_46);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_46);
L_loop_end_46:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_19:
POP(FP);
   RETURN;
L_clos_exit_18:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(1));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_63:
  CMP(R3, 0);
   JUMP_GE(L_loop_end_63);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_63);
L_loop_end_63:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_64:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_64);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_64);
L_loop_end_64:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_27));
   JUMP(L_clos_exit_27);
L_clos_code_27:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_65:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_65);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_65);
L_loop_end_65:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_66:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_66);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_66);
L_loop_end_66:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_28));
   JUMP(L_clos_exit_28);
L_clos_code_28:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_67:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_67);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_67);
L_loop_end_67:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_28:
POP(FP);
   RETURN;
L_clos_exit_27:
PUSH(R0);
PUSH(1);
  PUSH(IMM(1));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_68:
  CMP(R3, 0);
   JUMP_GE(L_loop_end_68);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_68);
L_loop_end_68:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_69:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_69);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_69);
L_loop_end_69:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_29));
   JUMP(L_clos_exit_29);
L_clos_code_29:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_71:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_71);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_71);
L_loop_end_71:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_72:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_72);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_72);
L_loop_end_72:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_30));
   JUMP(L_clos_exit_30);
L_clos_code_30:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_30:
PUSH(R0);
PUSH(1);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_73:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_73);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_73);
L_loop_end_73:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_74:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_74);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_74);
L_loop_end_74:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_31));
   JUMP(L_clos_exit_31);
L_clos_code_31:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_31:
PUSH(R0);
PUSH(1);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_75:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_75);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_75);
L_loop_end_75:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_76:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_76);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_76);
L_loop_end_76:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_32));
   JUMP(L_clos_exit_32);
L_clos_code_32:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_77:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_77);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_77);
L_loop_end_77:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_78:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_78);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_78);
L_loop_end_78:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_33));
   JUMP(L_clos_exit_33);
L_clos_code_33:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_79:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_79);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_79);
L_loop_end_79:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_80:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_80);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_80);
L_loop_end_80:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_34));
   JUMP(L_clos_exit_34);
L_clos_code_34:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_81:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_81);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_81);
L_loop_end_81:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_34:
POP(FP);
   RETURN;
L_clos_exit_33:
POP(FP);
   RETURN;
L_clos_exit_32:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_82:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_82);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_82);
L_loop_end_82:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_83:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_83);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_83);
L_loop_end_83:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_35));
   JUMP(L_clos_exit_35);
L_clos_code_35:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_85:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_85);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_85);
L_loop_end_85:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_86:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_86);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_86);
L_loop_end_86:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_36));
   JUMP(L_clos_exit_36);
L_clos_code_36:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_88:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_88);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_88);
L_loop_end_88:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_89:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_89);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_89);
L_loop_end_89:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_37));
   JUMP(L_clos_exit_37);
L_clos_code_37:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_90:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_90);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_90);
L_loop_end_90:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_91:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_91);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_91);
L_loop_end_91:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_38));
   JUMP(L_clos_exit_38);
L_clos_code_38:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_38:
POP(FP);
   RETURN;
L_clos_exit_37:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_87:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_87);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_87);
L_loop_end_87:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_36:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_92:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_92);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_92);
L_loop_end_92:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_93:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_93);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_93);
L_loop_end_93:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_39));
   JUMP(L_clos_exit_39);
L_clos_code_39:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_95:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_95);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_95);
L_loop_end_95:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_96:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_96);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_96);
L_loop_end_96:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_40));
   JUMP(L_clos_exit_40);
L_clos_code_40:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_97:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_97);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_97);
L_loop_end_97:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_98:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_98);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_98);
L_loop_end_98:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_41));
   JUMP(L_clos_exit_41);
L_clos_code_41:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
POP(FP);
   RETURN;
L_clos_exit_41:
POP(FP);
   RETURN;
L_clos_exit_40:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_94:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_94);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_94);
L_loop_end_94:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_39:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_99:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_99);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_99);
L_loop_end_99:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_100:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_100);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_100);
L_loop_end_100:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_42));
   JUMP(L_clos_exit_42);
L_clos_code_42:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_101:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_101);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_101);
L_loop_end_101:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_102:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_102);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_102);
L_loop_end_102:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_43));
   JUMP(L_clos_exit_43);
L_clos_code_43:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_104:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_104);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_104);
L_loop_end_104:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_105:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_105);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_105);
L_loop_end_105:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_44));
   JUMP(L_clos_exit_44);
L_clos_code_44:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_106:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_106);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_106);
L_loop_end_106:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_107:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_107);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_107);
L_loop_end_107:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_45));
   JUMP(L_clos_exit_45);
L_clos_code_45:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_45:
POP(FP);
   RETURN;
L_clos_exit_44:
PUSH(R0);
  PUSH(1);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_108:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_108);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_108);
L_loop_end_108:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_109:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_109);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_109);
L_loop_end_109:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_46));
   JUMP(L_clos_exit_46);
L_clos_code_46:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_110:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_110);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_110);
L_loop_end_110:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_111:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_111);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_111);
L_loop_end_111:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_47));
   JUMP(L_clos_exit_47);
L_clos_code_47:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
  PUSH(1);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_113:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_113);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_113);
L_loop_end_113:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_114:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_114);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_114);
L_loop_end_114:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_48));
   JUMP(L_clos_exit_48);
L_clos_code_48:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_115:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_115);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_115);
L_loop_end_115:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_116:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_116);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_116);
L_loop_end_116:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_49));
   JUMP(L_clos_exit_49);
L_clos_code_49:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(9));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_117:
  CMP(R3, 8);
   JUMP_GE(L_loop_end_117);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_117);
L_loop_end_117:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_118:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_118);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_118);
L_loop_end_118:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_50));
   JUMP(L_clos_exit_50);
L_clos_code_50:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_119:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_119);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_119);
L_loop_end_119:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_50:
POP(FP);
   RETURN;
L_clos_exit_49:
POP(FP);
   RETURN;
L_clos_exit_48:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_112:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_112);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_112);
L_loop_end_112:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_47:
POP(FP);
   RETURN;
L_clos_exit_46:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_103:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_103);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_103);
L_loop_end_103:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_43:
POP(FP);
   RETURN;
L_clos_exit_42:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_120:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_120);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_120);
L_loop_end_120:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_121:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_121);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_121);
L_loop_end_121:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_51));
   JUMP(L_clos_exit_51);
L_clos_code_51:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_123:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_123);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_123);
L_loop_end_123:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_124:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_124);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_124);
L_loop_end_124:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_52));
   JUMP(L_clos_exit_52);
L_clos_code_52:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_125:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_125);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_125);
L_loop_end_125:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_126:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_126);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_126);
L_loop_end_126:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_53));
   JUMP(L_clos_exit_53);
L_clos_code_53:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
POP(FP);
   RETURN;
L_clos_exit_53:
POP(FP);
   RETURN;
L_clos_exit_52:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_122:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_122);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_122);
L_loop_end_122:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_51:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_127:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_127);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_127);
L_loop_end_127:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_128:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_128);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_128);
L_loop_end_128:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_54));
   JUMP(L_clos_exit_54);
L_clos_code_54:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_129:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_129);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_129);
L_loop_end_129:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_130:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_130);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_130);
L_loop_end_130:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_55));
   JUMP(L_clos_exit_55);
L_clos_code_55:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_131:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_131);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_131);
L_loop_end_131:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_132:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_132);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_132);
L_loop_end_132:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_56));
   JUMP(L_clos_exit_56);
L_clos_code_56:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_133:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_133);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_133);
L_loop_end_133:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_56:
POP(FP);
   RETURN;
L_clos_exit_55:
POP(FP);
   RETURN;
L_clos_exit_54:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_134:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_134);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_134);
L_loop_end_134:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_135:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_135);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_135);
L_loop_end_135:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_57));
   JUMP(L_clos_exit_57);
L_clos_code_57:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_136:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_136);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_136);
L_loop_end_136:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_137:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_137);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_137);
L_loop_end_137:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_58));
   JUMP(L_clos_exit_58);
L_clos_code_58:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_138:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_138);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_138);
L_loop_end_138:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_139:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_139);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_139);
L_loop_end_139:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_59));
   JUMP(L_clos_exit_59);
L_clos_code_59:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_140:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_140);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_140);
L_loop_end_140:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_59:
POP(FP);
   RETURN;
L_clos_exit_58:
POP(FP);
   RETURN;
L_clos_exit_57:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_84:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_84);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_84);
L_loop_end_84:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_35:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_141:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_141);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_141);
L_loop_end_141:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_142:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_142);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_142);
L_loop_end_142:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_60));
   JUMP(L_clos_exit_60);
L_clos_code_60:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_144:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_144);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_144);
L_loop_end_144:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_145:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_145);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_145);
L_loop_end_145:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_61));
   JUMP(L_clos_exit_61);
L_clos_code_61:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_146:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_146);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_146);
L_loop_end_146:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_147:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_147);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_147);
L_loop_end_147:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_62));
   JUMP(L_clos_exit_62);
L_clos_code_62:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_62:
POP(FP);
   RETURN;
L_clos_exit_61:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_143:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_143);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_143);
L_loop_end_143:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_60:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_70:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_70);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_70);
L_loop_end_70:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_29:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(1));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_148:
  CMP(R3, 0);
   JUMP_GE(L_loop_end_148);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_148);
L_loop_end_148:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_149:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_149);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_149);
L_loop_end_149:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_63));
   JUMP(L_clos_exit_63);
L_clos_code_63:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(2));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_150:
  CMP(R3, 1);
   JUMP_GE(L_loop_end_150);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_150);
L_loop_end_150:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_151:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_151);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_151);
L_loop_end_151:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_64));
   JUMP(L_clos_exit_64);
L_clos_code_64:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_153:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_153);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_153);
L_loop_end_153:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_154:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_154);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_154);
L_loop_end_154:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_65));
   JUMP(L_clos_exit_65);
L_clos_code_65:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_155:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_155);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_155);
L_loop_end_155:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_156:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_156);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_156);
L_loop_end_156:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_66));
   JUMP(L_clos_exit_66);
L_clos_code_66:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
  PUSH(1);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_158:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_158);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_158);
L_loop_end_158:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_159:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_159);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_159);
L_loop_end_159:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_67));
   JUMP(L_clos_exit_67);
L_clos_code_67:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_161:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_161);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_161);
L_loop_end_161:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_162:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_162);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_162);
L_loop_end_162:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_68));
   JUMP(L_clos_exit_68);
L_clos_code_68:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_163:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_163);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_163);
L_loop_end_163:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_164:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_164);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_164);
L_loop_end_164:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_69));
   JUMP(L_clos_exit_69);
L_clos_code_69:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_69:
POP(FP);
   RETURN;
L_clos_exit_68:
PUSH(R0);
PUSH(1);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_165:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_165);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_165);
L_loop_end_165:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_166:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_166);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_166);
L_loop_end_166:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_70));
   JUMP(L_clos_exit_70);
L_clos_code_70:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_167:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_167);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_167);
L_loop_end_167:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_168:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_168);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_168);
L_loop_end_168:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_71));
   JUMP(L_clos_exit_71);
L_clos_code_71:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_71:
POP(FP);
   RETURN;
L_clos_exit_70:
PUSH(R0);
PUSH(1);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_169:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_169);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_169);
L_loop_end_169:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_170:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_170);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_170);
L_loop_end_170:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_72));
   JUMP(L_clos_exit_72);
L_clos_code_72:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_171:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_171);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_171);
L_loop_end_171:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_172:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_172);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_172);
L_loop_end_172:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_73));
   JUMP(L_clos_exit_73);
L_clos_code_73:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_173:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_173);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_173);
L_loop_end_173:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_174:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_174);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_174);
L_loop_end_174:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_74));
   JUMP(L_clos_exit_74);
L_clos_code_74:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_175:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_175);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_175);
L_loop_end_175:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_74:
POP(FP);
   RETURN;
L_clos_exit_73:
POP(FP);
   RETURN;
L_clos_exit_72:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_176:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_176);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_176);
L_loop_end_176:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_177:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_177);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_177);
L_loop_end_177:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_75));
   JUMP(L_clos_exit_75);
L_clos_code_75:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_179:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_179);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_179);
L_loop_end_179:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_180:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_180);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_180);
L_loop_end_180:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_76));
   JUMP(L_clos_exit_76);
L_clos_code_76:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_182:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_182);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_182);
L_loop_end_182:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_183:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_183);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_183);
L_loop_end_183:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_77));
   JUMP(L_clos_exit_77);
L_clos_code_77:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(9));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_184:
  CMP(R3, 8);
   JUMP_GE(L_loop_end_184);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_184);
L_loop_end_184:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_185:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_185);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_185);
L_loop_end_185:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_78));
   JUMP(L_clos_exit_78);
L_clos_code_78:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
POP(FP);
   RETURN;
L_clos_exit_78:
POP(FP);
   RETURN;
L_clos_exit_77:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_181:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_181);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_181);
L_loop_end_181:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_76:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_186:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_186);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_186);
L_loop_end_186:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_187:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_187);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_187);
L_loop_end_187:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_79));
   JUMP(L_clos_exit_79);
L_clos_code_79:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_189:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_189);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_189);
L_loop_end_189:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_190:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_190);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_190);
L_loop_end_190:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_80));
   JUMP(L_clos_exit_80);
L_clos_code_80:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(9));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_191:
  CMP(R3, 8);
   JUMP_GE(L_loop_end_191);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_191);
L_loop_end_191:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_192:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_192);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_192);
L_loop_end_192:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_81));
   JUMP(L_clos_exit_81);
L_clos_code_81:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
POP(FP);
   RETURN;
L_clos_exit_81:
POP(FP);
   RETURN;
L_clos_exit_80:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_188:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_188);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_188);
L_loop_end_188:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_79:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_193:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_193);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_193);
L_loop_end_193:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_194:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_194);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_194);
L_loop_end_194:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_82));
   JUMP(L_clos_exit_82);
L_clos_code_82:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_195:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_195);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_195);
L_loop_end_195:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_196:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_196);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_196);
L_loop_end_196:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_83));
   JUMP(L_clos_exit_83);
L_clos_code_83:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(9));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_197:
  CMP(R3, 8);
   JUMP_GE(L_loop_end_197);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_197);
L_loop_end_197:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_198:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_198);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_198);
L_loop_end_198:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_84));
   JUMP(L_clos_exit_84);
L_clos_code_84:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_199:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_199);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_199);
L_loop_end_199:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_84:
POP(FP);
   RETURN;
L_clos_exit_83:
POP(FP);
   RETURN;
L_clos_exit_82:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_200:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_200);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_200);
L_loop_end_200:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_201:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_201);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_201);
L_loop_end_201:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_85));
   JUMP(L_clos_exit_85);
L_clos_code_85:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_202:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_202);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_202);
L_loop_end_202:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_203:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_203);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_203);
L_loop_end_203:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_86));
   JUMP(L_clos_exit_86);
L_clos_code_86:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(9));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_204:
  CMP(R3, 8);
   JUMP_GE(L_loop_end_204);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_204);
L_loop_end_204:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_205:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_205);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_205);
L_loop_end_205:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_87));
   JUMP(L_clos_exit_87);
L_clos_code_87:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_206:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_206);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_206);
L_loop_end_206:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_87:
POP(FP);
   RETURN;
L_clos_exit_86:
POP(FP);
   RETURN;
L_clos_exit_85:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_178:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_178);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_178);
L_loop_end_178:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_75:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_207:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_207);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_207);
L_loop_end_207:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_208:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_208);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_208);
L_loop_end_208:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_88));
   JUMP(L_clos_exit_88);
L_clos_code_88:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_210:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_210);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_210);
L_loop_end_210:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_211:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_211);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_211);
L_loop_end_211:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_89));
   JUMP(L_clos_exit_89);
L_clos_code_89:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_212:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_212);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_212);
L_loop_end_212:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_213:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_213);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_213);
L_loop_end_213:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_90));
   JUMP(L_clos_exit_90);
L_clos_code_90:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_90:
POP(FP);
   RETURN;
L_clos_exit_89:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_209:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_209);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_209);
L_loop_end_209:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_88:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_160:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_160);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_160);
L_loop_end_160:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_67:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_157:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_157);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_157);
L_loop_end_157:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_66:
POP(FP);
   RETURN;
L_clos_exit_65:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_214:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_214);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_214);
L_loop_end_214:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_215:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_215);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_215);
L_loop_end_215:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_91));
   JUMP(L_clos_exit_91);
L_clos_code_91:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_217:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_217);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_217);
L_loop_end_217:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_218:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_218);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_218);
L_loop_end_218:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_92));
   JUMP(L_clos_exit_92);
L_clos_code_92:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_219:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_219);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_219);
L_loop_end_219:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_220:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_220);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_220);
L_loop_end_220:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_93));
   JUMP(L_clos_exit_93);
L_clos_code_93:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
POP(FP);
   RETURN;
L_clos_exit_93:
POP(FP);
   RETURN;
L_clos_exit_92:
PUSH(R0);
  PUSH(1);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_221:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_221);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_221);
L_loop_end_221:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_222:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_222);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_222);
L_loop_end_222:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_94));
   JUMP(L_clos_exit_94);
L_clos_code_94:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_223:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_223);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_223);
L_loop_end_223:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_224:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_224);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_224);
L_loop_end_224:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_95));
   JUMP(L_clos_exit_95);
L_clos_code_95:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_225:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_225);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_225);
L_loop_end_225:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_226:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_226);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_226);
L_loop_end_226:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_96));
   JUMP(L_clos_exit_96);
L_clos_code_96:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_96:
POP(FP);
   RETURN;
L_clos_exit_95:
POP(FP);
   RETURN;
L_clos_exit_94:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_216:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_216);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_216);
L_loop_end_216:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_91:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_227:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_227);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_227);
L_loop_end_227:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_228:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_228);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_228);
L_loop_end_228:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_97));
   JUMP(L_clos_exit_97);
L_clos_code_97:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_229:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_229);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_229);
L_loop_end_229:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_230:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_230);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_230);
L_loop_end_230:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_98));
   JUMP(L_clos_exit_98);
L_clos_code_98:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
  PUSH(1);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_232:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_232);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_232);
L_loop_end_232:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_233:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_233);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_233);
L_loop_end_233:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_99));
   JUMP(L_clos_exit_99);
L_clos_code_99:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_235:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_235);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_235);
L_loop_end_235:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_236:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_236);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_236);
L_loop_end_236:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_100));
   JUMP(L_clos_exit_100);
L_clos_code_100:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_237:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_237);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_237);
L_loop_end_237:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_238:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_238);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_238);
L_loop_end_238:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_101));
   JUMP(L_clos_exit_101);
L_clos_code_101:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_101:
POP(FP);
   RETURN;
L_clos_exit_100:
PUSH(R0);
PUSH(1);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_239:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_239);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_239);
L_loop_end_239:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_240:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_240);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_240);
L_loop_end_240:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_102));
   JUMP(L_clos_exit_102);
L_clos_code_102:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_241:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_241);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_241);
L_loop_end_241:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_242:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_242);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_242);
L_loop_end_242:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_103));
   JUMP(L_clos_exit_103);
L_clos_code_103:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_103:
POP(FP);
   RETURN;
L_clos_exit_102:
PUSH(R0);
PUSH(1);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_243:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_243);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_243);
L_loop_end_243:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_244:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_244);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_244);
L_loop_end_244:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_104));
   JUMP(L_clos_exit_104);
L_clos_code_104:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_245:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_245);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_245);
L_loop_end_245:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_246:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_246);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_246);
L_loop_end_246:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_105));
   JUMP(L_clos_exit_105);
L_clos_code_105:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_247:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_247);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_247);
L_loop_end_247:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_248:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_248);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_248);
L_loop_end_248:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_106));
   JUMP(L_clos_exit_106);
L_clos_code_106:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_249:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_249);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_249);
L_loop_end_249:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_106:
POP(FP);
   RETURN;
L_clos_exit_105:
POP(FP);
   RETURN;
L_clos_exit_104:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_250:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_250);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_250);
L_loop_end_250:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_251:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_251);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_251);
L_loop_end_251:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_107));
   JUMP(L_clos_exit_107);
L_clos_code_107:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_253:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_253);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_253);
L_loop_end_253:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_254:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_254);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_254);
L_loop_end_254:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_108));
   JUMP(L_clos_exit_108);
L_clos_code_108:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_256:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_256);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_256);
L_loop_end_256:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_257:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_257);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_257);
L_loop_end_257:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_109));
   JUMP(L_clos_exit_109);
L_clos_code_109:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(9));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_258:
  CMP(R3, 8);
   JUMP_GE(L_loop_end_258);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_258);
L_loop_end_258:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_259:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_259);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_259);
L_loop_end_259:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_110));
   JUMP(L_clos_exit_110);
L_clos_code_110:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
POP(FP);
   RETURN;
L_clos_exit_110:
POP(FP);
   RETURN;
L_clos_exit_109:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_255:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_255);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_255);
L_loop_end_255:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_108:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_260:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_260);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_260);
L_loop_end_260:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_261:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_261);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_261);
L_loop_end_261:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_111));
   JUMP(L_clos_exit_111);
L_clos_code_111:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_263:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_263);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_263);
L_loop_end_263:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_264:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_264);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_264);
L_loop_end_264:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_112));
   JUMP(L_clos_exit_112);
L_clos_code_112:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(9));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_265:
  CMP(R3, 8);
   JUMP_GE(L_loop_end_265);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_265);
L_loop_end_265:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_266:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_266);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_266);
L_loop_end_266:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_113));
   JUMP(L_clos_exit_113);
L_clos_code_113:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
POP(FP);
   RETURN;
L_clos_exit_113:
POP(FP);
   RETURN;
L_clos_exit_112:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_262:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_262);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_262);
L_loop_end_262:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_111:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_267:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_267);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_267);
L_loop_end_267:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_268:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_268);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_268);
L_loop_end_268:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_114));
   JUMP(L_clos_exit_114);
L_clos_code_114:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_269:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_269);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_269);
L_loop_end_269:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_270:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_270);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_270);
L_loop_end_270:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_115));
   JUMP(L_clos_exit_115);
L_clos_code_115:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(9));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_271:
  CMP(R3, 8);
   JUMP_GE(L_loop_end_271);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_271);
L_loop_end_271:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_272:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_272);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_272);
L_loop_end_272:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_116));
   JUMP(L_clos_exit_116);
L_clos_code_116:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_273:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_273);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_273);
L_loop_end_273:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_116:
POP(FP);
   RETURN;
L_clos_exit_115:
POP(FP);
   RETURN;
L_clos_exit_114:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_274:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_274);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_274);
L_loop_end_274:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_275:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_275);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_275);
L_loop_end_275:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_117));
   JUMP(L_clos_exit_117);
L_clos_code_117:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_276:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_276);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_276);
L_loop_end_276:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_277:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_277);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_277);
L_loop_end_277:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_118));
   JUMP(L_clos_exit_118);
L_clos_code_118:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(9));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_278:
  CMP(R3, 8);
   JUMP_GE(L_loop_end_278);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_278);
L_loop_end_278:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_279:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_279);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_279);
L_loop_end_279:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_119));
   JUMP(L_clos_exit_119);
L_clos_code_119:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 1));
   MOV(R0, INDD(R0, 0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_280:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_280);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_280);
L_loop_end_280:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_119:
POP(FP);
   RETURN;
L_clos_exit_118:
POP(FP);
   RETURN;
L_clos_exit_117:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_252:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_252);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_252);
L_loop_end_252:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_107:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
  PUSH(1);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_281:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_281);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_281);
L_loop_end_281:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_282:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_282);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_282);
L_loop_end_282:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_120));
   JUMP(L_clos_exit_120);
L_clos_code_120:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(7));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_284:
  CMP(R3, 6);
   JUMP_GE(L_loop_end_284);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_284);
L_loop_end_284:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_285:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_285);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_285);
L_loop_end_285:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_121));
   JUMP(L_clos_exit_121);
L_clos_code_121:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(8));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_286:
  CMP(R3, 7);
   JUMP_GE(L_loop_end_286);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_286);
L_loop_end_286:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_287:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_287);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_287);
L_loop_end_287:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_122));
   JUMP(L_clos_exit_122);
L_clos_code_122:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_122:
POP(FP);
   RETURN;
L_clos_exit_121:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_283:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_283);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_283);
L_loop_end_283:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_120:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_234:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_234);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_234);
L_loop_end_234:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_99:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_231:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_231);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_231);
L_loop_end_231:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_98:
POP(FP);
   RETURN;
L_clos_exit_97:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_288:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_288);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_288);
L_loop_end_288:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_289:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_289);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_289);
L_loop_end_289:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_123));
   JUMP(L_clos_exit_123);
L_clos_code_123:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_291:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_291);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_291);
L_loop_end_291:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_292:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_292);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_292);
L_loop_end_292:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_124));
   JUMP(L_clos_exit_124);
L_clos_code_124:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_293:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_293);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_293);
L_loop_end_293:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_294:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_294);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_294);
L_loop_end_294:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_125));
   JUMP(L_clos_exit_125);
L_clos_code_125:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
POP(FP);
   RETURN;
L_clos_exit_125:
POP(FP);
   RETURN;
L_clos_exit_124:
PUSH(R0);
  PUSH(1);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_295:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_295);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_295);
L_loop_end_295:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_296:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_296);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_296);
L_loop_end_296:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_126));
   JUMP(L_clos_exit_126);
L_clos_code_126:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_297:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_297);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_297);
L_loop_end_297:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_298:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_298);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_298);
L_loop_end_298:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_127));
   JUMP(L_clos_exit_127);
L_clos_code_127:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_299:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_299);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_299);
L_loop_end_299:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_300:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_300);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_300);
L_loop_end_300:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_128));
   JUMP(L_clos_exit_128);
L_clos_code_128:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_128:
POP(FP);
   RETURN;
L_clos_exit_127:
POP(FP);
   RETURN;
L_clos_exit_126:
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(2+0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_290:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_290);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_290);
L_loop_end_290:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_123:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
PUSH(R0);
PUSH(1);
  PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_301:
  CMP(R3, 2);
   JUMP_GE(L_loop_end_301);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_301);
L_loop_end_301:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_302:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_302);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_302);
L_loop_end_302:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_129));
   JUMP(L_clos_exit_129);
L_clos_code_129:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(4));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_303:
  CMP(R3, 3);
   JUMP_GE(L_loop_end_303);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_303);
L_loop_end_303:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_304:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_304);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_304);
L_loop_end_304:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_130));
   JUMP(L_clos_exit_130);
L_clos_code_130:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(5));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_306:
  CMP(R3, 4);
   JUMP_GE(L_loop_end_306);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_306);
L_loop_end_306:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_307:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_307);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_307);
L_loop_end_307:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_131));
   JUMP(L_clos_exit_131);
L_clos_code_131:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  PUSH(IMM(6));
   CALL(MALLOC);
   DROP(1);
   MOV(R1, R0);
   MOV(R2, FPARG(0));
  MOV(R3, IMM(0));
   MOV(R4, IMM(1));
L_loop_308:
  CMP(R3, 5);
   JUMP_GE(L_loop_end_308);
   MOV(INDD(R1, R4), INDD(R2, R3));
   INCR(R3);
   INCR(R4);
   JUMP(L_loop_308);
L_loop_end_308:
  PUSH(IMM(FPARG(1)));
   CALL(MALLOC);
   DROP(1);
   MOV(R3, R0);
  MOV(R4, IMM(0));
L_loop_309:
  CMP(R4, FPARG(1));
   JUMP_GE(L_loop_end_309);
   MOV(INDD(R3, R4), FPARG(2+R4));
   INCR(R4);
   JUMP(L_loop_309);
L_loop_end_309:
  MOV(IND(R1), R3);
   PUSH(IMM(3));
   CALL(MALLOC);
   DROP(1);
   MOV(INDD(R0, 0), T_CLOSURE);
   MOV(INDD(R0, 1), R1);
   MOV(INDD(R0, 2), LABEL(L_clos_code_132));
   JUMP(L_clos_exit_132);
L_clos_code_132:
PUSH(FP);
   MOV(FP, SP);
  CMP(FPARG(1), IMM(1));
   JUMP_NE(L_invalid_num_args);
  MOV(R0, FPARG(2+0));
POP(FP);
   RETURN;
L_clos_exit_132:
POP(FP);
   RETURN;
L_clos_exit_131:
PUSH(R0);
  PUSH(1);
  MOV(R0, FPARG(2+0));
PUSH(R0);
PUSH(1);
  MOV(R0, FPARG(0));
   MOV(R0, INDD(R0, 0));
   MOV(R0, INDD(R0, 0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_305:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_305);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_305);
L_loop_end_305:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_130:
POP(FP);
   RETURN;
L_clos_exit_129:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   PUSH(FPARG(-1)); //return
   MOV(R15, SP);
   MOV(R14, FP);
   SUB(R15, R14); //sp-fp
   MOV(R8, FPARG(1)); //R8-num of args
   MOV(FP, FPARG(-2)); //old fp
   MOV(R9, R14);
   SUB(R9, IMM(4));
   SUB(R9, R8);  MOV(R13, IMM(0));
 L_loop_152:
   CMP(R13, R15);
   JUMP_EQ(L_loop_end_152);
   MOV(STACK(R9+R13), STACK(R14+R13));
   INCR(R13);
   JUMP(L_loop_152);
L_loop_end_152:
  DROP(4+R8);
   JUMPA(INDD(R0, 2));
POP(FP);
   RETURN;
L_clos_exit_64:
POP(FP);
   RETURN;
L_clos_exit_63:
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  CMP(INDD(R0, 0), T_CLOSURE);
   JUMP_NE(L_not_proc);
   PUSH(INDD(R0, 1));
   CALLA(INDD(R0, 2));
   DROP(2+STARG(0));
  SHOW("Result is: ", R0);
   CMP(R0, IMM(1001));
   JUMP_EQ(L_exit); 
   PUSH(R0);
   CALL(WRITE_SOB);
   DROP(1);
   CALL(NEWLINE);
L_exit:
   STOP_MACHINE;
   return 0;
L_invalid_num_args:
   SHOW("Invalid number of args ", R0);
   HALT;
L_invalid_types:
   SHOW("Invalid types ", R0);
   HALT;
L_not_integer:
   SHOW("Argument is not an integer ", R0);
   HALT;
L_not_symbol:
   SHOW("Argument is not a symbol ", R0);
   HALT;
L_not_proc:
   SHOW("Not a procedure ", R0);
   HALT;
L_not_vector:
   SHOW("Argument is not a vector ", R0);
   HALT;
L_not_string:
   SHOW("Argument is not a string ", R0);
   HALT;
L_not_char:
   SHOW("Argument is not a char ", R0);
   HALT;
L_not_fraction:
   SHOW("Argument is not a fraction ", R0);
   HALT;
L_not_list:
   SHOW("Argument is not a list ", R0);
   HALT;
L_var_not_defined:
   SHOW("Var not defined ", R0);
   HALT;
L_unbound_index:
   SHOW("Unbound index ", R0);
   HALT;
L_divide_zero:
   SHOW("Can't divide by zero ", R0);
   HALT;
}