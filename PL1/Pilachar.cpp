#include "Pilachar.h"

Pilachar::Pilachar()
{
    cima = NULL;
}

void Pilachar::apilar(char v){
	pCeldachar nuevo;
	nuevo = new Celdachar(v,cima);
	cima = nuevo;
}

char Pilachar::desapilar(){
	pCeldachar Celdachar;
	char v;
	if(!cima){
		return 0;
	}
	Celdachar = cima;
	cima = Celdachar->siguiente;
	v = Celdachar->valor;
	delete Celdachar;
	return v;
}

void Pilachar::mostrar(){
	pCeldachar aux = cima;
	if(aux == NULL){
		cout<<"\n\tLa pila esta vacia.";
	}else{
        cout<<"\n\t";
		while(aux){
         if(aux->siguiente==NULL){
                    cout<<aux->valor;
            }else{
                    cout<<aux->valor<<" , ";
                }
            
		aux = aux->siguiente;
		}
        cout<<"]";
	}
	}

bool Pilachar::vacia(){
    pCeldachar aux = cima;
    if(aux == NULL){
        return true;
    }else{
        return false;
    }
}

char Pilachar::verPrimero(){
	if(!cima){
		return 0;
	}
    return cima->valor;
}

Pilachar::~Pilachar()
{
    	while(cima){
		desapilar();
	}
}

