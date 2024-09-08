add x1, x2, x3
sub x4, x5, x6
and x13, x14, x15
or x16, x17, x18
xor x19, x20, x21
sll x22, x23, x24
lw x25, x26, 0
lh x27, x28, 4
lb x29, x30, 8
lui x31, 0x1000
sw x1, 0(x2)
label1: sh x3, 4(x4)
sb x5, 8(x6)
beq x7, x8, label1
bne x9, x10, label2
blt x11, x12, label3
bge x13, x14, label4
label4: addi x18, x19, 100
slti x20, x21, 200
andi x22, x23, 0xFF
ori x24, x25, 0xABC
label3: slli x26, x27, 2
srli x28, x29, 3
label2: srai x30, x31, 4
ecall
ebreak