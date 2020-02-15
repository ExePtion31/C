#include <iostream>
using namespace std;

int main()
{
 int matriz[2][2];
 int transpuesta[2][2];
 int fila, columna;
 
 for(fila=0; fila<2; fila++)
 {
  for(columna=0; columna<2; columna++)
  {
   cout<<"Ingrese el valor de la fila " <<fila+1 <<" columna " <<columna+1 <<": ";
   cin>>matriz[fila][columna];
  }
 }
 
 cout<<"La matriz es: \n_____________" <<endl;
 for(fila=0; fila<2; fila++)
 {
  for(columna=0; columna<2; columna++)
  {
   cout<<matriz[fila][columna];
  }
  cout<<endl;
 }
 
 cout<<"_____________\nLa transpuesta es:" <<endl;
 
 for(fila=0; fila<2; fila++)
 {
  for(columna=0; columna<2; columna++)
  {
   cout<<matriz[columna][fila];
  }
  cout<<endl;
 }
 
 
 	
}
