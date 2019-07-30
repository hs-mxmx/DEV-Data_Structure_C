#ifndef LISTAS_H
#define LISTAS_H
#include <Celdalista.h>
class Listas
{
    
private:
    pCeldalista primero;
    pCeldalista ultimo;
    int longitud;
    
public:
    Listas();
    ~Listas();
    void insertarIzda(char v);
    void insertarDcha(char v);
    char ePrimero();
    char eUltimo();
    void verPrimero();
    void verFinal();  
    char cogerPrimero();
    char cogerUltimo();
    void mostrar();
    bool vacia();
    /*char cogerElemento(char v);*/
    int contarAbiertos();
    int contarCerrados();
    bool operacion();
    bool comprobar_parentesis();
    void moverIzda(char v);
    void quitarParentesis();
    bool es_correcta();
};

#endif // LISTAS_H
