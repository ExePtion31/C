#include <iostream>

using namespace std;
int main()
{
 int matriz1[2][2];
 int matriz2[2][2];
 int matriz3[2][2];
 int a,b;
 
 cout<<"Matriz 1." <<endl;
 for(a=0;a<=1;a++)
 {
  for(b=0;b<=1;b++)	
  {
  	cout <<"Digite un numero para la posicion ["<<a<<"]["<<b<<"]: "; cin>>matriz1[a][b];
  }
 }
 
 cout<<"\nMatriz 2." <<endl;
 for(a=0;a<=1;a++)
 {
  for(b=0;b<=1;b++)	
  {
  	cout <<"Digite un numero para la posicion ["<<a<<"]["<<b<<"]: "; cin>>matriz2[a][b];
  }
 }
 
 cout <<"\nProducto" <<endl;
 for(a=0;a<=1;a++)
 {
  for(b=0;b<=1;b++)
  {
   matriz3[a][b]=matriz1[a][b]*matriz2[a][b];
   cout <<matriz3[a][b] <<" ";	
  }	
  cout<<"\n";
 }
}
