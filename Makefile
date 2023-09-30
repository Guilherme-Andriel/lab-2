complexo: build/complexo.o build/operadores.o 
	g++ -o bin/complexo build/complexo.o build/operadores.o -Wall -ansi -pedantic

build/complexo.o: src/complexo.cpp include/complexo.h
	g++ -c src/complexo.cpp -Iinclude -o build/complexo.o -Wall -ansi -pedantic

build/operadores.o: src/operadores.cpp include/complexo.h
	g++ -c src/operadores.cpp -Iinclude -o build/operadores.o -Wall -ansi -pedantic
