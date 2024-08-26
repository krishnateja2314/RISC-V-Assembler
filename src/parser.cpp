#include "../include/parser.h"
using namespace std;

Instruction parseInstruction(const std::string &line)
{
    vector<string> tokens = tokenize(line);
    Instruction instrction;
    if (tokens.size() == 0)
        return instrction;

    auto instrectInfo = instructionData.find(tokens[0]);
    if (instrectInfo == instructionData.end())
    {
        instrction.error = "No instruction as " + tokens[0];
        return instrction;
    }
    instrction.mnemonic = tokens[0];
    instrction.instructionInfo = instrectInfo->second;

    for (int i = 1; i < tokens.size(); i++)
    {
        string token = tokens[i];
        string newToken = "";
        if (token[0] != 'x')
        {
            if (token[0] == 'r' || token[0] == 's' || token[0] == 'g' || token[0] == 't' || token[0] == 'a' || token[0] == 'z')
            {
                auto reg = registerData.find(token);
                if (reg == registerData.end())
                {
                    instrction.error = "No register as " + token;
                    return instrction;
                }
                newToken = reg->second;
                tokens[i] = newToken;
            }
        }
    }

    if (instrction.instructionInfo.format == InstructionFormat::B_TYPE)
    {
        instrction.rs1 = tokens[1];
        instrction.rs2 = tokens[2];
        instrction.immediate = strToInt(tokens[3]);
    }
    else if (instrction.instructionInfo.format == InstructionFormat::R_TYPE)
    {
        instrction.rd = tokens[1];
        instrction.rs1 = tokens[2];
        instrction.rs2 = tokens[3];
    }
    else if (instrction.instructionInfo.format == InstructionFormat::I_TYPE)
    {
        instrction.rd = tokens[1];
        instrction.rs1 = tokens[2];
        instrction.rs2 = tokens[3];
    }
}