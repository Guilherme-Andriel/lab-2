#include <cmath>
#include <sstream>
#include "complexo.h"

	Complexo::Complexo(float r, float i, char op) {
	    real = r;
	    imag = i;
	    operacao = op;
	}

	// Métodos get
	float Complexo::getReal(){ return this -> real; }
    float Complexo::getImag(){ return this -> imag; }
    char Complexo::getOperacao(){ return this -> operacao; }

    // Métodos set
    void Complexo::setReal(float r) { this -> real = r; }
    void Complexo::setImag(float i) {this -> imag = i; }
    void Complexo::setOperacao(char op) {this -> operacao = op; }

    // Método arredondar
    void Complexo::arredondar(float var1, float var2) {
    int casas_decimais = 2;
    float fator = pow(10, casas_decimais);

    if (var1 != int(var1) && var2 != int(var2)) {
    	setReal(std::ceil(var1 * fator) / fator);
    	setImag(std::ceil(var2 * fator) / fator);
        var1 = getReal();
        var2 = getImag();
        
    } else if (var1 != int(var1) && var2 == int(var2)) {
         setReal(std::ceil(var1 * fator) / fator);
         var1 = getReal();
    } else if (var1 == int(var1) && var2 != int(var2)) {
      	setImag(std::ceil(var2 * fator) / fator);
      	var2 = getImag();
    }
    
	}


// Sobrecarga do operador de adição
    Complexo Complexo::operator+ (Complexo &c) {
        float somaReal = real + c.getReal();
        float somaImag = imag + c.getImag();
        return Complexo(somaReal, somaImag, '+');
    }

 // Sobrecarga do operador de subtração
	Complexo Complexo::operator- (Complexo &c) {
	    float subtraiReal = real - c.getReal();
	    float subtraiImag = imag - c.getImag();
	    return Complexo(subtraiReal, subtraiImag, '-');
	}

// Sobrecarga do operador de multiplicação
	Complexo Complexo::operator* (Complexo &c) {
	    float multiplicaReal = (real * c.getReal()) - (imag * c.getImag());
	    float multiplicaImag = (real * c.getImag()) + (imag * c.getReal());
	    return Complexo(multiplicaReal, multiplicaImag, '*');
	}

// Sobrecarga do operador de módulo
	Complexo Complexo::operator| (Complexo &c) {
		float moduloReal = std::sqrt(pow(real, 2) + pow(imag, 2));
	    float moduloImag = std::sqrt(pow(c.getImag(), 2) + pow(c.getReal(), 2));
	    return Complexo(moduloReal, moduloImag, '|');
	}


//Sobrecarga do operador de inserção
   	std::ostream& operator<< (std::ostream &o, Complexo &c) {
 
 		c.arredondar(c.getReal(), c.getImag());

	   	if(c.getOperacao() == '+'){
	   		o << c.getReal() << c.getOperacao() << c.getImag() << "i";
	   	}else if(c.getOperacao() == '-'){
	   		if(c.getImag() < 0){
	   			 o << c.getReal() << c.getImag() << "i";
	   		}else{
	   			 o << c.getReal() <<"+"<< c.getImag() << "i";
	   		}
	   	}else if(c.getOperacao() == '*'){
	   		if(c.getImag() < 0){
	   			 o << c.getReal() << c.getImag() << "i";
	   		}else{
	   			 o << c.getReal() << '+' << c.getImag() << "i";
	   		}
	   	}else if (c.getOperacao() == '|') {
	        o << c.getReal() << ';' << c.getImag();
		}

    return o;
	}