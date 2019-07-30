#ifndef LISTASDOBLE_H
#define LISTASDOBLE_H
#include <Celdalistadoble.h>

class ListasDoble
{
    private:
        pCeldalistadoble primero;
        pCeldalistadoble ultimo;
        int longitud;
    public:
        ListasDoble();
        ~ListasDoble();
        void insertarDcha(char v);
        void insertarIzda(char v);
        void mostrar();
        bool vacia();
        char eUltimo();
        char cogerUltimo();
        void completarParentesis();
};

#endif // LISTASDOBLE_H
