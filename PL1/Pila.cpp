#include "Pila.h"

Pila::Pila()
{
    cima = NULL;
}

void Pila::apilar(char v){
	pCelda nuevo;
	nuevo = new Celda(v,cima);
	cima = nuevo;
}

char Pila::desapilar(){
	pCelda Celda;
	char v;
	if(!cima){
		return 0;
	}
	Celda = cima;
	cima = Celda->siguiente;
	v = Celda->valor;
	delete Celda;
	return v;
}

void Pila::mostrar(){
	pCelda aux = cima;
    char c;
	if(aux == NULL){
		cout<<"\n\tLa pila esta vacia.";
	}else{
        cout<<"\n\t";
		while(aux){
            if((aux->valor=='(')||(aux->valor=='+')||(aux->valor=='-')||(aux->valor=='/')||(aux->valor=='*')||(aux->valor==')')){
                if(aux->siguiente==NULL){
                    cout<<aux->valor;
                }else{
                    cout<<aux->valor<<" , ";
                }
            }else{
                if(aux->siguiente==NULL){
                    cout<<(int)aux->valor;                   
                }else{
                    cout<<(int)aux->valor<<" , ";
                    }
                }
                aux = aux->siguiente;
            }
        cout<<"]";
        }
	}

bool Pila::vacia(){
    pCelda aux = cima;
    if(aux == NULL){
        return true;
    }else{
        return false;
    }
}

char Pila::verPrimero(){
	if(!cima){
		return 0;
	}
    return cima->valor;
}

Pila::~Pila()
{
    	while(cima){
		desapilar();
	}
}

