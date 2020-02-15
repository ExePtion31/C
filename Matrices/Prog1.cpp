#include <iostream>

using namespace std;
int main()
{
 int matriz1[2][2];
 int a,b;
 
 for(a=0;a<=1;a++)
 {
  for(b=0;b<=1;b++)	
  {
  	cout <<"Digite un numero para la posicion ["<<a<<"]["<<b<<"]: "; cin>>matriz1[a][b];
  }
 }
 
 cout <<"Matriz Original:" <<endl;
 for(a=0;a<=1;a++)
 {
  for(b=0;b<=1;b++)
  {
   cout <<matriz1[a][b];
  }	
  cout<<"\n";
 }
 
 cout <<"Matriz Transpuesta:" <<endl;
 for(a=0;a<=1;a++)
 {
  for(b=0;b<=1;b++)
  {
   cout <<matriz1[b][a];
  }	
  cout<<"\n";
 }
}
