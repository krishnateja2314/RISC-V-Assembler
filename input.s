# Test I-Type and S-Type instructions
addi x1, x2, 100     # x1 = x2 + 100
slti x3, x4, 50      # x3 = (x4 < 50) ? 1 : 0
lw x5, 0(x6)       # Load word from address in x6 to x5
sw x7, 4(x8)       # Store word from x7 to address in x8 + 4
andi x9, x10, 255 # x9 = x10 & 255
ori x11, x12, 128   # x11 = x12 | 128
xori x13, x14, 64    # x13 = x14 ^ 64