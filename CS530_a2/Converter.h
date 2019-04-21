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
