/* 
 * File:   Figura.h
 * Author: marian
 *
 * Created on 17 de mayo de 2016, 18:34
 */

#ifndef FIGURA_H
#define	FIGURA_H

class Figura {
    char *nombreFigura;
    static int numFiguras;
public:
    Figura(char *nf);
    virtual ~Figura();
    virtual float getPerimetro()=0;//Metodo abstracto
    virtual void imprimir();
    static int getNumFiguras(); //Si un metodo accede exclusivamente a atributos static, tb es static
};

#endif	/* FIGURA_H */

