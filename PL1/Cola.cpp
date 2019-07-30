#include "Cola.h"

Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
}


                                                                                                                    //Encolar
void Cola::encolar(char v){
	pCeldacola nuevo = new Celdacola(v,NULL); //Damos el valor v y el puntero nulo
	if(primero == NULL){
		primero = nuevo;
	}else{
		ultimo->siguiente = nuevo;
	}
	ultimo = nuevo;
}

                                                                                                                    //Desencolar
char Cola::desencolar(){
	pCeldacola celdachar;
	char v;
	if(vacia()==true){
		return 0;
	}else{
	celdachar = primero;
	primero = celdachar->siguiente;
	v = celdachar->valor;
	delete celdachar;
	return v;
	}
}
                                                                                                                

                                                                                                                    //Mostrar
void Cola::mostrar(){
	pCeldacola aux = primero;
    cout<<"\n\t[";
	if(aux==NULL){
		cout<<"La cola esta vacia.";
	}else{
		while(aux){
            if((aux->valor=='(')||(aux->valor=='+')||(aux->valor=='-')||(aux->valor=='/')||(aux->valor=='*')){
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
	}
	cout<<"]";
	}
 
                                                                                                                    //Ver el primero   
void Cola::verPrimero(){
	if(primero==NULL){
		cout<<"La cola esta vacia.";
	}else{
        if((ultimo->valor!='(')&&(ultimo->valor!='*')&&(ultimo->valor!='+')&&(ultimo->valor!='/')&&(ultimo->valor!='-')){
            cout<<primero->valor-'0';
        }else{
            cout<<ultimo->valor;
        }
    }
}
                                                                                                                    //Ver ultimo
void Cola::verUltimo(){
    if(ultimo==NULL){
        cout<<"La cola esta vacia.";
    }else{
        cout<<ultimo->valor;
    }
}

                                                                                                                    //Coger primero
char Cola::cogerPrimero(){
    if(primero==NULL){
        return 0;
    }else{
        return primero->valor;
    }
}

                                                                                                                    //Cola vacia??
bool Cola::vacia(){
    pCeldacola aux = primero;
    if(aux == NULL){
        return true;
    }else{
        return false;
    }
}

Cola::~Cola()
{
    while(primero)
        desencolar();
}

