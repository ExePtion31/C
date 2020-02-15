#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
 char dato;
 Nodo *der;
 Nodo *izq;	
};

//Prototipos
Nodo *crearNodo(char);
Nodo *arbol = NULL;
void insertarNodo(Nodo *&, char);
void mostrarArbol(Nodo *, char);
void postOrden(Nodo *);
void preOrden(Nodo *);
void inOrden(Nodo *);
void menu();
char cantNiveles(Nodo *);

int main()
{
 
 menu();
 getch();
 return 0;	
}

//Menu
void menu(){
	char dato; 
	int opcion, contador=0;
	do{
		cout <<"\t|-----MENU-----|" <<endl;
		cout <<"1.Insertar un nuevo nodo." <<endl;
		cout <<"2.Mostrar el arbol." <<endl;
		cout <<"3.Mostrar el arbol en PostOrden." <<endl;
		cout <<"4.Mostrar el arbol en PreOrden." <<endl;
		cout <<"5.Mostrar el arbol en InOrden." <<endl;
		cout <<"6.Mostrar altura del arbol." <<endl;
		cout <<"7.Salir" <<endl;
		cout <<"\nDigite una opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite una letra: ";
			        cin>>dato;
			        insertarNodo(arbol, dato); //Insertamos un nuevo nodo	
			        cout<<"\n";
			        system("pause");
			        break;
			 
			case 2: cout<<"\nMostrando el arbol completo:\n\n" <<endl;       
			        mostrarArbol(arbol, contador);
					cout<<"\n";
					system("pause");
					break; 
					
			case 3: cout <<"\nRecorrido en PostOrden: ";
			        postOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
				
			case 4: cout <<"\nRecorrido en PreOrden: ";
			        preOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
					
		    case 5: cout <<"\nRecorrido en InOrden: ";
			        inOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;			
					
			case 6: cout <<"\nNiveles del arbol: ";
			        cantNiveles(arbol);
					cout <<"\n";
					system("pause");
					break;						
		}
		system("cls");
	}while(opcion != 7);
}

//Funcion para crear nuevo nodo 
Nodo *crearNodo(char n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> izq = NULL;
	nuevo_nodo -> der = NULL;
	
	return nuevo_nodo;
}

//Funcion para insertar elementos en el arbol 
void insertarNodo(Nodo *&arbol, char n){
 if(arbol == NULL){ //Si el arbol esta vacio 
  Nodo *nuevo_nodo = crearNodo(n);	
  arbol = nuevo_nodo;
 }
 else{ //Si el arbol tiene un nodo o mas 
   char valorRaiz = arbol -> dato; //Obtenemos valor de la raiz 
   if(n < valorRaiz){ //Si el elemento es menor que la raiz, se inserta en el lado izq 
   	insertarNodo(arbol -> izq, n);
   }
   else{ //Si el elemento es mayor que la raiz, se inserta en el lado der 
   	insertarNodo(arbol -> der,n);
   }	
  }	
}


//Funcion para mostrar el arbol
void mostrarArbol(Nodo *arbol, char cont){
	if(arbol == NULL){ //Si el arbol esta vacio
	 return;	
	}
	else{
		mostrarArbol(arbol -> der, cont+1);
		for(char i=0; i<cont; i++){
			cout <<"   ";
		}
		cout<<arbol -> dato <<endl;
		mostrarArbol(arbol -> izq, cont+1);
	}
	
}


//Funcion para recorrido en PostOrden
void postOrden(Nodo *arbol){
	if(arbol == NULL){ //Si el arbol esta vacio
	  return;	
	}
	else{ //Si el arbol no esta vacio
	  postOrden(arbol -> izq);
	  postOrden(arbol -> der);
	  cout <<arbol -> dato <<" - "; 	
	}
}


//Funcion para recorrido en PreOrden
void preOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
	
}

//Funcion para recorrido en InOrden
void inOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
	
}


//Funcion para ver la cantidad de niveles del arbol 
char cantNiveles(Nodo *arbol){
  if(arbol != NULL){
  	char NumIzq = cantNiveles(arbol -> izq) +1;
  	char NumDer = cantNiveles(arbol -> der) +1;
  	
  	if(NumIzq > NumDer){
  		return NumIzq+1;
	  }
	else{
	 return NumDer+1;	
	}
  }	
}
