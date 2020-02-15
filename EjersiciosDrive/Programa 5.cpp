#include <iostream>

using namespace std;
int main()
{
 int a=0;
 int b=0;
 int c=0;
 int numero;
 
 cout <<"Digite un numero: "; cin>>numero;
 
 while(a<=numero)
 {
  b=a;
  if(b%2!=0)
   {
   	c=b+c;
   }
   	
  a++;	 
 }
 
 cout <<"Suma de numeros impares: " <<c;	
}
