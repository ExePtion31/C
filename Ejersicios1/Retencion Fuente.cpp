#include <iostream>
#include <string.h>

using namespace std;
int main()
{
 ///////////////////////// Variables ////////////////////////////////
 int valorc;
 int reten;
 int total;
 char nombrep[10];
 char tipop[10];
 char Natural[]="natural";
 char Juridica[]="juridica";
 
 /////////////////////////// Proceso ///////////////////////////////////
 cout <<"_____________________\nBIENVENIDO!";
 cout <<"\nDigite su nombre: "; cin>>nombrep;
 cout <<"Es usted persona Natural o Juridica?: "; cin>>tipop;
 cout <<"Cual es el valor de la compra?: "; cin>>valorc;
 
 if(strcmp(tipop,Natural)==0&&valorc>800000)
 {
  reten=(valorc*10)/100;
  total=valorc+reten;
  cout <<"___________________________\nNombre del cliente: " <<nombrep;
  cout <<"\nTipo de persona: " <<tipop;
  cout <<"\nValor de la compra: " <<valorc;
  cout <<"\nValor de la retencion del 10%: " <<reten;
  cout <<"\nValor total: " <<total <<"\n___________________________";	
 } 
 else
 {
  if(strcmp(tipop,Natural)==0&&valorc<800000)	
  {
   reten=(valorc*5)/100;
   total=valorc+reten;
   cout <<"___________________________\nNombre del cliente: " <<nombrep;
   cout <<"\nTipo de persona: " <<tipop;
   cout <<"\nValor de la compra: " <<valorc;
   cout <<"\nValor de la retencion del 5%: " <<reten;
   cout <<"\nValor total: " <<total <<"\n___________________________";
  }
  else
  {
   if(strcmp(tipop,Juridica)==0&&(valorc>=1000000||valorc<=1500000))
   {
   	reten=(valorc*7)/100;
    total=valorc+reten;
    cout <<"___________________________\nNombre del cliente: " <<nombrep;
    cout <<"\nTipo de persona: " <<tipop;
    cout <<"\nValor de la compra: " <<valorc;
    cout <<"\nValor de la retencion del 7%: " <<reten;
    cout <<"\nValor total: " <<total <<"\n___________________________";
   }
   else
   {
   	if(strcmp(tipop,Juridica)==0&&valorc>1500000)
   	{
   	reten=(valorc*8)/100;
    total=valorc+reten;
    cout <<"___________________________\nNombre del cliente: " <<nombrep;
    cout <<"\nTipo de persona: " <<tipop;
    cout <<"\nValor de la compra: " <<valorc;
    cout <<"\nValor de la retencion del 8%: " <<reten;
    cout <<"\nValor total: " <<total <<"\n___________________________";
    }
    else
    {
     if(strcmp(tipop,Juridica)==0&&valorc<1000000)
	 {
	  reten=(valorc*6)/100;
      total=valorc+reten;
      cout <<"___________________________\nNombre del cliente: " <<nombrep;
      cout <<"\nTipo de persona: " <<tipop;
      cout <<"\nValor de la compra: " <<valorc;
      cout <<"\nValor de la retencion del 6%: " <<reten;
      cout <<"\nValor total: " <<total <<"\n___________________________";	
	 }	
	}
   }	
  }
 }
 
 	
}
