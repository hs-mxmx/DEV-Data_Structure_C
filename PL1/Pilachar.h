#ifndef PILACHAR_H
#define PILACHAR_H
#include <Celdachar.h>;
class Pilachar
{
	private:
		pCeldachar cima;
	public:
		Pilachar();
		~Pilachar(); //Destruye pila
		
		void apilar(char v); //Operacion de apilar
		char desapilar(); //Operacion desapilar
		void mostrar();
		void vaciar();
        bool vacia();
        char verPrimero();
};

#endif // PILACHAR_H
