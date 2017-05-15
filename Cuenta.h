/*
 * Cuenta.h
 *
 *  Created on: 15 de may. de 2017
 *      Author: Unai Jauregibeitia
 */

#ifndef CUENTA_H_
#define CUENTA_H_

class Cuenta {
private:
	const int nIdent;
	char *nombre;
	int numCuentas;
	int *ID_Cuenta;
	float *liq;
public:
	Cuenta(const int nIdent, const char *nombre, int numCuentas, int *ID_Cuenta);
	Cuenta(const Cuenta &c);
	virtual ~Cuenta();


};

#endif /* CUENTA_H_ */
