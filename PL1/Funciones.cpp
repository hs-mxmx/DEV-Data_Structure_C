#include "Funciones.h"
#include <string.h>


Funciones::Funciones()
{
}

                                                                            /* C A L C U L A D O R A */
int Funciones::operar(int a,char o,int b){
            double total;
            switch(o){
            case '/': total = a / b;
            break;
            case '*': total = a * b;
            break;
            case '+': total = a + b;
            break;
            case '-': total = a - b;
            break;
            }
            return total;
}

                                                                            /* E X P R E S I O N     I N F I J A  1 */
int Funciones :: evaluar_expresionInfija(char e[40]){
                                                                                            //Declaracion de variables
    Funciones funciones;
    Pila p1;
    Pila p2;
    int contador = 0;
    char elemento;
    int nueva;
    int primero,segundo = 0;
    char operando;
    int resultado;
    int longitud = strlen(e);
    
    for(int i = 0;i<longitud;i++){
                                                                                            //Apilamos numeros
    if((e[i]>=48)&&(e[i]<=57)){
        elemento = (e[i]-'0');
        if((e[i+1]>=48)&&(e[i+1]<=57)){
            p2.apilar(elemento);
            i++;
            nueva = ((p2.desapilar())*10);
            elemento = (e[i]);
            nueva = nueva + elemento;
            p2.apilar((nueva)-'0');
            i++;
        }else{
            p2.apilar(elemento);
        }
    }
                                                                                            //Apilamos operandos
    if(((e[i]=='(')||(e[i]=='/')||(e[i]=='*')||(e[i]=='+')||(e[i]=='-'))&&(e[i]!='\0')){
        p1.apilar(e[i]);
    }
                                                                                            //Operamos
    if(e[i]==')'){
        segundo = (p2.desapilar());
        operando = p1.desapilar();
        primero = (p2.desapilar());
        p2.apilar(funciones.operar(primero,operando,segundo));
        p1.desapilar();
    }
                                                                                            //Proceso
    contador++;;
    if(contador<longitud){
        /*
        cout<<"\nPaso: "<<contador;
        p1.mostrar();
        p2.mostrar();
         */
        }
    }
    
                                                                                            //Si hemos llegado al final y la pila de operandos está vacia
    if((contador==longitud)&&(p1.vacia()==true)){
        /*
        cout<<"\n::FINAL::";
        p1.mostrar();
        p2.mostrar();
         */
        resultado = p2.desapilar();
        cout<<"\nEl resultado es: "<<resultado;
        return resultado;
    }else{                                                                                  //Si hemos llegado al final y la pila de operandos no está vacia
        while(p1.vacia()==false){
            segundo = (p2.desapilar());
            operando = p1.desapilar();
            primero = (p2.desapilar());
            p2.apilar(funciones.operar(primero,operando,segundo));
            p1.desapilar();
    
        }       /*cout<<"\n::FINAL::";
                p1.mostrar();
                p2.mostrar();*/
    }   
                resultado = p2.desapilar();
                cout<<"\nEl resultado es: "<<resultado;
                return resultado;
}

                                                                            /* E X P R E S I O N     I N F I J A  2 */
