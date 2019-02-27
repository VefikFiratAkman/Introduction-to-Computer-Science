load r0,0
load r1,17
load r2,7
load r3,-7
load r4,0
load r5,0
load r6,48
addi r4,r1,r3
FLAG2:
addi r4,r4,r3
jmpLE r4<=r0,FLAG1
jmp FLAG2
FLAG1:
addi r5,r4,r2
addi r5,r5,r6
move rf,r5
halt
