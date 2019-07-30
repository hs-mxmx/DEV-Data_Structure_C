#include "Celdalista.h"

Celdalista::Celdalista(char v, Celdalista* sig)
{
    valor = v;
    siguiente = sig;
}

Celdalista::~Celdalista()
{
}

