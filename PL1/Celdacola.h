#ifndef CELDACOLA_H
#define CELDACOLA_H
#include <iostream>
using namespace std;

class Celdacola
{
    private:
        char valor;
		Celdacola *siguiente;
        friend class Cola;
	public:
		Celdacola(char v,Celdacola *sig = NULL);
        ~Celdacola();

};

typedef Celdacola *pCeldacola;

#endif // CELDACOLA_H
