#include <iostream>

using namespace std;
int main()
{
 int num1;
 int num2;
 int num3;
 int suma1;
 int suma2;
 int suma3;
 int produc;
 int resta;
 int suma;
 
 cout <<"________________________________________________________________________________\n1-Si a=b+c, entonces calcular el producto de los tres numeros." <<"\n2-Si b=a+c, entonces calcular la resta de los tres numeros." <<"\n3-Si c=a+b, entonces calcular la suma de los tres numeros." <<"\n________________________________________________________________________________";
 cout <<"\nIngrese el primer valor(A): "; cin>>num1;
 cout <<"Ingrese el segundo valor(B): "; cin>>num2;
 cout <<"Ingrese el tercer valor(C): "; cin>>num3;
 
 suma1=num2+num3;
 suma2=num1+num3;
 suma3=num1+num2;
 
 if(num1==suma1)
 {
  produc=num1*num2*num3;	
  cout <<"El producto de los tres numeros es: " <<produc;	
 }
 else
 {
  if(num2==suma2)
  {
   resta=num1-num2-num3;
   cout <<"La resta de los tres numeros es: " <<resta;	
  }
  else
  {
   if(num3==suma3)	
   {
   	suma=num1+num2+num3;
    cout <<"La suma de los tres numeros es: " <<suma;
   }
   else
    cout <<"Sr. No existe relacion.";
  }	
 }	
}
