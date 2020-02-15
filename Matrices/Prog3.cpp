#include <iostream>

using namespace std;
int main()
{
 int matriz[100][1];
 int total=0;
 int a,b=0;
 
 for(a=0;a<=100;a++)
 {
  matriz[a][b]=a;
 }
 
 
 for(a=0;a<=100;a++)
 {
  cout <<matriz[a][b] <<" ";
 } 	
 
 for(a=0;a<=100;a++)
 {
  total=matriz[a][1]+total;	
 }
 
 cout <<"\nTotal: " <<total;
}