int Funciones :: evaluar_expresionInfija2(char e[40]){
                                                                                            //Declaracion de variables
    Funciones funciones;
    Pila p1;
    Pila p2;
    int contador = 0;
    int sumyres = 0;
    int multydiv = 0;
    int numeros = 0;
    int nueva;
    char elemento;
    int parentesis = 0;
    int primero,segundo = 0;
    int resultado;
    char operando;
    bool nulo = false;
    int longitud = strlen(e);
    
    for(int i = 0;i<longitud;i++){
                                                                                            //Apilamos numeros
        if((e[i]>=48)&&(e[i]<=57)){
        elemento = (e[i]-'0');
        if((e[i+1]>=48)&&(e[i+1]<=57)){
            p2.apilar(elemento);
            i++;
            nueva = ((p2.desapilar())*10);
            elemento = (e[i]);
            nueva = nueva + elemento;
            p2.apilar((nueva)-'0');
            i++;
        }else{
            p2.apilar(elemento);
        }
        numeros++;
    }
                                                                                            //Apilamos operandos
    if(((e[i]=='(')||(e[i]=='/')||(e[i]=='*')||(e[i]=='+')||(e[i]=='-'))&&(e[i]!='\0')){
            p1.apilar(e[i]);
        if((e[i]=='+')||(e[i]=='-')){
            sumyres++;
            
        }if((e[i]=='/')||(e[i]=='*')){
            multydiv++;
        }if((e[i]=='(')){
            parentesis++;
        }
    }
                                                                                            //Caso donde tenemos una operacion seguido de un parentesis -> 9*(
    if(((e[i]=='+')||(e[i]=='-')||(e[i]=='/')||(e[i]=='*'))&&(e[i+1]=='(')){
        nulo=true;
    }
                                                            /*   C    A    S    O    S    */
    
                                                                    /*CASO 1*/
                                                                    
    if((multydiv>=1)&&(e[i]>=48)&&(e[i]<=57)&&(nulo==false)){                                //Si tenemos un multiplicar o dividir, un numero apilado y el elemento actual es un numero
                segundo = (p2.desapilar());
                operando = p1.desapilar();
                primero = (p2.desapilar());
                p2.apilar(funciones.operar(primero,operando,segundo));
                //Quitamos el ultimo parentesis
                numeros = numeros - 1;
                multydiv--;
                                                                    /*CASO 2*/ 
                                                                    
    }if((multydiv==0)&&(sumyres==2)&&(nulo==false)&&((e[i]!='*')||(e[i]!='/'))){             //Si tenemos un sumar o restar apilado, y tenemos otro seleccionado
                elemento = p1.desapilar();
                segundo = (p2.desapilar());
                operando = p1.desapilar();
                primero = (p2.desapilar());
                p2.apilar(funciones.operar(primero,operando,segundo));
                //Quitamos el ultimo parentesis
                p1.apilar(elemento);
                sumyres--;
                numeros = numeros - 1;
                                                                    /*CASO 3*/
                                                                    
    }if((e[i]==')')&&((multydiv>0)||(sumyres>0))){                                           //Si hemos llegado a un parentesis y tenemos algun operando por el camino
                nulo = false;
                do{
                segundo = (p2.desapilar());
                operando = p1.desapilar();
                primero = (p2.desapilar());
                if((operando=='*')||(operando=='/')){
                    multydiv--;
                }if((operando=='+')||(operando=='-')){
                    sumyres--;
                }
                p2.apilar(funciones.operar(primero,operando,segundo));
                numeros--;
                
                }while(((sumyres>0)||(multydiv>0))&&(parentesis==1));                        //En caso que haya mas de 1 operacion en un mismo parentesis
            }
                
                                                                                            //Mostramos el resultado
            contador++;
            cout<<"\nPaso: "<<i;
            p1.mostrar();
            p2.mostrar();
                                                                                            //Quitamos el ultimo parentesis                                          
        if((parentesis>0)&&(p1.verPrimero()=='(')){
        p1.desapilar();
        }

     
    }         if((p1.vacia()==false)){                                                      //En caso de que la pila de operandos no este vacia, operamos
                    do{
                    segundo = (p2.desapilar());
                    operando = p1.desapilar();
                    primero = (p2.desapilar());
                    if((operando=='*')||(operando=='/')){
                        multydiv--;
                    }if((operando=='+')||(operando=='-')){
                    sumyres--;
                    }
                    p2.apilar(funciones.operar(primero,operando,segundo));
                    numeros--;
                
                    }while((sumyres>0)||(multydiv>0));
                                                                                            //Mostramos el resultado
                cout<<"\n::FINAL::";
                p1.mostrar();
                p2.mostrar();

    }   
                                                                                            //Devolvemos el resultado
                resultado = p2.desapilar();
                return resultado;
}

                                                                                /* E X P R E S I O N     P O S T F I J A   */

Cola Funciones::evaluar_postfija(char e[40]){
                                                                                            //Declaracion de variables
    Pila pila;
    Cola cola;
    int i = 0;
    int nueva;
    char elemento;
    int longitud = strlen(e);
    do{
                                                                                            //Encolamos numeros
        if((e[i]>=48)&&(e[i]<=57)){
        elemento = (e[i]-'0');
        if((e[i+1]>=48)&&(e[i+1]<=57)){
            pila.apilar(elemento);
            i++;
            nueva = ((pila.desapilar())*10);
            elemento = (e[i]);
            nueva = nueva + elemento;
            cola.encolar((nueva)-'0');
            i++;
        }else{
            cola.encolar(elemento);
            }
        }

                                                                                            //Parentesis abierto
    if(e[i]=='('){
           pila.apilar(e[i]);
        }
                                                                                            //Parentesis cerrado
    if(e[i]==')'){
        do{
            cola.encolar(pila.desapilar());
        }while((pila.vacia()==false)&&(pila.verPrimero()!='('));
    
                                                                                            //Parentesis abierto en la pila
    if(pila.verPrimero()=='('){
        pila.desapilar();
        }
    }
                                                                                            //PRIORIDAD DE OPERADORES
            if(((e[i]=='/')||(e[i]=='*')||(e[i]=='+')||(e[i]=='-'))&&(e[i]!='\0')){                                                                                //Comparamos el elemento de la pila con el del vector
            while((pila.vacia()==false)&&                                                                                                                          //Mientras que la pila no este vacia comparamos
            ((((pila.verPrimero()=='+')||(pila.verPrimero()=='-')||(pila.verPrimero()=='/')||(pila.verPrimero()=='*'))&&((e[i]=='+')||(e[i]=='-')))                //Si es un sumar o restar encolamos lo de la pila
            ||(((pila.verPrimero()=='/')||((pila.verPrimero()=='*')))&&((e[i]=='/')||(e[i]=='*'))))){                                                              //Si es un multipliplicar o dividir, y hay un multiplicar o dividir en la pila, encolamos lo de la pila.
                                cola.encolar(pila.desapilar());
            }
            pila.apilar(e[i]);
    }

    i++;
                                                                                            //Mientras que la pila no este vacia y hayamos recorrido el vector
        if(((i==longitud))&&(pila.vacia()==false)){
    do{
        cola.encolar(pila.desapilar());                                                     //Encolamos el resto de la pila en la cola
        }while(pila.vacia()==false);
    }
    
    if(i<longitud-1){                                                                                        //Mostramos el resultado
        cout<<"\nPaso: "<<i;
        pila.mostrar();
        cola.mostrar();
    }else{
        cout<<"\n::FINAL::";
        pila.mostrar();
        cola.mostrar();
    }
    }while(i<longitud);
    
    return cola;
}

                                                                                /* E V A L U A R     I N F I J A    A    P O S T F I J A   Y   R E S O L V E R  */

