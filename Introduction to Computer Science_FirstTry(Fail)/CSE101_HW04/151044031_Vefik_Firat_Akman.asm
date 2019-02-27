		LOAD   R1, 1
		LOAD   R2, 8
		LOAD   R3, 0
		
		LOAD   R4, 01010100b
		LOAD   R5, 01001100b
		LOAD   R6, 00000001b
		
		LOAD   RB, 48
Flag1:	MOVE   R0,R2
		jmpEQ  R3=R0, Flag3
		AND    R7, R4, R6
		AND    R8, R5, R6
		ROR    R6, 7
		MOVE   R0, R7
		ADDI   R3, R3, R1
		jmpEQ  R8=R0, Flag2
		JMP 	 Flag3
Flag2:	ADDI   R9, R9, R1
		JMP    Flag1
Flag3:	ADDI	 R9, R9, RB
		MOVE   RF, R9
		HALT
