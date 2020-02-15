#include <iostream>	
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main()
{
	
int matriz[3][4];
int arreglo[3];
int i,j;

for (i=0;i<3;i++)
{
 for (j=0;j<4;j++)
  {
  	cout <<"Ingrese el numero correspondiente a la posicion ["<<i<<"] ["<<j<<"]: ";  
	cin >> matriz[i][j];
  }
 }
 
 cout <<"\nLa matriz que usted ingreso es: \n\n";
 
 for (i=0;i<3;i++)
 {
  for (j=0;j<4;j++)
  {
   cout <<matriz[i][j] <<" ";
  } 
  cout <<"\n";
 }
 
 ////suma de datos
 
 for (i=0;i<3;i++)
 {
  arreglo[i]=0;
  for (j=0;j<4;j++)
  {
   arreglo[i]=arreglo[i]+matriz[i][j];
  }
 }
 
 //////mostrar los resultados
 for (i=0;i<3;i++)
 {
  cout <<"\nLa suma de los datos de la fila ["<<i<<"] es: " <<arreglo[i];	
 }
 getch();
 
}
