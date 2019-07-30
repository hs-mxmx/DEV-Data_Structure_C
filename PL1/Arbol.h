#ifndef ARBOL_H
#define ARBOL_H
#include <Nodo.h>

class Arbol
{
    private: 
        pNodo raiz;
    public:
        Arbol();
        ~Arbol();
        pNodo crearNodo(char v,pNodo padre);
        pNodo crearArbol(char v,pNodo hi,pNodo hd);
        //Internas
            pNodo Derecho(pNodo arbol);
            pNodo Izquierdo(pNodo arbol);
            char Raiz(pNodo arbol);
            int Altura(pNodo arbol);
            bool esVacio(pNodo arbol);
            void mostrar(pNodo arbol,int contador);
            /*void eliminar(pNodo nodo);*/
            int contar_hojas(pNodo nodo);
            int contar_nodos(pNodo nodo);
            bool lleno(int a,int n);
        void insertar(char v,pNodo arbol,pNodo padre);
        void postFija(char v,pNodo arbol,pNodo padre);
        void infija(pNodo arbol);
        void InOrden(pNodo arbol);

};

#endif // ARBOL_H