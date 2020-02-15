#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
 int dato;
 Nodo *der;
 Nodo *izq;
};

//Prototipos
void Menu();
Nodo CrearNodo(int);
void InsertarNodo(Nodo *&, int);
Nodo *arbol = NULL;


int main()
{


 getch();
 return 0;
}

//Funcion de Menú
void Menu()
{
 int dato, opcion;
 
 do
 {
  cout<<"\t.:MENU:." <<endl;
  cout<<"1. Insertar nuevo nodo." <<endl;
  cout<<"2. Salir" <<endl;
  cout<<"Opcion: ";
  cin>>opcion;
  
  switch(opcion)
  {
   case 1: cout<<"Digite un numero: ";
		   cin>>dato;
		   InsertarNodo(arbol, dato);//Insertamos un nuevo nodo
		   cout<<"\n";
		   system("pause");
		   break;
  }
  system("cls");
 }while(opcion != 2);
}

//Funcion para crear nuevo nodo
Nodo *CrearNodo(int n)
{
 Nodo *nuevo_nodo = new Nodo();
 nuevo_nodo -> dato = n;
 nuevo_nodo -> der = NULL;
 nuevo_nodo -> izq = NULL;
 
 return nuevo_nodo;
}

//Funcion para insertar elementos en el arbol
void InsertarNodo(Nodo *&arbol, int n){
 if(arbol == NULL)//Si el arbol esta vacio.
 {
  Nodo nuevo_nodo = CrearNodo(n);
  arbol = nuevo_nodo;
 }
 else //Si el arboltiene un nodo o mas.
 {
  int valorRaiz = arbol ->dato; //Obetenemos valor de la raiz
  if(n < valor Raiz)//Si el elemento es menor a la raiz, se insertar en el lado izq
  {
   InsertarNodo(arbol->izq,n);
  }
  else //Si el elemento es mayor a la raiz, se insertar en el lado der
  {
   InsertarNodo(arbol->der,n);
  }
 }
}
