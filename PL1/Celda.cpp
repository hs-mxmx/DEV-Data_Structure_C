#include "Celda.h"

Celda::Celda(char v, Celda* sig)
{
    valor = v;
    siguiente = sig;
}

Celda::~Celda()
{
}

