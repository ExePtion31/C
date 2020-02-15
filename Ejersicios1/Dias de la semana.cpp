#include <iostream>

using namespace std;
int main()
{
 int numdia;
 
 cout <<"Digite un numero del 1 al 7: "; cin >> numdia;
 
 if(numdia>7)
 {
  cout <<"Por favor, el numero debe estar entre 1 y 7";
 }
 else
 {
  if(numdia==1)
  {
  	cout <<"El dia #1 de la semana es el: Lunes";
  }
  else
  {
   if(numdia==2)
   {
  	cout <<"El dia #2 de la semana es el: Martes";	
   }
   else
   {
   	if(numdia==3)
   	{
   	 cout <<"El dia #3 de la semana es el: Miercoles";
	}
	else
	{
	 if(numdia==4)
	 {
	  cout <<"El dia #4 de la semana es el: Jueves";
	 }	
	 else
	 {
	  if(numdia==5)
	  {
	  	cout <<"El dia #5 de la semana es el: Viernes";
      }	
      else
      {
       if(numdia==6)
       {
       	cout <<"El dia #6 de la semana es el: Sabado";
	   }
	   else
	   {
	   	if(numdia==7)
	   	{
	   	 cout <<"El dia #7 de la semana es el: Domingo";	
		}
	   }
	  }
	 }
	}
   }
  }
 }
}
