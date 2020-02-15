#include <iostream>

using namespace std;
int main()
{
 int a=0;
 int b=0;
 int c=0;
 int numero;
 
 cout <<"Digite un numero: "; cin>>numero;
 
 if(numero>=4||numero<0)
 {
  while(numero!=1&&numero!=2&&numero!=3)
  {
  	cout <<"Por favor, digite un numero que sea positivo y menor que 4." <<endl; cin>>numero;
  }
 }
 
 cout <<"Su numero es: " <<numero;	
}
