#include <iostream>
using namespace std;

int main()
{
	int vector1[3];
	int vector2[3];
	int vector3[3];
	
	cout<<"VECTOR #1" <<endl;
	
	for(int a=0;a<=2;a++)
	{
	 cout<<"Digite el numero de la posicion " <<a <<": ";
	 cin>>vector1[a];	
	}
	
	cout<<"VECTOR #2" <<endl;
	
	for(int a=0;a<=2;a++)
	{
	 cout<<"Digite el numero de la posicion " <<a <<": ";
	 cin>>vector2[a];	
	}
	
	cout<<"\n";
	
	for(int a=0; a<=2;a++)
	{
	 vector3[a]=vector1[a]*vector2[a];
	 cout<<vector3[a] <<" ";	
	}
	
		
}
