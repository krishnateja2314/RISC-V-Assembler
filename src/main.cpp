#include "../include/encoder.h"
#include "../include/parser.h"
#include "../include/risc-v.h"
#include "../include/data.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string line;
    ifstream input("input.s");
    ProgramCounter = 0;
    while (getline(input, line))
    {
        Lines[ProgramCounter] = parseInstruction(line);
        ProgramCounter++;
    }
    input.close();

    ofstream output("output.hex");

    int linectr = ProgramCounter;
    string hexStr;
    for (ProgramCounter = 0; ProgramCounter < linectr; ProgramCounter++)
    {
        hexStr = InstructionToHex(Lines[ProgramCounter]);
        if (hexStr == "error!!")
        {
            cout << "error at line " << ProgramCounter + 1 << ": " << Lines[ProgramCounter].error << endl;
            output.close();
            remove("output.hex");
            return 0;
        }
        output << hexStr << endl;
    }
    output.close();
    return 0;
}