#include <iostream>
#include "complexo.h"
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>

Complexo::Complexo(float r, float i, char op) {
    real = r;
    imag = i;
    operacao = op;
}

// Sobrecarga do operador de adição
    Complexo Complexo::operator+ (Complexo &c) {
        float somaReal = real + c.real;
        float somaImag = imag + c.imag;
        return Complexo(somaReal, somaImag, '+');
    }

 // Sobrecarga do operador de subtração
	Complexo Complexo::operator- (Complexo &c) {
	    float subtraiReal = real - c.real;
	    float subtraiImag = imag - c.imag;
	    return Complexo(subtraiReal, subtraiImag, '-');
	}

// Sobrecarga do operador de multiplicação
Complexo Complexo::operator* (Complexo &c) {
    float multiplicaReal = (real * c.real) - (imag * c.imag);
    float multiplicaImag = (real * c.imag) + (imag * c.real);
    return Complexo(multiplicaReal, multiplicaImag, '*');
}

// Sobrecarga do operador de módulo
Complexo Complexo::operator| (Complexo &c) {
	float moduloReal = std::sqrt(pow(real, 2) + pow(imag, 2));
    float moduloImag = std::sqrt(pow(c.imag, 2) + pow(c.real, 2));
    return Complexo(moduloReal, moduloImag, '|');
}

int casas_decimais = 2;
float fator = pow(10, casas_decimais);

  //Sobrecarga do operador de inserção
   std::ostream& operator<< (std::ostream &o, Complexo &c) {
 

   	if(c.operacao == '+'){
   		o << c.real << c.operacao << c.imag << "i";
   	}else if(c.operacao == '-'){
   		if(c.imag < 0){
   			 o << c.real << c.imag << "i";
   		}else{
   			 o << c.real << c.operacao << c.imag << "i";
   		}
   	}else if(c.operacao == '*'){
   		if(c.imag < 0){
   			 o << c.real << c.imag << "i";
   		}else{
   			 o << c.real << '+' << c.imag << "i";
   		}
   	}else if (c.operacao == '|') {
    if (c.real == int(c.real) && c.imag == int(c.imag)) {
        o << c.real << ';' << c.imag;
    } else if (c.real != int(c.real) && c.imag != int(c.imag)) {
        o << std::fixed << std::setprecision(2) << c.real << ';' << c.imag;
    } else if (c.real != int(c.real) && c.imag == int(c.imag)) {
           o << ceil(c.real * fator) / fator << ';' << c.imag;
    } else if (c.real == int(c.real) && c.imag != int(c.imag)) {
         o << c.real << ';' << ceil(c.imag * fator) / fator;
    }
}
    return o;
}