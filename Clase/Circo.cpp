#include <iostream>
#include <math.h>

using namespace std;
int main()
{
 int valore=15000;
 int valorpa;
 int edadp;
 int desc;
 int total;
 int desctotal;
 
 cout <<"¡BIENVENIDOS!";
 cout <<"\nQue edad tiene la persona?: "; cin>>edadp;
 
if(edadp>=1&&edadp<=4)
{
 desc=(valore*40)/100;
 desctotal=valore-desc;
 cout <<"Valor a pagar con el 40%: " <<desctotal;
 cout <<"\nValor con el que se paga: "; cin>>valorpa;
 if(desctotal<valorpa)
 {
  total=valorpa-desctotal;
  cout <<"Veci mire sus vueltas: " <<total;	
 }
 else
  cout <<"Veci, no le alcanza, ahorre por favor.";
}	
else
{
 if(edadp>=5&&edadp<=12)
 {
  desc=(valore*30)/100;
  desctotal=valore-desc;
  cout <<"Valor a pagar con el 30%: " <<desctotal;
  cout <<"\nValor con el que se paga: "; cin>>valorpa;
  if(desctotal<valorpa)
  {
   total=valorpa-desctotal;
   cout <<"Veci mire sus vueltas: " <<total;	
  }
  else
   cout <<"Veci, no le alcanza, ahorre por favor.";
  }
 else
 {
  if(edadp>=13&&edadp<=18)
   {
   	desc=(valore*15)/100;
    desctotal=valore-desc;
    cout <<"Valor a pagar con el 15%: " <<desctotal;
    cout <<"\nValor con el que se paga: "; cin>>valorpa;
    if(desctotal<valorpa)
    {
     total=valorpa-desctotal;
     cout <<"Veci mire sus vueltas: " <<total;	
    }
    else
     cout <<"Veci, no le alcanza, ahorre por favor.";	
   }
   else
   {
	if(edadp>18)
	{
     desctotal=valore;
     cout <<"Valor a pagar con el 0%: " <<desctotal;
     cout <<"\nValor con el que se paga: "; cin>>valorpa;
     if(desctotal<valorpa)
     {
      total=valorpa-desctotal;
      cout <<"Veci mire sus vueltas: " <<total;	
     }
     else
      cout <<"Veci, no le alcanza, ahorre por favor.";		
	}	
   }
  }
 }
 return 0;
} 

