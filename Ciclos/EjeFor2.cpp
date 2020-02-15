#include <iostream>

using namespace std;
int main()
{
 int a;
 int b=0;
 int c;
 
 cout<<"Numero impares hasta el 50:" <<endl;
 for(a=1;a!=50;a=a+2)
 {
  b=b+a;	
  cout <<a <<endl;	
 }	
 cout <<"Suma: " <<b;
}
