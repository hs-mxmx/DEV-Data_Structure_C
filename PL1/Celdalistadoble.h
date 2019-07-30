#ifndef CELDALISTADOBLE_H
#define CELDALISTADOBLE_H
#include <iostream>

using namespace std;

class Celdalistadoble
{
	private:
        char valor;
		Celdalistadoble *siguiente;
        Celdalistadoble *anterior;
        friend class ListasDoble;
	public:
		Celdalistadoble(char v,Celdalistadoble *sig = NULL,Celdalistadoble *ant = NULL);
        ~Celdalistadoble();
};

typedef Celdalistadoble *pCeldalistadoble;
#endif // CELDALISTADOBLE_H
