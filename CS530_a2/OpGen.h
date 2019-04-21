#ifndef __Assignment2__get_opcode__
#define __Assignment2__get_opcode__

#include "Converter.h"

class Opcode{
public:
    static int validateOpcode(string value);
    static string getOpcode(string opcode);
    static string getRegister(string registerHex);
    static string getFormat(int optabIndex);
    static string getInstruction(int optabIndex);
};

#endif  //OpCode Header File to generate OpCode Information
