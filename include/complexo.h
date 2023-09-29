#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
private:
    float real;
    float imag;
    char operacao;


public:
    Complexo(float r, float i, char op);
    Complexo operator+ (Complexo &c);
    Complexo operator- (Complexo &c);
    Complexo operator* (Complexo &c);
    Complexo operator| (Complexo &c);

    friend std::ostream& operator<< (std::ostream &o, Complexo &c);

};



#endif

