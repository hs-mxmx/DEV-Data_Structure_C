#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <Pila.h>
#include <Cola.h>
#include <Listas.h>
#include <ListasDoble.h>
#include <Arbol.h>

class Funciones
{
public:
    Funciones();
    ~Funciones();
    int operar(int a,char o,int b);
    int evaluar_expresionInfija(char e[40]);
    int evaluar_expresionInfija2(char e[40]);
    Cola evaluar_postfija(char e[40]);
    int evaluar_postfija2(Cola cola);
    bool es_correcta(char e[40]);
    void completar_parentesis(char e[40]);
    pNodo arbolito(Cola cola);
    pNodo arbolito_ordenado(pNodo operacion,char v,int c);
    void arbolito_infijo(pNodo arbol);
    void arbolito_inOrden(pNodo arbol);
    void datos(pNodo nodo);
    
};

#endif // FUNCIONES_H
