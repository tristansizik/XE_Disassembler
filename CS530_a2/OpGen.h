#ifndef __Assignment2__get_opcode__
#define __Assignment2__get_opcode__

#include "Converter.h"

class Opcode{
public:
    static string get_opcode(string opcode);
    static int validateOpcode(string opcode);
    static string getInstruction(int optabIndex);
    static string getFormat(int optabIndex);
    static string getRegister(string register_code);
};

#endif
