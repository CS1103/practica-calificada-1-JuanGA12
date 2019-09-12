//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H
#include <string>
#include <vector>

using namespace std;

class Polynomial {
private:
    unsigned int exponente;
    float coeficiente;
    Polynomial *polinomio;
public:

    Polynomial();
    ~Polynomial();
    Polynomial(unsigned int);
    void add(unsigned int, float);
    void grado(Polynomial&);
    void suma_constante(Polynomial&, int c);
    string get_expression(Polynomial& p);
    Polynomial operator + (const Polynomial&);
    Polynomial operator * (const Polynomial&);
    Polynomial operator +=(const Polynomial&);
};

#endif //POLINOMIO_POLINOMIO_H
