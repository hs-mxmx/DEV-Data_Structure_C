#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;
class Nodo
{
    private:
        char valor;
        Nodo *izquierda;
        Nodo *derecha;
        Nodo *padre;
        friend class Arbol;
    
    public: 
        Nodo(char v, Nodo *izq = NULL, Nodo *dcha = NULL, Nodo *pad = NULL);
        ~Nodo();
};

typedef Nodo *pNodo;
#endif // NODO_H
