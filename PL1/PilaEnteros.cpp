#include "PilaEnteros.h"

PilaEnteros::PilaEnteros()
{
    cima = NULL;
}

void PilaEnteros::apilar(int v){
	pCelda nuevo;
	nuevo = new Celda(v,cima);
	cima = nuevo;
}

int PilaEnteros::desapilar(){
	pCelda Celda;
	int v;
	if(!cima){
		return 0;
	}
	Celda = cima;
	cima = Celda->siguiente;
	v = Celda->valor;
	delete Celda;
	return v;
}

void PilaEnteros::mostrar(){
	pCelda aux = cima;
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



PilaEnteros::~PilaEnteros()
{
    	while(cima){
		desapilar();
	}
}


