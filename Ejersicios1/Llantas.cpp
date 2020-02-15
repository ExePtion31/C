#include <iostream>

using namespace std;
int main()
{
 int desc;
 int desctotal;	
 int numllan;
 int total;
 int valorllan=280000;
 char nombrep[20];
 
 cout <<"Buenos dias! Por favor, digite su nombre: "; cin>>nombrep; 
 cout <<"__________________________________________________\n¡Bienvenido/a " <<nombrep <<"!";
 cout <<"Te ofresemos los siguietnes descuentos:\n1-Si compras 4 llantas o menos, no tienes descuento.\n2-Si compras mas de 4 llantas pero menos de 11, tienes un 10% de descuento.\n3-Si compras mas de 10 llantas, tienes un 20% de descuento.";
 cout <<"\nPor favor, digite el numero de llantas que desea comprar: "; cin>>numllan;
 
 if(numllan<=4)
 {
  total=valorllan*numllan;
  cout <<"_____________________________________\nNombre: "<<nombrep <<"\nNumero de llantas compradas: " <<numllan <<"\nValor unitario:" <<valorllan <<"\nTotal con descuento: " <<total <<"\nGracias por su compra!\n_____________________________________";
 }
 else
 {
  if(numllan>4&&numllan<=10)
  {
   desc= numllan*valorllan;
   desctotal= (desc*10)/100;
   total=desc-desctotal;
   cout <<"_____________________________________\nNombre: "<<nombrep <<"\nNumero de llantas compradas: " <<numllan <<"\nValor unitario:" <<valorllan <<"\nTotal con el 10% de descuento: " <<total <<"\nGracias por su compra!\n_____________________________________";	
  }	
  else
  {
   if(numllan>10)
   {
   	desc=numllan*valorllan;
   	desctotal=(desc*20)/100;
   	total=desc-desctotal;
   	cout <<"_____________________________________\nNombre: "<<nombrep <<"\nNumero de llantas compradas: " <<numllan <<"\nValor unitario:" <<valorllan <<"\nTotal con el 20% de descuento: " <<total <<"\nGracias por su compra!\n_____________________________________";
   }
  }
 }
}
