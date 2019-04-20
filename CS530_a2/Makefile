CC = g++
CFLAGS = -g
LDFLAGS = -lm

xed : main.o Opcode.o Converter.o SicDisassembler.o
	${CC} ${CFLAGS} Opcode.o Converter.o SicDisassembler.o main.o ${LDFLAGS} -o xed

Opcode.o : Opcode.cpp
	${CC} ${CFLAGS} -c Opcode.cpp

Converter.o : Converter.cpp 
	${CC} ${CFLAGS} -c Converter.cpp

SicDisassembler.o : SicDisassembler.cpp 
	${CC} ${CFLAGS} -c SicDisassembler.cpp
	
main.o : main.cpp
	${CC} ${CFLAGS} -c main.cpp

clean: 
rm -f xed *.o
