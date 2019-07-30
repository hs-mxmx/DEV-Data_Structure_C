#include "Nodo.h"


Nodo::Nodo(char v, Nodo* izq, Nodo* dcha, Nodo* pad)
{
    valor = v;
    izquierda = izq;
    derecha = dcha;
    padre = pad;
}

Nodo::~Nodo()
{
}

