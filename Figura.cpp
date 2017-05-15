/* 
 * File:   Figura.cpp
 * Author: marian
 * 
 * Created on 17 de mayo de 2016, 18:34
 */
using namespace std;
#include "Figura.h"
#include <string.h> //Para strlen y strcpy
#include <iostream>

int Figura::numFiguras=0;
Figura::Figura(char *nf) {
    nombreFigura = new char[strlen(nf)+1];
    strcpy(nombreFigura,nf);
    Figura::numFiguras++;
}

Figura::~Figura() {
	Figura::numFiguras--;
    delete[] nombreFigura;
}

void Figura::imprimir(){
    cout << "NOMBRE: " << nombreFigura << endl;
}

int Figura::getNumFiguras() {
    return Figura::numFiguras;
}



