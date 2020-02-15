#include <iostream>

using namespace std;
int main()
{
 int a=0;
 int b=0;
 int c=0;
 int numero;
 
 cout <<"Disenar un programa que reporte la suma de los primeros “n” números enteros, donde n sea ingresado por el usuario. " <<endl;
 cout <<"\nDigite un numero: "; cin>>numero;
 
 while(a<=numero)
 {
  b=a;
  c=b+c;	
  a++;
 }
 
 cout <<"Suma de los numeros: " <<c;	
}
