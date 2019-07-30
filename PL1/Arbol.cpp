#include "Arbol.h"
#include <math.h>

Arbol::Arbol()
{
    raiz = NULL;
}

//Arbol binario con una raiz
pNodo Arbol::crearNodo(char v,pNodo padre){
    pNodo aux = new Nodo(v,NULL,NULL,padre);
    return aux;
}

//Arbol binario a partir de otro
pNodo Arbol::crearArbol(char v,pNodo hi,pNodo hd){
    pNodo aux = new Nodo(v,hi,hd);
    return aux;
}



//Insertar Arbol
void Arbol::insertar(char v,pNodo arbol,pNodo padre){
    if(esVacio(arbol)){
        pNodo nuevo_nodo = crearNodo(v,padre);
        arbol = nuevo_nodo;
    }else{
        if(v <=arbol->valor){
            if(esVacio(arbol->izquierda)){
                arbol->izquierda = crearNodo(v,arbol);
            }else{
                insertar(v,arbol->izquierda,arbol);
            }
        }else{
            if(esVacio(arbol->derecha)){
                arbol->derecha = crearNodo(v,arbol);
            }else{
                insertar(v,arbol->derecha,arbol);
            }
        }
    }
}

//Insertar operaciones postfija
void Arbol::postFija(char v,pNodo arbol,pNodo padre){
    if(esVacio(arbol)){
        pNodo nuevo_nodo = crearNodo(v,arbol);
        arbol = nuevo_nodo;
    }else{
        if(esVacio(arbol->derecha)){
            arbol->derecha = crearNodo(v,arbol);
        }else{
            if(((arbol->derecha->valor=='+')||(arbol->derecha->valor=='-')||(arbol->derecha->valor=='/')||(arbol->derecha->valor=='*'))){
                if((v!='+')&&(v!='-')&&(v!='/')&&(v!='*')){
                    if((esVacio(arbol->derecha->derecha))||(esVacio(arbol->derecha->izquierda))){
                        postFija(v,arbol->derecha,arbol);
                        return;
                    }else{
                        postFija(v,arbol->izquierda,arbol);
                        return;
                    }
                }else{
                    if(esVacio(arbol->izquierda)){
                        arbol->izquierda = crearNodo(v,arbol);
                    }else{
                        postFija(v,arbol->izquierda,arbol);
                        return;
                    }
                }
            }if(esVacio(arbol->izquierda)&&((arbol->derecha->valor!='+')||(arbol->derecha->valor!='-')||(arbol->derecha->valor!='/')||(arbol->derecha->valor!='*'))){
                arbol->izquierda = crearNodo(v,arbol);
            }if(!esVacio(arbol->izquierda)&&(!esVacio(arbol->derecha))){
                return;
            }
        }
    }
}

//Inorden
void Arbol::InOrden(pNodo arbol){
    if(esVacio(arbol)){
        return;
    }else{
        InOrden(arbol->izquierda);
        cout<<'/'<<(int)arbol->valor<<'/';
        InOrden(arbol->derecha);
    }
}

//Contar hojas
int Arbol::contar_hojas(pNodo nodo){
{
   if (esVacio(nodo)){
      return 0;
   }
   else if (esVacio(nodo->izquierda)&&(esVacio(nodo->derecha))){
      return 1;
   }else{
      return contar_hojas(nodo->izquierda) + contar_hojas(nodo->derecha);
        }
    }
}

//Contar nodos
int Arbol::contar_nodos(pNodo nodo){
    if(esVacio(nodo)){
        return 0;
    }else{
        if(!esVacio(nodo)){
            return 1+contar_nodos(nodo->izquierda)+contar_nodos(nodo->derecha);
        }
    }
}

//Arbol lleno
bool Arbol::lleno(int a,int n){
        cout<<"\nHojas: "<<n;
        cout<<"\nAltura: "<<a;
    if((n)==pow(2,a)){
        return true;
    }else{
        return false;
    }
}

//Recorrer y poner parentesis para mostrar infija
void Arbol::infija(pNodo arbol){
    if(esVacio(arbol)){
        return;
    }else{
        if((arbol->valor=='+')||(arbol->valor=='-')||(arbol->valor=='/')||(arbol->valor=='*')){
            cout<<'(';
        infija(arbol->izquierda);
        cout<<arbol->valor;
        infija(arbol->derecha);
        cout<<")";
        }if(((arbol->valor!='+')&&(arbol->valor!='-')&&(arbol->valor!='/')&&(arbol->valor!='*'))&&(!esVacio(arbol))){
            cout<<(int)arbol->valor;
        }
    }
}
    
/*
//Eliminar
void Arbol::eliminar(pNodo arbol){
    delete arbol;
}
 */

//Obtener raiz de un arbol
char Arbol::Raiz(pNodo arbol){
    if(!esVacio(arbol)){
        return arbol->valor;
    }
}
//Obtener hijo izquierdo
pNodo Arbol::Izquierdo(pNodo arbol){
    if(!esVacio(arbol)){
        return arbol->izquierda;
    }
}
//Obtener hijo derecho
pNodo Arbol::Derecho(pNodo arbol){
    if(!esVacio(arbol)){
        return arbol->derecha;
    }
}

//Comprobar si es vacio el arbol
bool Arbol::esVacio(pNodo arbol){
    if(arbol==NULL){
        return true;
    }else{
        return false;
    }
}

//Altura del arbol
int Arbol::Altura(pNodo arbol){
    if(!esVacio(arbol)){
        if(esVacio(arbol->izquierda)){
            if(esVacio(arbol->derecha)){
                return 0;
            }else{
                return 1+Altura(arbol->derecha);
            }
        }else{
            if(esVacio(arbol->derecha)){
                return 1+Altura(arbol->izquierda);
            }else{
                return 1+max(Altura(arbol->izquierda),Altura(arbol->derecha));
            }
        }
    }
}

//Mostrar arbol
void Arbol::mostrar(pNodo arbol,int contador){
    if(esVacio(arbol)){
        return;
    }else{
        mostrar(arbol->derecha,contador+1);
        for(int i = 0;i<contador;i++){
            cout<<"   ";
        }if((arbol->valor=='(')||(arbol->valor=='+')||(arbol->valor=='-')||(arbol->valor=='/')||(arbol->valor=='*')||arbol->valor==')'){
        cout<<arbol->valor<<endl;
        }else{
        cout<<(int)arbol->valor<<endl;
        }
        mostrar(arbol->izquierda,contador+1);
    }
}


Arbol::~Arbol()
{
}						