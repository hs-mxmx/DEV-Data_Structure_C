#ifndef COLA_H
#define COLA_H
#include <Celdacola.h>

class Cola
{
    
private:
		//Creamos punteros
		pCeldacola primero;
		pCeldacola ultimo;
public:
    Cola();
    ~Cola();
        void encolar(char v);
		char desencolar();
		void mostrar();
        void verPrimero();
        void verUltimo();
        bool vacia();
        char cogerPrimero();
};

#endif // COLA_H
