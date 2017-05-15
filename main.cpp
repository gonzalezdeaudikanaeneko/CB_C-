using namespace std;
#include "Punto.h"
#include "Figura.h"
#include "Circulo.h"
#include "Poligono.h"
#include <iostream>

void imprimirDetalleFigura(Figura &f)
{
	f.imprimir();
	// TAREA 4.2: Implementar esta funciï¿½n.
}

float sumarPerimetros(Figura * figuras[], int numFiguras)
{
	// TAREA 4.3: Implementar esta funciï¿½n.
	float suma=0;
	for(int i=0;i<numFiguras;i++)
		suma = suma + figuras[i]->getPerimetro(); //Pongo la flecha porque es un array de punteros

	return suma;
}

int main(void)
{
	Circulo c1("Circulo1", Punto(1,2), 3); //Circulo creado de forma estÃ¡tica
	Circulo *c2 = new Circulo("Circulo2", Punto(2,1), 4); //Circulo creado de forma dinamica

	Punto vertices[] = {Punto(1,1), Punto(1,2), Punto(2,1)};
	Poligono *p1 = new Poligono("Triangulo", 3, vertices); //Poligono creado de forma dinamica

	// TAREA 4.1: Imprimir por pantalla el numero de figuras creadas
	cout<<"NUMERO DE FIGURAS = "<<Figura::getNumFiguras()<<endl;
	// TAREA 4.2: Imprime el detalle de cada una de las figuras existentes
	imprimirDetalleFigura(c1);
	imprimirDetalleFigura(*c2);//Le ponemos el * para acceder al contenido (el objeto circulo) que guarda el puntero c1
	imprimirDetalleFigura(*p1);
	// TAREA 4.3: Imprimir por pantalla la suma de los perimetros de las 3 figuras
	Figura * figuras[3];
	figuras[0] = &c1;
	figuras[1] = c2;
	figuras[2] = p1;
	//*<ptr> devuelve el contenido del objeto referenciado por el puntero <ptr>.
	//El operador & se utiliza para asignar valores a datos de tipo puntero:

	//&<id> devuelve la dirección de memoria donde comienza la variable <id>.
	//El operador * se usa para acceder a los objetos a los que apunta un puntero:
	float suma = sumarPerimetros(figuras,3);
	cout<<"SUMA PERIMETROS= "<<suma<<endl;
	return 0;
}
