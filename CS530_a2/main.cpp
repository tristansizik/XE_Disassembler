#include <iostream>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include "Converter.h"
#include "OpGen.h"
#include "SicDisassembler.h"

using namespace std;

int main()
{
    Disassemble *test = new Disassemble;
    test->readFile();
    return 0;
}
