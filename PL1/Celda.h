#ifndef CELDA_H
#define CELDA_H
#include <iostream>

using namespace std;
class Celda
{
	private:
        char valor;
		Celda *siguiente;
		friend class Pila;
	public:
		Celda(char v,Celda *sig = NULL);
        ~Celda();
};

typedef Celda *pCelda;

#endif // CELDA_H
