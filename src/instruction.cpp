#include "../include/instruction.h"
#include<sstream>

using namespace std;

string R_type_to_hex(const Instruction R)
{
    int decimal_value=0;
    decimal_value += (R.instructionInfo.funct7 << 25);
    decimal_value += (R.rs2 << 20);
    decimal_value += (R.rs1 << 15);
    decimal_value += (R.instructionInfo.funct3 << 12);
    decimal_value += (R.rd<< 7);
    decimal_value += (R.instructionInfo.opcode);
    string str;
    stringstream ss;
    ss << std::hex << decimal_value;
    str= ss.str();
    if(str.length()!=8){
        str = string(8 - str.length(),'0') + str ;
    }
    return str;
}

string I_type_to_hex(const Instruction I)
{
    int decimal_value=0;
    decimal_value += (I.immediate << 20 );
    decimal_value += (I.rs1 << 15);
    decimal_value += (I.instructionInfo.funct3 << 12);
    decimal_value += (I.rd<< 7);
    decimal_value += (I.instructionInfo.opcode);
    string str;
    stringstream ss;
    ss << std::hex << decimal_value;
    str= ss.str();
    if(str.length()!=8){
        str = string(8 - str.length(),'0') + str ;
    }
    return str;
}

string S_type_to_hex(const Instruction S)
{
    int decimal_value=0;       
    int i=0b111111100000;
    int j= S.immediate & i;
    decimal_value += (j << 25 );
    decimal_value += (S.rs2 << 20);
    decimal_value += (S.rs1 << 15);
    decimal_value += (S.instructionInfo.funct3 << 12);
    i=0b11111;
    j= S.immediate & i;
    decimal_value += (j << 7);
    decimal_value += (S.instructionInfo.opcode);
    string str;
    stringstream ss;
    ss << std::hex << decimal_value;
    str= ss.str();
    if(str.length()!=8){
        str = string(8 - str.length(),'0') + str ;
    }
    return str;
}