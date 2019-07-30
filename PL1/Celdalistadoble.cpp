#include "Celdalistadoble.h"

Celdalistadoble::Celdalistadoble(char v, Celdalistadoble* sig, Celdalistadoble* ant)
{
        valor = v;
    siguiente = sig;
    anterior = ant;
}

Celdalistadoble::~Celdalistadoble()
{
}

