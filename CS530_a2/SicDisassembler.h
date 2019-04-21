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
