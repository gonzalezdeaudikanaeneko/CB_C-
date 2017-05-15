#ifndef PUNTO_H_
#define PUNTO_H_


using namespace std;
#include <iostream>
class Punto
{
	int x, y;

public:
	Punto();
	Punto(int x, int y);
	~Punto();

	void imprimir();

	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);

	float distancia(Punto p);
};

#endif /* PUNTO_H_ */
