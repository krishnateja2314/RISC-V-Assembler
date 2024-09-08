all: final cleano

final: src/data.o src/encorder.o src/instruction.o src/main.o src/parser.o src/utils.o
	g++ src/*.o -o riscv_asm

data.o: data.cpp
	g++ -c src/data.o

encorder.o: encorder.cpp
	g++ -c src/encorder.o

instruction.o: instruction.cpp
	g++ -c src/instruction.o

main.o: main.cpp
	g++ -c src/main.o

parser.o: parser.cpp
	g++ -c src/parser.o

utils.o: utils.cpp
	g++ -c src/utils.o


cleano: 
	rm src/*.o

clean: cleano
	rm riscv_asm.exe