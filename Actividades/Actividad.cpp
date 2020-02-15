#include <iostream>

using namespace std;
int main()
{
 int cursos[5][3];
 int promedios[5][1];
 int a,b;
 int c=1;
 int d=1;
 double contenedor=0,contenedorfi=0,divicion,sumapro=0,divisipro;
 
 
 ///////////////////////////Guardar notas///////////////////////
 for (a=0;a<=4;a++)	
 {
  cout <<"|-----------------------------------------------------|" <<endl;	
  for(b=0;b<=2;b++)
  {
   cout<<"Digite la nota #" <<d <<" del curso " <<c <<": "; cin>>cursos[a][b];  
   d++;
  }	
  cout <<"|-----------------------------------------------------|" <<endl;	
  d=1;
  c++;
 }

c=1;
d=1;

//////////////////IMPRIME NOTAS///////////////////
 for(a=0;a<=4;a++)
 {
  cout <<" \nCurso "	<<c <<": ";  	
  for(b=0;b<=2;b++)
  {
   cout <<cursos[a][b] <<" ";
  }
  c++;
 } 
 
 c=1;
 d=1;
 
 ////////////////////Promedios////////////////////
 cout<<"\n|---------------------------------------------------------|";	
 for(a=0;a<=4;a++)
 {  
  for(b=0;b<=2;b++)
  {
   contenedor=cursos[a][b];
   contenedorfi=contenedorfi+contenedor;
  }
  divicion=contenedorfi/3;
  cout <<" \nPromedio curso # "	<<c <<": " <<divicion;
  c++;
  sumapro=divicion+sumapro;
  contenedor=0;
  contenedorfi=0;
  divicion=0;
 }  
 divisipro=sumapro/5;
 
 cout <<"\nPromedio Semestre: " <<divisipro;
 
 
}
