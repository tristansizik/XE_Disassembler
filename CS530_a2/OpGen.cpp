#include "OpGen.h"

// Struct composed of OpCode variances, with their name, opcode, and format
// in order to create a table full of these types and organize our possible opcodes
struct op_code {
    string name;
    string opcode;
    string format;
};

const struct op_code opcodeTable [] = {
    { "ADD", "18", "3/4" },       { "ADDR", "90", "2" },      { "ADDF", "58", "3/4" },
    { "AND", "40", "3/4" },       { "CLEAR", "B4", "2" },     { "COMP", "28", "3/4" },
    { "COMPF", "88", "3/4" },     { "COMPR", "A0", "2" },     { "DIV", "24", "3/4" },
    { "DIVR", "9C", "2" },        { "DIVF", "64", "3/4" },    { "FIX", "C4", "1" },
    { "FLOAT", "C0", "1" },       { "HIO", "F4", "1" },       { "J", "3C", "3/4" },
    { "JEQ", "30", "3/4" },       { "JGT", "34", "3/4" },     { "JLT", "38", "3/4" },
    { "JSUB", "48", "3/4" },      { "LDA", "00", "3/4" },     { "LDB", "68", "3/4" },
    { "LDCH", "50", "3/4" },      { "LDL", "08", "3/4" },     { "LDF", "70", "3/4" },
    { "LDS", "6C", "3/4" },       { "LDT", "74", "3/4" },     { "LDX", "04", "3/4" },
    { "LPS", "D0", "3/4" },       { "MUL", "20", "3/4" },     { "MULR", "98", "2" },
    { "MULF", "60", "3/4" },      { "NORM", "C8", "1" },      { "OR", "44", "3/4" },
    { "RD", "D8", "3/4" },        { "RMO", "AC", "2" },       { "RSUB", "4C", "3/4" },
    { "SHIFTL", "A4", "2" },      { "SHIFTR", "A8", "2" },    { "SIO", "F0", "1" },
    { "SSK", "EC", "3/4" },       { "STA", "0C", "3/4" },     { "STF", "80", "3/4" },
    { "STB", "78", "3/4" },       { "STCH", "54", "3/4" },    { "STI", "D4", "3/4" },
    { "STL", "14", "3/4" },       { "STS", "7C", "3/4" },     { "STSW", "E8", "3/4" },
    { "STT", "84", "3/4" },       { "STX", "10", "3/4" },     { "SUB", "1C", "3/4" },
    { "SUBR", "94", "2" },        { "SUBF", "5C", "3/4" },    { "SVC", "B0", "2" },
    { "TD", "E0", "3/4" },        { "TIO", "F8", "1" },       { "TIX", "2C", "3/4" },
    { "TIXR", "B8", "2" },        { "WD", "DC", "3/4" }
};

// Struct composed of Register Name with their number in respect
// used in order to organize our struct full of all SIC Registers
struct SIC_Reg{
    string name;
    string code;
};

const struct SIC_Reg SIC_Regs [] = {
    { "A", "0" },
    { "X", "1" },
    { "L", "2" },
    { "B", "3" },
    { "S", "4" },
    { "T", "5" },
    { "F", "6" },
    { "PC", "8" },
    { "SW", "9" }
};

// Takes in the string of # of Register and returns the Name of the Register
string Opcode::getRegister(string registerHex){
    for (int i = 0; i < 9; i++) {
        if (SIC_Regs[i].code == registerHex) {
            return SIC_Regs[i].name;
        }
    }
    return "";
}

// Take the first 2 hex digits of the instruction as string
// Return the true opcode as string.
string Opcode::getOpcode(string opcode) {
    int    secondInt;
    string first2Bin;
    string firstHex;
    string mod2HexBin;
    string secondBin;
    string secondHex;
    string translated_opcode;
    string translatedSecondHex;

    firstHex = opcode.substr(0,1);   // grab the first digit of the opcode
    secondHex = opcode.substr(1,1);    // grab the secondd digit of the opcode

    secondInt = Converter::hexToInt(secondHex);             // convert the last string digit to integer
    secondBin = Converter::hexToStringBin(secondInt);       // convert the last integer digit to 4 a binary number

    first2Bin = (char *)secondBin.substr(0,2).c_str();   // grab the first 2 binary digits
    mod2HexBin = strcat((char *)first2Bin.c_str(), "00"); // combine the first 2 binary digit with "00"
    translatedSecondHex = Converter::binToHex(mod2HexBin);// convert the combined 4 binary digits to hex

    translated_opcode = strcat((char *)firstHex.c_str(),(char *)translatedSecondHex.c_str()); // combime both opcode digits after conversion

    return translated_opcode;
}

// Return index of the opcode if it is in the optab. -1 if its not
int Opcode::validateOpcode(string value){
    for (int i = 0; i <= 57; i++) {
        if (opcodeTable[i].opcode.compare(value) == 0) {
            return i;
        }
    }
    return -1;
}
// Returns the Format of Opcode with given location of Opcode inputted
string Opcode::getFormat(int optabIndex){
    string formatType;
    formatType = opcodeTable[optabIndex].format;
    return formatType;
}

// Returns the Instruction name of the Opcode with given location of Opcode inputted
string Opcode::getInstruction(int optabIndex){
    string instructionName;
    instructionName = opcodeTable[optabIndex].name;
    return instructionName;
}
