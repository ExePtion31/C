#include <iostream>
#include <string.h>
using namespace std;
int main()
{
int dia;
char mes[15]; 
char Enero[]="Enero";
char Febrero[]="Febrero";
char Marzo[]="Marzo";
char Abril[]="Abril";
char Mayo[]="Mayo";
char Junio[]="Junio";
char Julio[]="Julio";
char Agosto[]="Agosto";
char Septiembre[]="Septiembre";
char Octubre[]="Octubre";
char Noviembre[]="Noviembre";
char Diciembre[]="Diciembre";

cout <<"¡BIENVENIDO AL PROGRAMA QUE TE DICE TU SIGNO ZODIACAL!\n"; 
cout <<"Por favor, digite su dia de nacimiento: "; cin >> dia;
cout <<"Ahora digite su mes de nacimiento: "; cin >> mes;

if((strcmp(mes,Marzo)==0 and dia>=21) || ((strcmp(mes,Abril)==0 and dia<=20)))
 {
  cout <<"Su signo es: Aries" <<endl;
 }
else
{
 if((strcmp(mes,Abril)==0 and dia>=21) || ((strcmp(mes,Mayo)==0 and dia<=20)))
 {
  cout <<"Su signo es: Tauro";
 }
 else
 {
  if((strcmp(mes,Mayo)==0 and dia>=21) || ((strcmp(mes,Junio)==0 and dia<=21)))	
  {
  	cout <<"Su signo es: Geminis";
  }
  else
  {
   if((strcmp(mes,Julio)==0 and dia>=22) || ((strcmp(mes,Junio)==0 and dia<=22)))
   {
   	cout <<"Su signo es: Cancer";
   }
   else
   {
   	if((strcmp(mes,Julio)==0 and dia>=23) || ((strcmp(mes,Agosto)==0 and dia<=23)))
   	{
   	 cout <<"Su signo es: Leo";	
    }
    else
    {
     if((strcmp(mes,Agosto)==0 and dia>=23) || ((strcmp(mes,Septiembre)==0 and dia<=23)))
     {
      cout <<"Su signo es: Virgo";
	 }
	 else
	 {
	  if((strcmp(mes,Octubre)==0 and dia>=23) || ((strcmp(mes,Noviembre)==0 and dia<=22)))
	  {
	   cout <<"Su signo es: Escorpion"; 
	  }
	  else
	  {
	   if((strcmp(mes,Noviembre)==0 and dia>=23) || ((strcmp(mes,Diciembre)==0 and dia<=21)))
	   {
	   	cout <<"Su signo es: Sagitario";
	   }
	   else
	   {
	   	if((strcmp(mes,Diciembre)==0 and dia>=22) || ((strcmp(mes,Enero)==0 and dia<=21)))
	   	{
	   	 cout <<" Su signo es: Capricornio";	
	    }
	    else
	    {
	     if((strcmp(mes,Enero)==0 and dia>=20) || ((strcmp(mes,Febrero)==0 and dia<=19)))
	     {
	      cout <<"Su signo es: Acuario";
		 }
		 else
		 {
		  if((strcmp(mes,Febrero)==0 and dia>=20) || ((strcmp(mes,Marzo)==0 and dia<=20)))
		  {
		  	cout <<"Su signo es: Piscis";
		  }
		 }
		}
	   }
	  }
	 }
	}
   }
  }
 }
}
return 0;
}
