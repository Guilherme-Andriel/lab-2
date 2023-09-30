#include <iostream>
#include <cstdlib>
#include "complexo.h"

int main(int argc, char *argv[]) {
    if (argc != 6) {
        std::cerr << "Uso: " << argv[0] << " <arg1> <arg2> <arg3> <arg4> <operador>" << std::endl;
        return 1;
    }

    char *a = argv[1];
    char *b = argv[2];
    char *c = argv[3];
    char *d = argv[4];
    char *operador = argv[5];

    float numero1 = std::atof(a);
    float numero2 = std::atof(b);
    float numero3 = std::atof(c);
    float numero4 = std::atof(d);
	
	Complexo *num1 = new Complexo(numero1, numero2, *operador);
	Complexo *num2 = new Complexo(numero3, numero4, *operador);
    Complexo *resultado;

    
     if (*operador == '+') {
        resultado = new Complexo(*num1 + *num2);
    } else if (*operador == '-') {
        resultado = new Complexo(*num1 - *num2);
    } else if (*operador == '*') {
        resultado = new Complexo(*num1 * *num2);
    } else if (*operador == '|') {
        resultado = new Complexo(*num1 | *num2);
    } else {
        std::cout << "Operador inválido." << std::endl;
        delete num1; 
        delete num2; 
        return 1;
    }

    std::cout << *resultado << std::endl;

    delete num1;
    delete num2;
    delete resultado;



    return 0;
}


