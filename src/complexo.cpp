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
	
	Complexo num1(numero1, numero2, *operador);
	Complexo num2(numero3, numero4, *operador);

    if (*operador == '+') {
     
		Complexo resultado = num1 + num2;

		std::cout << resultado;

    }else if(*operador == '-'){
  
		Complexo resultado = num1 - num2;

		std::cout << resultado;

    }else if(*operador == '*'){
  
		Complexo resultado = num1 * num2;

		std::cout << resultado;

    }else if(*operador == '|'){
  
		Complexo resultado = num1 | num2;

		std::cout << resultado;

    }else{
    	std::cout << "Operação inválida!" << std::endl;
    }


    return 0;
}


