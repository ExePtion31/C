#include <iostream>
using namespace std; 

void subrayar(int num)
{
 int resultado;	
 int i;
 for(i=0;i<=10;i++)
 {
  resultado=num*i;	
  cout<<num <<" X " <<i <<" = " <<resultado <<endl;
 }	
}

int main()
{ 
 int num=3;
	
 cout<<"Primer ejemplo "<<endl;
 subrayar(num);
 
 cout<<"Segundo ejemplo" <<endl;
 subrayar(num);
 
 cout<<"Tercer ejemplo " <<endl;
 subrayar(num);
 
 return 0; 	
}
