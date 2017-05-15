/* 
 * File:   Circulo.cpp
 * Author: marian
 * 
 * Created on 17 de mayo de 2016, 18:43
 */


#include "Circulo.h"

/*PAra llamar al constructor de la clase padre, se usan listas de inicialización.
 Detrás del constructor de la clase hija se ponen dos puntos y la llamada al constructor
 de la clase padre*/
Circulo::Circulo(char *nf, Punto p, float r):Figura(nf) {
    this->radio = r;
    this->centro = p;
}

float Circulo::getPerimetro(){
    return 2*3.1416*radio;
}

void Circulo::imprimir(){
    Figura::imprimir();
    cout<<"Centro: ";
    this->centro.imprimir();
    cout<<"Radio: "<<radio<<endl;
    cout<<"Periemtro: "<<getPerimetro();
}


Circulo::~Circulo() {
}

