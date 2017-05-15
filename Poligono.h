/* 
 * File:   Poligono.h
 * Author: marian
 *
 * Created on 17 de mayo de 2016, 18:57
 */

#ifndef POLIGONO_H
#define	POLIGONO_H
using namespace std;
#include "Figura.h"
#include "Punto.h"
#include <iostream>

class Poligono: public Figura {

    int numVertices;
    Punto *vertices;
    
    public:
    Poligono(char *nf, int nv, Punto *vertices);
    virtual float getPerimetro();
    virtual void imprimir();
    virtual ~Poligono();

};

#endif	/* POLIGONO_H */

