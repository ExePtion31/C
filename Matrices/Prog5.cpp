#include <iostream>

using namespace std;
int main()
{
 int matriz1[3][3];	
 int a,b,c=2,d=2;
 int x,y;
 
 for(a=0;a<=2;a++)
 {
  for(b=0;b<=2;b++)	
  {
   matriz1[a][b]=c;
   c+=2;	
  }
 }
 
 cout <<"Matriz Original:"<<endl;
 for(a=0;a<=2;a++)
 {
  for(b=0;b<=2;b++)	
  {
   cout <<matriz1[a][b] <<" ";	
  }
  cout<<"\n";
 }
 
 cout <<"\nDigite coordenadas [X]: "; cin>>x;
 cout <<"\nDigite coordenadas [y]: "; cin>>y;
 
 cout <<"Numero en las coordenadas ["<<x<<"]["<<y<<"]: " <<matriz1[x][y];
}
