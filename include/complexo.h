#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
private:
    float real;
    float imag;
    char operacao;


public:
    Complexo(float r, float i, char op);
    Complexo();
    Complexo operator+ (Complexo &c);
    Complexo operator- (Complexo &c);
    Complexo operator* (Complexo &c);
    Complexo operator| (Complexo &c);

    friend std::ostream& operator<< (std::ostream &o, Complexo &c);

     // Métodos get
    float getReal();
    float getImag(); 
    char getOperacao();

    // Métodos set
    void setReal(float r);
    void setImag(float i);
    void setOperacao(char op);

    void arredondar(float var1, float var2);


};



#endif

