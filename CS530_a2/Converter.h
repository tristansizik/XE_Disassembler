// Tristan Sizik    cssc0473    818006833
// Sean Paz         cssc          820246863
// Derek Barbosa    cssc        818690399
//
// CS 530, Spring 2019
// Assignment #2: Disassembler (x mirror)
// Converter.h

#ifndef __Converter__
#define __Converter__

#include <string.h>
#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;

class Converter{
public:
    static int hexToInt(string value);
    static string hexToStringBin(unsigned long value);
    static string binToHex(string value);
    static string intToString(int value);
};
#endif // Definition for Converter Header File
