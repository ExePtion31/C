#include <iostream>

using namespace std;
int main()
{
  int numeros[4];	
  int suma;
	
  for(int a=0;a<=3;a++)
  {
  	cout<<"Digite el numero de la posicion " <<a <<": ";
  	cin>>numeros[a];
  }
	
  suma= (numeros[0]+numeros[1]+numeros[2]+numeros[3])/4;
  
  cout<<"Los numero ingresados son: " <<numeros[3] <<" " <<numeros[2] <<" " <<numeros[1] <<" " <<numeros[0] <<endl;
  cout<<"La media es: " <<suma;
	
	
  
}
