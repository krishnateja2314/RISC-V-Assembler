#include "../include/parser.h"
using namespace std;
#include <iostream>

int main()
{

    Instruction result;
    string s = "L1: addi x9, x10, 0xa";
    result = parseInstruction(s);
    cout << result.mnemonic << result.rd << result.rs1 << result.immediate << endl
         << result.instructionInfo.opcode << result.instructionInfo.funct3 << result.instructionInfo.funct7;
    return 0;
}