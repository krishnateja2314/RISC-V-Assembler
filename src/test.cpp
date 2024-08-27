#include "../include/parser.h"
using namespace std;
#include <iostream>

int main()
{

    Instruction result;
    string s = "jbl x1, 3543";
    result = parseInstruction(s);
    cout << result.mnemonic << result.rd << result.rs1 << result.immediate << endl
         << result.instructionInfo.opcode << result.instructionInfo.funct3 << result.instructionInfo.funct7;
    return 0;
}