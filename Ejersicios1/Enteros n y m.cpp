#include <iostream>
#include <math.h>

using namespace std;
int main()
{
 int valor1;
 int valor2;
 double resul;
 cout <<"Por favor, digite el valor de n: "; cin>>valor1;
 cout <<"Por favor, digite el valor de m: "; cin>>valor2;
 if(valor2>valor1)
 {
  resul=valor2*valor1;
  cout <<"Producto entre n y m: " <<resul;
 }	
 else
 {
  resul=sqrt(valor2);
  cout <<"Raiz cuadrada de m: " <<resul;
 }
}
