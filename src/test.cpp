#include "../include/parser.h"
using namespace std;
#include <iostream>
#include<sstream>
int main()
{

    Instruction result;
    string s = "sd x5, 8(x3)";
    result = parseInstruction(s);
    cout << result.mnemonic << result.rd << result.rs1 << result.immediate << endl
         << result.instructionInfo.opcode << result.instructionInfo.funct3 << result.instructionInfo.funct7;
     return 0;
}