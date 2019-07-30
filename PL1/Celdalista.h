#ifndef CELDALISTA_H
#define CELDALISTA_H
#include <iostream>

using namespace std;
class Celdalista
{
	private:
        char valor;
		Celdalista *siguiente;
        friend class Listas;
	public:
		Celdalista(char v,Celdalista *sig = NULL);
        ~Celdalista();
};

typedef Celdalista *pCeldalista;

#endif // CELDALISTA_H
