#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <string>

enum class InstructionFormat
{
    R_TYPE,
    I_TYPE,
    S_TYPE,
    B_TYPE,
    U_TYPE,
    J_TYPE,
    UNKNOWN
};

struct InstructionInfo
{
    InstructionFormat format;
    uint8_t opcode;
    uint8_t funct3;
    uint8_t funct7;
    InstructionInfo() : format(InstructionFormat::UNKNOWN), opcode(0), funct3(0), funct7(0) {}
    InstructionInfo(InstructionFormat format, uint8_t opcode, uint8_t func3, uint8_t func7) : format(format), opcode(opcode), funct3(func3), funct7(func7) {}
};

struct Instruction
{
    InstructionInfo instructionInfo;
    std::string mnemonic;
    std::string rd;
    std::string rs1;
    std::string rs2;
    int32_t immediate;
    std::string error;
};

#endif