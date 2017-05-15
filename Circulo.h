/* 
 * File:   Circulo.h
 * Author: marian
 *
 * Created on 17 de mayo de 2016, 18:43
 */

#ifndef CIRCULO_H
#define	CIRCULO_H
using namespace std;
#include "Punto.h"
#include "Figura.h"

#include <iostream>


class Circulo : public Figura{
    float radio;
    Punto centro;
public:
    Circulo(char *nf, Punto p, float r);
    virtual float getPerimetro();
    virtual void imprimir();
    virtual ~Circulo();
};

#endif	/* CIRCULO_H */

