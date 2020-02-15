#include <iostream>
using namespace std;

//Creamos la estructura nodo
struct nodo
{
 int nro;
 nodo*sgte;	
};
struct nodo *pi, *pa, *pf; //Declaramos tres punteros de tipo nodo 

void insertar(int numero) //Funcion insertar
{ 
 if(pi==NULL)
 {
  pi=new(nodo);
  pi->nro=numero;
  pf=pi;	
 }
 else
 {
  pa=new(nodo);
  pf->sgte=pa;
  pa->nro=numero;
  pf=pa;	
 }
 pf->sgte=NULL;	
}

void mostrar()
{
 pa=pi;
 while(pa!=NULL)
 {
  cout<<endl<<"-->Numero: " <<pa->nro;
  pa=pa->sgte; 	
 }	
}

void direccion()
{
 pa=pi;
 while(pa!=NULL)
 {
  cout<<endl<<"-->Direccion: " <<&pa->nro;
  pa=pa->sgte; 	
 }		
}

int main()
{
 int numero;
 string resp;
 resp="S";
 while(resp=="s" or resp=="S")
 {
  cout<<"-->Ingrese un numero: ";
  cin>>numero;
  insertar(numero);
  
  cout<<"Desea continuar s/n ";
  cin >>resp;	
 }
 mostrar();
 direccion();
 return 0;	
}
