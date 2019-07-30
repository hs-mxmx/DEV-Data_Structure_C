#include "Listas.h"
#include "Pila.h"

Listas::Listas()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}


                                                                                                                    //Insertar Izquierda
void Listas::insertarIzda(char v){
	pCeldalista nuevo = new Celdalista(v,NULL); //Damos el valor v y el puntero nulo
    if(primero == NULL){
        nuevo->valor = v;
        nuevo->siguiente = primero;
		primero = nuevo;
        ultimo = nuevo;
        longitud = longitud + 1;
    }else{
        nuevo->valor = v;
        nuevo->siguiente = primero;
        primero = nuevo;
    }
}

                                                                                                                    //Insertar derecha
void Listas::insertarDcha(char v){
    pCeldalista nuevo = new Celdalista(v,NULL);
    if(ultimo == NULL){
        nuevo->valor = v;
        nuevo->siguiente = primero;
		primero = nuevo;
        ultimo = nuevo;
        longitud = longitud + 1;
    }else{
        nuevo->valor = v;
        nuevo->siguiente = NULL;
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
    }
    longitud = longitud + 1;
}




                                                                                                                    //Eliminar primero
char Listas::ePrimero(){
	pCeldalista celdalista;
	if(vacia()==true){
	}else{
	celdalista = primero;
	primero = celdalista->siguiente;
    return celdalista->valor;
	delete celdalista;
    longitud = longitud - 1;
	}
}


                                                                                                                    //Eliminar ultimo
char Listas::eUltimo(){
    pCeldalista nuevo; 
    pCeldalista aux;
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
        delete aux;
        return v;
        }
        longitud = longitud - 1;
    }
}

                                                                                                                    //Coger valor del primero
char Listas::cogerPrimero(){
	pCeldalista celdalista;
	char v;
	if(!primero){
		return 0;
	}else{
	celdalista = primero;
	primero = celdalista->siguiente;
	v = celdalista->valor;
	return v;
	}
}

                                                                                                                    //Coger el ultimo
