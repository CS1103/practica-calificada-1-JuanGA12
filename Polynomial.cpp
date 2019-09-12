//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"

Polynomial::Polynomial():polinomio{nullptr}, exponente{0}, coeficiente{0} {
    //todos los valores a 0;
}

Polynomial::Polynomial(unsigned int j):exponente{j} {
    polinomio = new Polynomial[exponente];//van haber tantos polimonios como el numero de exponente + 1;
    //ejemplo exponente 2, 1 + 2x^1 + 4x^2, # de polinomios = 3 = 2 + 1;

}

void Polynomial::add(unsigned int expo, float coe) {

    auto tmp = new Polynomial[exponente + 1];

    for (int i = 0; i < exponente; ++i) {
        tmp[i] = polinomio[i];
    }

    delete [] polinomio;

    polinomio = tmp;

    //polinomio[exponente] = se deberia igualar a "coeficientex^exponente"

    exponente ++;

}

void Polynomial::grado(Polynomial &) {
    cout<<exponente;
}

Polynomial::~Polynomial() {
    delete [] polinomio;
}

string Polynomial::get_expression(Polynomial &p) {
    return std::string();
}

Polynomial Polynomial::operator+(const Polynomial & p1) {
    Polynomial tmp(p1);
    for (int j = 0; j < p1.exponente; j++) {
        tmp.polinomio[j] = tmp.polinomio[j] + this->polinomio[j];
    }

    return tmp;
}

Polynomial Polynomial::operator+=(const Polynomial & p1) {
    Polynomial tmp(p1);
    for (int i = 0; i < p1.exponente ; ++i) {
        tmp.polinomio[i] =
    }

}

void Polynomial::suma_constante(Polynomial & p1, int c) {
    Polynomial tmp(p1);
    for (int i = 0; i < p1.exponente; ++i) {
        polinomio[i] = c * tmp.polinomio[i];//
    }
}

Polynomial Polynomial::operator*(const Polynomial & p1) {
    auto tmp = new Polynomial();
    for (int i = 0; i < p1.exponente ; ++i) {
        tmp->polinomio[i] =  tmp->polinomio[i] * this->polinomio[i];
    }
}



