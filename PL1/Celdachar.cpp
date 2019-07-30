#include "Celdachar.h"

Celdachar::Celdachar(char v, Celdachar* sig)
{
    valor = v;
    siguiente = sig;
}

Celdachar::~Celdachar()
{
}
