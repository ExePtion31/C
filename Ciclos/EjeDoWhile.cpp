#include <iostream>

using namespace std;
int main()
{
 int a=0;
 int b;
 int incremento=1;
 int numero;
 
 do
 {
  cout <<"Digite el " <<incremento <<" numero: "; cin>>numero;
  incremento++;	
  a=a+numero;
 }while(incremento<=10);
 cout <<"La suma de sus numeros es: " <<a;
}
