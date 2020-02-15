#include <iostream>
using namespace std;

void ingredientes2(string a, int b, string c, int d, string e, int f, string g, int h)
{
 cout<<"Ingredientes: " <<endl;
 cout<<a <<": " <<b <<" taza de arroz blanco." <<endl;
 cout<<c <<": " <<d <<" taza de agua." <<endl;
 cout<<e <<": " <<f <<" cucharaditas de sal." <<endl;
 cout<<g <<": " <<h <<" cucharaditas de aceite." <<endl;
} 

void preparacion(string a, int b, string c, string d, string f)
{
 cout<<"2.Busca una olla mediana en buen estado para hacer el " <<a <<", agregar " <<b <<" tazas de agua, " <<c <<" y " <<d <<".Poner la olla en fuego alto hasta que empieze a hervir."<<endl;
 cout<<"3.Al cabo de 5 min se va a secar el " <<f <<".Tape la olla y baje el fuego." <<endl;
 cout<<"4.Dejar pasar 15 min, destapar la olla y probar.";	
}

int main()
{
 int *puntero;	
 struct
 {
  string arroz;
  int Carroz;
  string agua;
  int Cagua;
  string sal;
  int Csal;
  string aceite;
  int Caceite;
  
  string respuesta;
 }ingredientes;
 
 ingredientes.arroz="Arroz";
 ingredientes.Carroz=1;
 ingredientes.agua="Agua";
 ingredientes.Cagua=2;
 ingredientes.sal="Sal";
 ingredientes.Csal=1;
 ingredientes.aceite="Aceite";
 ingredientes.Caceite=1;
 
 
 cout<<"RECETA PARA PREPARAR UN ARROZ" <<endl <<endl;
 ingredientes2(ingredientes.arroz, ingredientes.Carroz, ingredientes.agua, ingredientes.Cagua, ingredientes.sal, ingredientes.Csal, ingredientes.aceite, ingredientes.Caceite);
 cout<<endl;
 
 
 cout<<"1.Encender la estufa\nDesea encender la estufa? Si/No" <<endl;
 cin>>ingredientes.respuesta;
 
 if(ingredientes.respuesta=="si" and "Si")
 {
  preparacion(ingredientes.arroz, ingredientes.Cagua, ingredientes.sal, ingredientes.aceite, ingredientes.agua);
  cout<<endl;
  cout<<"Puntero: " <<&puntero;
 }
 

}
