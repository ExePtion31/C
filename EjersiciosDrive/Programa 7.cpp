#include <iostream>

using namespace std;
int main()
{
 int a=0;
 int b=0;
 int c=0;
 int numero;
 
 cout <<"Digite un numero: "; cin>>numero;
 
 while(numero<300)
 {	
  if(b<300)
  {
   a=300-numero;
   cout <<"Aun le faltan " <<a <<" para llegar a 300\nPor favor, digite un numero: "; cin>>numero; 	
  }
  b=numero+b;
  cout <<b;	
 }	
}
