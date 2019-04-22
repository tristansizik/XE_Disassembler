// Tristan Sizik    cssc0473    818006833
// Sean Paz         cssc          820246863
// Derek Barbosa    cssc        818690399
//
// CS 530, Spring 2019
// Assignment #2: Disassembler (x mirror)
// SicDisassembler.h

#ifndef __Assignment2__SicDisassembler__
#define __Assignment2__SicDisassembler__

#include "OpGen.h"

#include <fstream>
#include <vector>
#include <map>

class Disassemble{

public:
    void run();
    void readFile();

    char *fileName;

private:
    vector<string> printFormat(int lineNumber, int start, int tAddr, int baseAddr);
    vector<string> symContent;
    vector<string> objContent;
    map<int,string> litElement, symElement, directive;
    map<int,string>::iterator it;
};

#endif  //SicDisassembler Header File Definition
