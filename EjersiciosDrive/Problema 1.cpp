#include <iostream>

using namespace std;
int main()
{
 int a=0;
 int b=0;
 int c=0;
 
 cout <<"1-Disenar un programa que permita entregar la suma acumulada de la serie 1+2+3+4+5." <<endl;
 while(a<=5)
 {
  b=a;
  c=b+c;
  a++;
 }
 cout <<"\nLa suma es: " <<c;	
}
