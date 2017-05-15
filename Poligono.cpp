/* 
 * File:   Poligono.cpp
 * Author: marian
 * 
 * Created on 17 de mayo de 2016, 18:57
 */

#include "Poligono.h"

Poligono::Poligono(char *nf, int nv, Punto *vertices) : Figura(nf){
    /*
     * Con la lista de inicialización llamamos al constructor de la clase padre
     * Dentro del constructor de la clase polígono inicializamos el atributo numVertices,
     * reservamos memoria para el array dinámico y copiamos los puntos del array
     * recibido por parámetro
     */
    this->numVertices=nv;
    this->vertices = new Punto[this->numVertices];
    for(int i=0;i<this->numVertices;i++)
        this->vertices[i] = vertices[i];
}

float Poligono::getPerimetro() {
    float suma=0;
    
    /*Recorremos el array para sumar las distancias de los punto, i cn i+1.
     Recorremos hasta la penúltima posición y al salir sumamos la distancia que hay
     entre el último punto y el primero*/
    for(int i=0; i<this->numVertices-1; i++){
        float dist = this->vertices[i].distancia(this->vertices[i+1]);
        suma = suma + dist;
    }
    suma = suma + this->vertices[this->numVertices-1].distancia(this->vertices[0]);
    return suma;
}

void Poligono::imprimir() {
    /*
     * Llamamos al método imprimir de la clase padre para que muestre el nombre y luego
     * recorremos el array y llamamos al metodo imprimir de cada uno de los puntos contenidos
     * en el array
     */
    Figura::imprimir();
    for(int i=0;i<this->numVertices;i++){
        cout<<"Vertice "<<i<<" = " ;
        this->vertices[i].imprimir();
    }
    cout<<"Periemtro: "<<getPerimetro();
}


Poligono::~Poligono() {
    /*
     * Liberamos la memoria del array dinamico
     */
    delete[] vertices;
}

