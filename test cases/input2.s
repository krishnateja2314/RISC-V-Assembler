addi x1, x0, 10
addi x2, x0, 20
add x3, x1, x2
sub x4, x2, x1
rem x5, x3, x4
and x6, x5, x4
or x7, x6, x5
xor x8, x7, x4
sll x9, x8, 2
srl x10, x9, 1
slt x11, x10, x8
sltu x12, x11, x10
beq x1, x2, label1
bne x3, x4, label2
blt x5, x6, label3
bge x7, x8, label4
jal x9, label5
lw x13, x9, 0
sw x10, x11, 4
addi x14, x12, 5
slti x15, x13, 10
sltiu x16, x14, 20
beq x15, label6
bne x16, label7
blt x13, label8
bge x14, label9
label1: beq x0, x0, label10
label2: beq x0, x0, label10
label3: beq x0, x0, label10
label4: beq x0, x0, label10
label5: beq x0, x0, label10
label6: beq x0, x0, label10
label7: beq x0, x0, label10
label8: beq x0, x0, label10
label9: beq x0, x0, label10
label10: addi x0, x0, 1