// Tristan Sizik    cssc0473    818006833
// Sean Paz         cssc    820246863
// Derek Barbosa    cssc0410    818690399
//
// CS 530, Spring 2019
// Assignment #2: Disassembler (x mirror)
// Converter.cpp

#include <stdlib.h>
#include "Converter.h"

// Convert Hex in string to Int (Decimal)
int Converter::hexToInt(string value){
    int num = 0;
    int pow16 = 1;

    string alpha = "0123456789ABCDEF";
    for(int i = value.length() - 1; i >= 0; --i)
    {
        num += alpha.find(toupper(value[i])) * pow16;
        pow16 *= 16;
    }
    return num;
}

// Take in 1 int and return Binary number as a string.
string Converter::hexToStringBin(unsigned long value) {
    if(value == 0)
        return "0000";
    else if(value == 1)
        return "0001";
    else if(value == 2)
        return "0010";
    else if(value == 3)
        return "0011";
    else if(value == 4)
        return "0100";
    else if(value == 5)
        return "0101";
    else if(value == 6)
        return "0110";
    else if(value == 7)
        return "0111";
    else if(value == 8)
        return "1000";
    else if(value == 9)
        return "1001";
    else if(value == 0x0A)
        return "1010";
    else if(value == 0x0B)
        return "1011";
    else if(value == 0x0C)
        return "1100";
    else if(value == 0x0D)
        return "1101";
    else if(value == 0x0E)
        return "1110";
    else if (value == 0x0F)
        return "1111";
    printf("Opcode Error!\n");
    exit(EXIT_FAILURE);
}

//Take in a 4 binary number as a string and return an integer (decimal)
string Converter::binToHex(string value){
    if(value.compare("0000")==0)
        return "0";
    else if(value.compare("0001")==0)
        return "1";
    else if(value.compare("0010")==0)
        return "2";
    else if(value.compare("0011")==0)
        return "3";
    else if(value.compare("0100")==0)
        return "4";
    else if(value.compare("0101")==0)
        return "5";
    else if(value.compare("0110")==0)
        return "6";
    else if(value.compare("0111")==0)
        return "7";
    else if(value.compare("1000")==0)
        return "8";
    else if(value.compare("1001")==0)
        return "9";
    else if(value.compare("1010")==0)
        return "A";
    else if(value.compare("1011")==0)
        return "B";
    else if(value.compare("1100")==0)
        return "C";
    else if(value.compare("1101")==0)
        return "D";
    else if(value.compare("1110")==0)
        return "E";
    else if(value.compare("1111")==0)
        return "F";
    printf("Invalided Input!\n");
    exit(EXIT_FAILURE);
}

//Take in an integer (decimal) and return that int number as a string
string Converter::intToString(int value){
    string convertToString;

    stringstream ss;  // stream used for the conversion
    ss << value;      // insert the textual representation of 'Number' in the
    convertToString = ss.str(); //characters in the stream

    return convertToString;
}
