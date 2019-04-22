// Tristan Sizik    cssc0473    818006833
// Sean Paz         cssc          820246863
// Derek Barbosa    cssc        818690399
//
// CS 530, Spring 2019
// Assignment #2: Disassembler (x mirror)
// OpGen.h

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