int Funciones::evaluar_postfija2(Cola cola){
                                                                                            //Declaracion de variables
    Funciones funciones;
    Pila pila;
    char operando;
    int resultado;
    int primero,segundo;
    int numeros = 0;
    int i = 0;
                                                                                            //Mostramos la cola
    cola.mostrar();
    
    do{
                                                                                            //Apilamos los numeros
        if((cola.cogerPrimero()!='+')&&(cola.cogerPrimero()!='-')&&(cola.cogerPrimero()!='/')&&(cola.cogerPrimero()!='*')&&(cola.cogerPrimero()!=')')&&(cola.cogerPrimero()!='(')){
        pila.apilar(cola.desencolar());
        numeros ++;
    
         }if((cola.cogerPrimero()=='+')||(cola.cogerPrimero()=='-')||(cola.cogerPrimero()=='/')||(cola.cogerPrimero()=='*')){                                      //Si tenemos un sumar o restar apilado, y tenemos otro seleccionado
                segundo = (pila.desapilar());
                operando = cola.desencolar();
                primero = (pila.desapilar());
                pila.apilar(funciones.operar(primero,operando,segundo));
                numeros=0;
                }
        
        if(cola.vacia()==false){
            cout<<"\nPaso: "<<i;
            pila.mostrar();
            cola.mostrar();
            i++;
        }else{
            cout<<"\n::FINAL::";
            pila.mostrar();
            cola.mostrar();
        }
                                                                                            //Repite el proceso hasta que la cola quede vacia
    }while(cola.vacia()==false);
        resultado = pila.desapilar();
        return resultado;
}

                                                                                /* E V A L U A R    O P E R A C I O N */
bool Funciones::es_correcta(char e[40]){
                                                                                            //Declaracion de variables
    Listas listas;
    Pila pila;
    char elemento;
    int nueva;
    int longitud = strlen(e);
                                                                                            //Enlistamos toda la expresion
    for(int i = 0;i<longitud;i++){ 
        if((e[i]>=48)&&(e[i]<=57)){
        elemento = (e[i]-'0');
        if((e[i+1]>=48)&&(e[i+1]<=57)){
            pila.apilar(elemento);
            i++;
            nueva = ((pila.desapilar())*10);
            elemento = (e[i]);
            nueva = nueva + elemento;
            listas.insertarDcha((nueva)-'0');
        }else{
            listas.insertarDcha(elemento);
        }
    }else{
        listas.insertarDcha(e[i]);
        }
    }
                                                                                            //Comprobamos
    if(listas.es_correcta()==true){
        cout<<"\n\nLa operacion insertada es correcta.";
        return true;
    }else{
        cout<<"\n\nLa operacion insertada no es correcta, intentalo de nuevo.";
        return false;
    }    
}
   

                                                                                /* C O M P L E T A R    P A R E N T E S I S */
