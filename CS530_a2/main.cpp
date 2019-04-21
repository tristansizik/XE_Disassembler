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
    int temp = Converter::hexToInt("13");
    string temp2 = Converter::binToHex("1111");
    string temp3 = Converter::intToString(234);
    cout << temp << endl;
    cout << temp2 << endl;
    cout << temp3 << endl;
    temp2 = Opcode::getOpcode("58");
    temp = Opcode::validateOpcode(temp2);
    string temp4 = Opcode::getFormat(temp);
    temp3 = Opcode::getRegister("0");
    cout << temp2 <<endl;
    cout << temp <<endl;
    cout << temp3 <<endl;
    cout << temp4 <<endl;
    return 0;
}
