#include <iostream>
using namespace std;
int main()
{
char x = 'a'; 
int num; 
int num2;
float numero; 
bool valor=false;
cout <<"Digite un numero entre 0 y 1: "; cin>>valor;
if(valor==false)
 {
  cout <<"Digite el primer numero(Entero)(Entre el 10 y 200): "; cin>>num;
  if((num<10)||(num>200))
  {
  	while((num<10)||(num>200))
  	{
  	 cout <<"Por favor digite un numero entre 10 y 200";
	 cout <<"\nDigite el primer numero(Entero)(Entre el 10 y 200): "; cin>>num; 	
	}
  }
  cout <<"Digite segundo numero(Entero)(Entre 10 y 200): "; cin>>num2;
  if((num2<10)||(num2>200))
  {
  	while((num2<10)||(num2>200))
  	{
  	 cout <<"Por favor digite un numero entre 10 y 200";
	 cout <<"\nDigite el segundo numero(Entero)(Entre el 10 y 200): "; cin>>num2; 	
	}
  }
  cout <<"Digite el tercer numero(Decimal): "; cin>>numero;
  if((numero<10)||(numero>200))
  {
  	while((numero<10)||(numero>200))
  	{
  	 cout <<"Por favor digite un numero entre 10 y 200";
	 cout <<"\nDigite el tercer numero(Entero)(Entre el 10 y 200): "; cin>>numero; 	
	}
  }
  float res = numero + num2; 
  res = res + num; 
  res = res*2; 
  cout <<"Usted acaba de realizar una operacion matematica, su resultado es: "<< res << endl; 
  cout <<"Bool: " <<valor;
  return 0;
 }
 else
 {
 	
 }
}
