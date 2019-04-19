#ifndef __Assignment2__SicDisassembler__
#define __Assignment2__SicDisassembler__

#include "Opcode.h"

#include <fstream>
#include <vector>
#include <map>

class Disassemble{

public:
    void readFile();
    void run();

    char *fileName;

private:
    vector<string> printFormat(int lineNumber, int start, int tAddr, int baseAddr);
    vector<string> objContent;
    vector<string> symContent;
    map<int,string> litElement, symElement, directive;
    map<int,string>::iterator it;
};

#endif
