*
 * Programmers: Tristan Sizik, Sean Paz, & Derek Barbosa
 * Username: cssc0473, cssc, cssc0410
 * CS530, Spring 2019
 * Instructor: Guy Leonard
 * Assignment 2
 * Due Date: April 22, 2019
 * README.txt
 */

*Files*:
Converter.cpp, Converter.h, OpGen.cpp, OpGen.h, SicDisassembler.cpp, SicDisassembler.h,
main.cpp, Makefile, sample.obj, sample.sym, README.txt, softwareDesign.txt

*Compile Instructions*: 
-  Type "xed" on the console and it will run the program. The program will display the message,
“Enter your object file name: ”, prompting the user for input.  With object file (file.obj) and
symbol file (file.sym) in the same directory, type the name of the object file (WITHOUT its .obj
extension) and the program will start disassembling it. The program will also create the same
file name with .sic extension (file.sic).  Its contents will be the program's output and the file
will be placed in the same directory.

*Abstract/Summary*:
- Main.cpp will call SicDisassembler.cpp, which will do most of the work, and it will call
Converter.cpp along with Opcode.cpp to help with the disassembling.

- Each method will assist in ultimately creating a XE source file and XE listing file from a XE
object file and symbol file.  Symbols and Literals will also be considered when addresses are
calculated for the user's object file's instruction set.

Converter.cpp 's contents...
* int Converter::hexToInt(string value)
* string Converter::hexToStringBin(unsigned long value)
* string Converter::binToHex(string value)
* string Converter::intToString(int value){

OpGen.cpp...
* string Opcode::getRegister(string registerHex)
* string Opcode::get_Opcode(string opcode)
* int Opcode::validateOpcode(string value)
* string Opcode::getInstruction(int optabIndex)
* string Opcode::getFormat(int optabIndex)
* struct op_code
* struct SIC_Reg

SicDisassembler.cpp...
* void readFile()
* void run()
* vector<string> printFormat(int lineNumber, int start, int tAddr, int baseAddr)
* vector<string> objContent;
* vector<string> symContent;
* map<int,string> litElement, symElement, directive;
* map<int,string>::iterator it;

*Notes*:

For this assignment, we have learned that software design is essential for creating large
projects with so many sub-problems and strict formatting requirements.  Truly, XE programs
require a significant comprehension of low-level languages in order to properly execute program
on any particular operating system.
system.