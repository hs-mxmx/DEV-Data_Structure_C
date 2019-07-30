#ifndef PILA_H
#define PILA_H
#include <Celda.h>

class Pila
{
	private:
		pCelda cima;
	public:
		Pila();
		~Pila(); //Destruye pila
		
		void apilar(char v); //Operacion de apilar
		char desapilar(); //Operacion desapilar
		void mostrar();
		void vaciar();
        bool vacia();
        char verPrimero();
};

#endif // PILA_H