void Funciones::completar_parentesis(char e[40]){
                                                                                            //Declaracion de variables
    ListasDoble listasdoble;
    char elemento;
    int nueva;
    int longitud = strlen(e);
                                                                                            //Enlistamos toda la expresion
     for(int i = 0;i<longitud;i++){ 
        if((e[i]>=48)&&(e[i]<=57)){
        elemento = (e[i]-'0');
        if((e[i+1]>=48)&&(e[i+1]<=57)){
            listasdoble.insertarDcha(elemento);
            i++;
            nueva = ((listasdoble.cogerUltimo())*10);
            listasdoble.eUltimo();
            elemento = (e[i]);
            nueva = nueva + elemento;
            listasdoble.insertarDcha((nueva)-'0');
        }else{
            listasdoble.insertarDcha(elemento);
        }
    }else{
        listasdoble.insertarDcha(e[i]);
        }
    }
                                                                                            //Mostramos la Nueva lista doble rellena por la lista anterior
    cout<<"\nNueva lista: ";
    listasdoble.mostrar();
                                                                                            //Usamos el metodo para completar los parentesis
    listasdoble.completarParentesis();
                                                                                            //Mostramos el resultado final
    listasdoble.mostrar();
    
} 

                                                                                /* C R E A R   A R B O L   C O N   P O S T F I J A */
pNodo Funciones::arbolito(Cola cola){
    Arbol arbol;
    pNodo nodo;
    char numero;
    char elemento;
    char elementob;
    int nueva;
    int contador = 0;
    char e[40];
    int recorrer = 0;
    
    //Pasamos la cola a un vector para recorrerlo de manera inversa y poder insertarlo en el arbol
    while(!cola.vacia()){
        e[contador] = cola.cogerPrimero();
        cola.desencolar();
        contador++;
    }
    contador--;
                                                                                        
     //Recorremos el vector de manera inversa                                                                                   
     for(int i = (contador);i>=0;i--){ 
         //Caso donde el contador = i, creamos el primer nodo raiz
        if(i==contador){
            if((e[i]>=48)&&(e[i]<=57)){
        elemento = (e[i]-'0');
        //Si tiene dos cifras
        if(((e[i-1]>=48)&&(e[i-1]<=57))&&(((e[i-2]>=48)&&(e[i-2]<=57)))){
            elementob = e[i-2];
            numero = elementob;
            nueva = numero*10;
            elementob = (e[i-1]);
            nueva = nueva + (elementob-'0');
            nodo = arbol.crearNodo(nueva-'0',NULL); 
            }else{
            nodo = arbol.crearNodo(elemento,NULL); 
            }
        }else{
        nodo = arbol.crearNodo(e[i],NULL); 
        } 
            //Caso donde el contador != i, insertamos los nodos
         }else{
        if((e[i]>=48)&&(e[i]<=57)){
        elemento = (e[i]-'0');
        //Si tiene dos cifras
        if(((e[i-1]>=48)&&(e[i-1]<=57))&&(((e[i-2]>=48)&&(e[i-2]<=57)))){
            arbol.postFija(elemento,nodo,NULL);
            elementob = e[i-2];
            numero = elementob;
            nueva = (numero-'0')*10;
            elementob = (e[i-1]-'0');
            nueva = nueva + elementob;
            arbol.postFija((nueva),nodo,NULL);
            i = i-2;
        }else{
            arbol.postFija(elemento,nodo,NULL);
        }
    }else{
         arbol.postFija(e[i],nodo,NULL);
        }
    }
     }
     
        cout<<"\nArbol: ";
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";
        arbol.mostrar(nodo,recorrer);
        return(nodo);


}  
                                                                                /* C R E A R   I N F I J A   D E   U N   A R B O L */
void Funciones::arbolito_infijo(pNodo nodo){
    Arbol arbol;
    cout<<"\nLa expresion infija es: ";
    arbol.infija(nodo);
}

                                                                                /* O R D E N A R   R E S U L T A D O S */
pNodo Funciones::arbolito_ordenado(pNodo nodo,char v,int c){
    Arbol arbol;
    int recorrer = 0;
    if(c==0){
       nodo = arbol.crearNodo(v,NULL);
    }else{
    arbol.insertar(v,nodo,NULL);
    }
    cout<<"\nArbol: ";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    arbol.mostrar(nodo,recorrer);
    return nodo;
}

                                                                                /* I N O R D E N */
void Funciones::arbolito_inOrden(pNodo nodo){
    Arbol arbol;
    arbol.InOrden(nodo);
}

                                                                                /* D A T O S   D E   U N   A R B O L */
void Funciones::datos(pNodo nodo){
    Arbol arbol;
    cout<<"\nLa altura del arbol es: "<<arbol.Altura(nodo);
    cout<<"\nEl arbol tiene "<<arbol.contar_hojas(nodo)<<" hojas.";
    cout<<"\nEl arbol tiene "<<arbol.contar_nodos(nodo)<<" nodos.";
    cout<<"\nEl arbol tiene "<<((arbol.contar_nodos(nodo))-(arbol.contar_hojas(nodo)))<<" nodos internos.";
    if(arbol.lleno(arbol.Altura(nodo),arbol.contar_hojas(nodo))){
        cout<<"\nEl arbol esta perfectamente lleno.";
    }else{
        cout<<"\nEl arbol no esta perfectamente lleno.";
    }
}

Funciones::~Funciones()
{
}