#include <iostream>	
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main()
{
 float matriz[2][3][3];
 float matrizSuma[3][3];
 int m, fila, columna;

 for (m=0; m<2; m++)
 {
  for (fila=0; fila<3; fila++)
  {
   for (columna=0; columna<3; columna++)
   {
   	cout <<"En la matriz " <<m+1 <<", dime el dato de la fila " <<fila+1 <<" y la columna " <<columna+1 <<": ";
   	cin>>matriz [m][fila][columna];
   }
  }	
 }
 
 for (fila=0; fila<3; fila++)
 {
  for (columna=0; columna<3; columna++)	
  {
  	matrizSuma[fila][columna]=matriz[0][fila][columna] - matriz[1][fila][columna];
  }
 }
 
 
 cout<<"La matriz resta es" <<endl;
 for (fila=0; fila<3; fila++)
 {
  for (columna=0; columna<3; columna++)	
  {
  	cout <<matrizSuma[fila][columna] <<" ";
  }
  cout <<endl;
 }
 
 return 0;
}
