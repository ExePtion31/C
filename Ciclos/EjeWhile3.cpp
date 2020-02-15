#include <iostream>

using namespace std;
int main()
{
 int a;
 int b;
 int interacion=0;
 int numero;
 
 cout<<	"Por favor, digite un numero: "; cin>>numero;
 
 while(interacion>=-10)
 {
  a=numero*interacion;
  cout<<numero <<" X " <<interacion <<" = " <<a <<endl;	
  interacion--;	
 }
}
