#ifndef NODOPILA_H
#define NODOPILA_H
#include <iostream>
using namespace std;
class Nodopila
{
	private:
        char valor;
		Nodopila *siguiente;
		friend class Pilachar;
	public:
		Nodopila(char v,Nodopila *sig = NULL);
        ~Nodopila();
};

typedef Nodopila *pNodopila;

#endif // NODOPILA_H
