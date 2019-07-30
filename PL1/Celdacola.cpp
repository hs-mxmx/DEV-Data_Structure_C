#include "Celdacola.h"

Celdacola::Celdacola(char v, Celdacola* sig)
{
    valor = v;
    siguiente = sig;
}

Celdacola::~Celdacola()
{
}

