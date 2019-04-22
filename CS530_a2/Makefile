CC = g++
CFLAGS = -g
LDFLAGS = -lm

xed : main.o OpGen.o Converter.o SicDisassembler.o
	${CC} ${CFLAGS} OpGen.o Converter.o SicDisassembler.o main.o ${LDFLAGS} -o xed

OpGen.o : OpGen.cpp
	${CC} ${CFLAGS} -c OpGen.cpp

Converter.o : Converter.cpp 
	${CC} ${CFLAGS} -c Converter.cpp

SicDisassembler.o : SicDisassembler.cpp 
	${CC} ${CFLAGS} -c SicDisassembler.cpp
	
main.o : main.cpp
	${CC} ${CFLAGS} -c main.cpp

clean: 
rm -f xed *.o