char Listas::cogerUltimo(){
    pCeldalista aux;
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
void Listas::mostrar(){
	pCeldalista aux = primero;
    cout<<"\n\t";
	if(aux == NULL){
		cout<<"\n\tLa lista esta vacia.";
	}else{
        cout<<"\n\t[";
		while(aux){
            if((aux->valor=='(')||(aux->valor=='+')||(aux->valor=='-')||(aux->valor=='/')||(aux->valor=='*')||aux->valor==')'){
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
    
                                                                                                                    //Consultar el primero
void Listas::verPrimero(){
    if(primero==NULL){
        cout<<"\nLista vacia.";
    }else{
        cout<<primero->valor;
    }
}

                                                                                                                    //Consultar el final
void Listas::verFinal(){
    char elemento;
    if(vacia()==true){
    }else{
        do{
            primero = primero->siguiente;
        }while(primero->siguiente!=NULL);
        elemento = primero->valor;
        cout<<elemento;
    }
}
                                                                                                                    //Comprobar si esta vacia
bool Listas::vacia(){
    pCeldalista aux = primero;
    if(aux == NULL){
        return true;
    }else{
        return false;
    }
}
                                                                                                                    //Coger el elemento que queramos
/*
char Listas::cogerElemento(char v){
    pCeldalista anterior;
    pCeldalista posterior;
    pCeldalista eliminado;
    char elemento;
    if(vacia()==true){
    }else{
        anterior = primero;
        if(anterior->siguiente==NULL){ //Solo hay 1
            primero = NULL;
            eliminado = primero;
            elemento = eliminado->valor;
            delete eliminado;
            return elemento;
        }if(anterior->valor==v){
                eliminado = anterior;
                primero = anterior->siguiente;
                elemento = anterior->valor;
                delete eliminado;
                return elemento;
            }if((anterior->valor!=v)&&(anterior->siguiente!=NULL)){
            while((anterior->siguiente!=NULL)&&(anterior->siguiente->valor!=v)){
                anterior = anterior->siguiente;
            };
            if(anterior->siguiente->valor==v){
            elemento = anterior->siguiente->valor;
            posterior = anterior->siguiente->siguiente; //Asegurarnos
            eliminado = anterior->siguiente;
            anterior->siguiente = posterior;
            delete eliminado;
            return elemento;
            }else{
                return 0;
                }
            }
        }
    }*/
                                                                                                                //Metodo para contar parentesis abiertos
int Listas::contarAbiertos(){
    pCeldalista actual;
    actual = primero;
    int parentesis = 0;
    while(actual!=NULL){
        if(actual->valor=='('){
           parentesis++; 
        }
        actual = actual->siguiente;
    }
    return parentesis;
}
                                                                                                                    //Metodo para contar parentesis cerrados
int Listas::contarCerrados(){
    pCeldalista actual;
    actual = primero;
    int parentesis = 0;
    while(actual!=NULL){
        if(actual->valor==')'){
           parentesis++; 
        }
        actual = actual->siguiente;
    }
    return parentesis;
}

                                                                                                                    //Metodo para consultar si tenemos |numero_operacion_numero| -> 3 + 2
bool Listas::operacion(){
    pCeldalista actual;
    actual = primero;
    //Hasta que lleguemos al final
    while((actual->siguiente!=NULL)){
        if((actual->valor!='+')&&(actual->valor!='-')&&(actual->valor!='/')&&(actual->valor!='*')&&(actual->valor!=')')&&(actual->siguiente!=NULL)){
            actual = actual->siguiente;
           if(((actual->valor=='+')||(actual->valor=='-')||(actual->valor=='/')||(actual->valor=='*'))&&(actual->siguiente!=NULL)){
               actual = actual->siguiente;
               if((actual->valor!='+')&&(actual->valor!='-')&&(actual->valor!='/')&&(actual->valor!='*')&&(actual->valor!=')')){
               }else{
                   return false;
               }
           }else{
               return false;
           }
        }
    }
        return true;
}




                                                                                                                    //Metodo para mover el elemento a la izquierda
void Listas::moverIzda(char v){
	pCeldalista nuevo;
    pCeldalista aux;
    nuevo = primero;
    if(nuevo->valor==v){
        primero = primero->siguiente;
        insertarIzda(nuevo->valor);
    }else{ 
        while((nuevo->siguiente!=NULL)&&(nuevo->siguiente->valor!=v)){
            nuevo = nuevo->siguiente;      
        }if(nuevo->siguiente->valor==v){
            aux = nuevo->siguiente;
            nuevo->siguiente = nuevo->siguiente->siguiente;
            insertarIzda(aux->valor);
        }
    }
}


                                                                                                                    //Metodo para verificar si es correcta la operacion
bool Listas::es_correcta(){
    //Comprobamos si los parentesis estan bien
    if(comprobar_parentesis()==true){
    //Quitamos los parentesis
    quitarParentesis();
    //Comprobamos las operaciones
    if(operacion()==true){
        return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}
    

                                                                                                                    //Metodo para quitar los parentesis de la cola y apilarlos en una pila
void Listas::quitarParentesis(){
    pCeldalista actual;
    Pila pila;
    actual = primero;
    while(actual->siguiente!=NULL){
                                                                                                                    //En caso de que sean parentesis los apilamos
        if((actual->valor=='(')||(actual->valor==')')){
            pila.apilar(actual->valor);
            moverIzda(actual->valor);
            ePrimero();
            }
                                                                                                                    //Avanzamos posicion
            actual = actual->siguiente;
                                                                                                                    //En caso de que estemos en la ultima posicion y sea un parentesis cerrado
            if((actual->valor==')')&&(actual->siguiente==NULL)){
                pila.apilar(actual->valor);
                moverIzda(actual->valor);
                ePrimero();
            }
    }
    cout<<"\n\n::PILA DE PARENTESIS::";
    pila.mostrar();
    cout<<"\n\n::LISTA::";
    mostrar();
}
    

                                                                                                                    //Metodo para comprobar si estan balanceados y bien puestos los parentesis
bool Listas::comprobar_parentesis(){
    pCeldalista actual;
    actual = primero;
    int parentesis_a = 0;
    int parentesis_c = 0;
                                                                                                                    //En caso de que el primero y el ultimo esten mal
    if((actual->valor==')')||(ultimo->valor=='(')){
        cout<<"\nEstan mal colocados los parentesis.";
    }
                                                                                                                    //Comprobamos los parentesis hasta el final
    while(actual->siguiente!=NULL){
        if(actual->valor=='('){
            parentesis_a++;
        }if(actual->valor==')'){
            parentesis_c++;
        }
                                                                                                                    //Si tenemos un numero y lo siguiente es un parentesis abierto ->  (2+(3+(4+(5))))
    if(((actual->valor!='+')&&(actual->valor!='-')&&(actual->valor!='/')&&(actual->valor!='*')&&(actual->valor!=')')&&(actual->valor!='('))&&(actual->siguiente->valor=='(')){
        cout<<"\nEstan mal colocados los parentesis.";
        return false;
                                                                                                                    //En caso de que haya parentesis vacios
        }if((actual->valor=='(')&&(actual->siguiente->valor==')')){
        cout<<"\nEstan mal colocados los parentesis.";
        return false;        
        }
        actual = actual->siguiente;
                                                                                                                    //Caso de que sea un ultimo parentesis ...+3)
        if((actual->valor==')')&&(actual->siguiente==NULL)){
            parentesis_c++;
        }
    }
    if(parentesis_a == parentesis_c){
    return true;
    }else{
        return false;
    }
}

Listas::~Listas()
{
    while(primero)
        ePrimero();
}

