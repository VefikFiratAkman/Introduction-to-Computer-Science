	LOAD    R0,1     
	LOAD    R1,1
	LOAD    R3,3        
	LOAD    R4,2
	MOVE    R6,R4
Flag2:  ADDI    R4, R4, R6
	ADDI    R0,R0, R1    
	jmpEQ   R3=R0,Flag1  
	jmp     Flag2    
Flag1:  LOAD    R5, 48
	ADDI    R4, R4, R5
	MOVE    RF, R4
	HALT
	
