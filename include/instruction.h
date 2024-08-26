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
};

struct Instruction
{
    InstructionInfo instructionInfo;
    std::string mnemonic;
    std::string rd;
    std::string rs1;
    std::string rs2;
    int32_t immediate;
};