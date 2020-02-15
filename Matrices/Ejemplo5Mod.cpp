#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

system("color a0");
system("Ejersicio 5 Estructura de Datos");

int f=4,c=4;
int matrix[f][c];
int cont,x,w;
int suma=0, promedioS=0, a, m, menor, mayor, contMe=0, contMa=0, MayoresalMenor=0, MenoresalMayor=0;

for(x=1;x<=f;x++){ //CAPTURA DE DATOS
for(w=1;w<=f;w++){
printf("m[%d][%d]=",x,w);
scanf("%d", &cont);
matrix[x][w]=cont;
system("cls");
}
}

printf("Matriz:\n");
for(x=1;x<=f;x++){ //A-MUESTRA DATOS
for(w=1;w<=f;w++){
printf("%d",matrix[x][w]);
}
printf("\n\n");
}

printf("Suma de elementos: ");
for(x=1;x<=f;x++){ //B-Elemntos Sumados
for(w=1;w<=f;w++){
suma=suma+matrix[x][w];
}
}

printf("%d\n",suma);
printf("El promedio de los elementos sumados es: ");
promedioS = suma/(f*c); //C-Promedio de Sumados
printf(";%d\n",promedioS);
printf("Elemento menor: ");
menor = matrix[1][1];

for(x=1;x<=f;x++){ //D-Busca el menor
for(w=1;w<=f;w++){
a=matrix[x][w];
if(a<=menor)
menor = a;
else
menor = menor;
}
}

printf("%d\n",menor);
printf("Elemento mayor: ");
mayor = matrix[1][1];
for(x=1;x<=f;x++){ //E-Busca el mayor
for(w=1;w<=f;w++){
a=matrix[x][w];
if(a>mayor)

mayor = a;
else
mayor = mayor;

}
}
printf("%d\n", mayor);
printf("Cantidad de elementos iguales al menor: ");
for(x=1;x<=f;x++){ //F-Busca el menor
for(w=1;w<=f;w++){
a=matrix[x][w];
(a==menor)?contMe++:0;
}
}


printf("%d\n",contMe);
printf("Cantidad de elemento iguales al mayor: ");
for(x=1;x<=f;x++){ //G-Busca el mayor
for(w=1;w<=f;w++){
a=matrix[x][w];
(a==mayor)?contMa++:0;
}
}

printf("%d\n",contMa);
m=f*c;
MayoresalMenor=m-contMe; //H-MAyores al menor
MenoresalMayor=m-contMa; //I-Menores al mayor

printf("Elementos mayores al menor :%d\n",MayoresalMenor);
printf("Elementos menores al mayor :%d\n",MenoresalMayor);

system("pause");

return 0;
}
