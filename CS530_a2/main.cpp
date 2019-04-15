#include <iostream>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include "Converter.h"

using namespace std;

int main()
{
    int temp = Converter::hexToInt("13");
    string temp2 = Converter::binToHex("1111");
    string temp3 = Converter::intToString(234);
    cout << temp << endl;
    cout << temp2 << endl;
    cout << temp3 << endl;
    return 0;
}
