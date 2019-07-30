#include <stdio.h>
#include <Pila.h>
#include <Cola.h>
#include <conio.h>
#include <Funciones.h>

int main(int argc, char **argv)
{
    Funciones funciones;
    int opc,cuantos,op;
    char valor;
    pNodo nodo,padre;
    char expresion[40];
		do{
        cout<<"\n\t       :::: M E N U ::::       ";
		cout<<"\n\n\t(1) evaluar_expresionInfija";
		cout<<"\n\t(2) evaluar_expresionInfija_2";
		cout<<"\n\t(3) expresionInfija_a_expresionPostfija";
		cout<<"\n\t(4) evaluar_expresionPosfija";
		cout<<"\n\t(5) es_correcta";
		cout<<"\n\t(6) completar_parentesis";
        cout<<"\n\t(7) crear arbol";
        cout<<"\n\t(8) arbol a infija";
        cout<<"\n\t(9) arbol ordenado";
        cout<<"\n\t(10) arbol inOrden";
        cout<<"\n\t(11) datos del arbol";
		cout<<"\n\t(12) Salir.";
		cout<<"\n\nElige una opcion: ";
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"\n\t OPCION: evaluar_expresionInfija"<<endl; //((2*5)–(1*2))/(11-9) = 4
                cout<<"Inserta expresion a evaluar: ";
                cin>>expresion;
                cout<<"\nTu expresion es: "<<expresion<<endl;
                cout<<"\n\nEl resultado de "<<expresion<<" es: "<<funciones.evaluar_expresionInfija(expresion);
                cout<<"\n";
				system("pause");
				break;
            case 2:
                cout<<"\n\t OPCION: evaluar_expresionInfija2"<<endl; //(2*5-1*2)/(11-9) = 4
                cout<<"Inserta expresion a evaluar : ";
                cin>>expresion;
                cout<<"\nTu expresion es: "<<expresion<<endl;
                cout<<"\n\nEl resultado de "<<expresion<<" es: "<<funciones.evaluar_expresionInfija2(expresion);
                cout<<"\n";
                system("pause");
                break;
            case 3:
                cout<<"\n\t OPCION: expresionInfija_a_expresionPostfija"<<endl; //((2*5)–(1*2))/(11-9) = 25*12*-119-/
                cout<<"Inserta expresion a evaluar :";
                cin>>expresion;
                cout<<"\nTu expresion es: "<<expresion<<endl;
                funciones.evaluar_postfija(expresion).mostrar();
                cout<<"\n";
                system("pause");
                break;
            case 4:
                cout<<"\n\t OPCION: evaluar_expresionPosfija"<<endl;  //((2*5)–(1*2))/(11-9) = 25*12*-119-/ = 4
                cout<<"Inserta expresion a evaluar :";
                cin>>expresion;
                cout<<"\nTu expresion es: "<<expresion<<endl;
                cout<<"\n\nEl resultado de "<<expresion<<" es : "<<funciones.evaluar_postfija2(funciones.evaluar_postfija(expresion));
                cout<<"\n";
                system("pause");
                break;
            case 5:
                cout<<"\n\t OPCION: es_correcta"<<endl; //((2*5)–(1*2))/(11-9) 
                cout<<"Inserta expresion a evaluar :";
                cin>>expresion;
                cout<<"\nTu expresion es: "<<expresion<<endl;
                funciones.es_correcta(expresion);
                cout<<"\n";
                system("pause");
                break;
            case 6:
                cout<<"\n\t OPCION: completar_parentesis"<<endl;  //(2*5-1*2)/(11-9) = Correcta = ((2*5)-(1*2))/(11-9)
                cout<<"Inserta expresion a evaluar :";
                cin>>expresion;
                cout<<"\nTu expresion es: "<<expresion<<endl;
                if(funciones.es_correcta(expresion)==true){
                    funciones.completar_parentesis(expresion);
                }
                cout<<"\n";
                system("pause");
                break;	
            case 7:
                cout<<"\n\t OPCION: crear un arbol"<<endl; //((2*5)-(1*2))/(11-9) -> arbol
                cout<<"\Inserta expresion a evaluar : ";
                cin>>expresion;
                cout<<"\nTu expresion es: "<<expresion<<endl;
                funciones.arbolito(funciones.evaluar_postfija(expresion));
                cout<<"\n";
                system("pause");
                    break;	
            case 8:
                cout<<"\n\t OPCION: arbol a infija"<<endl; //Arbol -> ((2*5)-(1*2))/(11-9) = 4
                cout<<"\Inserta expresion a evaluar : ";
                cin>>expresion;
                cout<<"\nTu expresion es: "<<expresion<<endl;
                funciones.arbolito_infijo(funciones.arbolito(funciones.evaluar_postfija(expresion)));
                funciones.evaluar_expresionInfija(expresion);
                cout<<"\n";
                system("pause");
                    break;	
            case 9:
                cout<<"\n\t OPCION: arbol ordenado"<<endl; //Ordenar un arbol de expresiones
                cout<<"\nCuantas expresiones quieres ordenar en el arbol: ";
                cin>>cuantos;
                for(int i = 0;i<cuantos;i++){
                    if(i == 0){
                        cout<<"\Inserta expresion a evaluar : ";
                        cin>>expresion;
                        cout<<"\nTu expresion es: "<<expresion<<endl;
                         valor = funciones.evaluar_expresionInfija(expresion);
                      nodo = funciones.arbolito_ordenado(nodo,valor,i);
                    }else{
                        cout<<"\Inserta expresion a evaluar : ";
                        cin>>expresion;
                        cout<<"\nTu expresion es: "<<expresion<<endl;
                         valor = funciones.evaluar_expresionInfija(expresion);
                        funciones.arbolito_ordenado(nodo,valor,i);
                    }
                }
                cout<<"\n";
                system("pause");
                    break;	
            case 10:
                cout<<"\n\t OPCION: arbol ordenado"<<endl;
                cout<<"\nCuantas expresiones quieres ordenar en el arbol: ";
                cin>>cuantos;
                if(cuantos>0){
                for(int i = 0;i<cuantos;i++){
                    if(i == 0){
                        cout<<"\Inserta expresion a evaluar : ";
                        cin>>expresion;
                        cout<<"\nTu expresion es: "<<expresion<<endl;
                         valor = funciones.evaluar_expresionInfija(expresion);
                      nodo = funciones.arbolito_ordenado(nodo,valor,i);
                    }else{
                        cout<<"\Inserta expresion a evaluar : ";
                        cin>>expresion;
                        cout<<"\nTu expresion es: "<<expresion<<endl;
                        valor = funciones.evaluar_expresionInfija(expresion);
                        funciones.arbolito_ordenado(nodo,valor,i);
                    }
                }
                cout<<"\nExpresion inOrden: [";
                funciones.arbolito_inOrden(nodo);
                cout<<"]";
                cout<<"\n";
                system("pause");
                    break;
                }else{
                    system("pause");
                        break;
                }
            case 11:
            system("cls");
                do{
                    cout<<"\n\t        :::: DATOS DEL ARBOL ::::        "; //Altura, Nodos, nodos internos, LLeno
                    cout<<"\n\t(1) Leer datos del ejercicio g. ";
                    cout<<"\n\t(2) Leer datos del ejercicio j. ";
                    cout<<"\n\t(3) Volver al menu. ";
                    cout<<"\n\nElegir una opcion: ";
                    cin>>op;
            switch(op){
                    case 1: 
                            cout<<"\n\t OPCION: Leer datos del ejercicio g."<<endl;
                            cout<<"\Inserta expresion a evaluar : ";
                            cin>>expresion;
                            cout<<"\nTu expresion es: "<<expresion<<endl;
                            funciones.datos(funciones.arbolito(funciones.evaluar_postfija(expresion)));
                            cout<<"\n";
                            system("pause");
                        break;
                    case 2: 
                            cout<<"\n\t OPCION: Leer datos del ejercicio j.";
                            cout<<"\nCuantas expresiones quieres ordenar en el arbol: ";
                            cin>>cuantos;
                            if(cuantos>0){
                            for(int i = 0;i<cuantos;i++){
                                if(i == 0){
                                    cout<<"\Inserta expresion a evaluar : ";
                                    cin>>expresion;
                                    cout<<"\nTu expresion es: "<<expresion<<endl;
                                    valor = funciones.evaluar_expresionInfija(expresion);
                                    nodo = funciones.arbolito_ordenado(nodo,valor,i);
                                }else{
                                    cout<<"\Inserta expresion a evaluar : ";
                                    cin>>expresion;
                                    cout<<"\nTu expresion es: "<<expresion<<endl;
                                    valor = funciones.evaluar_expresionInfija(expresion);
                                    funciones.arbolito_ordenado(nodo,valor,i);
                                    }
                                }
                                funciones.datos(nodo);
                                cout<<"\n";
                                system("pause");
                            break;
                        }
                else{
                    system("pause");
                    break;
                    }
                }   
                system("cls");
                }while(op!= 3);
        }
        system("cls");
	}while(opc!=12);
}
