/*
 * Cuenta.cpp
 *
 *  Created on: 15 de may. de 2017
 *      Author: Unai Jauregibeitia
 */

#include "Cuenta.h"
#include <iostream>
#include "string.h"
using namespace std;

Cuenta::Cuenta(const int nIdent, const char *nombre, int numCuentas, int *ID_Cuenta) {
	// TODO Auto-generated constructor stub
	this->nIdent = nIdent;
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);
	this->numCuentas = numCuentas;
	this->ID_Cuenta = ID_Cuenta;
}

Cuenta::Cuenta(const Cuenta &c) {
	// TODO Auto-generated constructor stub
	this->nIdent = c.nIdent;
	this->nombre = new char[strlen(c.nombre) + 1];
	strcpy(this->nombre, c.nombre);
	this->numCuentas = c.numCuentas;
	this->ID_Cuenta = c.ID_Cuenta;
	this->liq = c.liq;
}

Cuenta::~Cuenta() {
	// TODO Auto-generated destructor stub
	delete[].c;
}

