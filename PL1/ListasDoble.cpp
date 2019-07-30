#include "ListasDoble.h"

ListasDoble::ListasDoble()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}


                                                                                                                    //Insertar Izquierda
void ListasDoble::insertarIzda(char v){
	pCeldalistadoble nuevo = new Celdalistadoble(v,NULL,NULL); //Damos el valor v y el puntero nulo
    if(primero == NULL){
        nuevo->valor = v;
        nuevo->siguiente = primero;
        nuevo->anterior = NULL;
		primero = nuevo;
        ultimo = nuevo;
        longitud = longitud + 1;
    }else{
        nuevo->valor = v;
        nuevo->siguiente = primero;
        nuevo->anterior = NULL;
        primero = nuevo;
    }
}

                                                                                                                    //Insertar derecha
void ListasDoble::insertarDcha(char v){
    pCeldalistadoble nuevo = new Celdalistadoble(v,NULL,ultimo);
    if(ultimo == NULL){
        nuevo->valor = v;
        nuevo->siguiente = primero;
        nuevo->anterior = NULL;
		primero = nuevo;
        ultimo = nuevo;
        longitud = longitud + 1;
    }else{
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
    }
    longitud = longitud + 1;
}

                                                                                                                    //Eliminar ultimo
char ListasDoble::eUltimo(){
    pCeldalistadoble nuevo; 
    pCeldalistadoble aux;
    char v;
    if(vacia()==true){
    }else{
        nuevo = primero;
        if(nuevo->siguiente==NULL){ //Solo hay 1
            primero = NULL;
            delete nuevo;
        }else{                      //Hay mas de 1
            do{
                nuevo = nuevo->siguiente;
            }while(nuevo->siguiente->siguiente!=NULL);
        ultimo = nuevo;
        aux = nuevo->siguiente;
        v = aux->valor;
        nuevo->siguiente = NULL;
        nuevo->anterior = NULL;
        delete aux;
        return v;
        }
        longitud = longitud - 1;
    }
}



                                                                                                                    //Coger el ultimo
char ListasDoble::cogerUltimo(){
    pCeldalistadoble aux;
    char v;
    if(vacia()==true){
    }else{
        aux = primero;
        if(aux->siguiente==NULL){ //Solo hay 1
            v = aux->valor;
            return v;
        }else{                      //Hay mas de 1
            do{
                aux = aux->siguiente;
            }while(aux->siguiente!=NULL);
                v = aux->valor;
                return v;
        }
    }
    
}

                                                                                                                    //Mostrar
void ListasDoble::mostrar(){
	pCeldalistadoble aux = primero;
    cout<<"\n\t";
	if(aux == NULL){
		cout<<"\n\tLa lista esta vacia.";
	}else{
        cout<<"\n\t[";
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

                                                                                                                    //Metodo para poner los parentesis
void ListasDoble::completarParentesis(){
    pCeldalistadoble actual;
    pCeldalistadoble aux;
    actual = primero;
    if((actual->anterior==NULL)&&(actual->valor!='(')){
        insertarIzda('(');
        insertarDcha(')');
        actual = primero->siguiente;
        }
    while(actual->siguiente!=NULL){
            char v;
            pCeldalistadoble abierto = new Celdalistadoble(v,NULL,NULL);
            pCeldalistadoble cerrado = new Celdalistadoble(v,NULL,NULL);
            //Caso en el que tengamos (3+4) o 3+4
        if((actual->valor!='(')||(actual->siguiente->siguiente->siguiente->siguiente->valor!=')')){
        if((actual->siguiente->valor!='(')&&(actual->siguiente->valor!=')')&&(actual->siguiente->valor!='+')&&(actual->siguiente->valor!='-')&&(actual->siguiente->valor!='/')&&(actual->siguiente->valor!='*')){
            if((actual->siguiente->siguiente->valor=='+')||(actual->siguiente->siguiente->valor=='-')||(actual->siguiente->siguiente->valor=='/')||(actual->siguiente->siguiente->valor=='*')){
                if((actual->siguiente->siguiente->siguiente->valor!='(')&&(actual->siguiente->siguiente->siguiente->valor!=')')&&(actual->siguiente->siguiente->siguiente->valor!='+')&&(actual->siguiente->siguiente->siguiente->valor!='-')&&(actual->siguiente->siguiente->siguiente->valor!='/')&&(actual->siguiente->siguiente->siguiente->valor!='*')){
                    //Parentesis abierto
                    aux = actual->siguiente;
                    actual->siguiente = abierto;
                    aux->anterior = abierto;
                    abierto->anterior = actual;
                    abierto->siguiente = aux;
                    abierto->valor = '(';
                    //Parentesis cerrado
                    actual = aux;
                    actual = actual->siguiente->siguiente;
                    aux = actual;
                    aux = actual->siguiente;
                    actual->siguiente = cerrado;
                    aux->anterior = cerrado;
                    cerrado->anterior = actual;
                    cerrado->siguiente = aux;
                    cerrado->valor = ')';
                }
            }
    }
    }else{
        
    }
        actual = actual->siguiente;
        }
    
}
    
    


                                                                                                                    //Comprobar si esta vacia
bool ListasDoble::vacia(){
    pCeldalistadoble aux = primero;
    if(aux == NULL){
        return true;
    }else{
        return false;
    }
}




ListasDoble::~ListasDoble()
{
}

