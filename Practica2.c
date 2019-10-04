#include <stdlib.h>
#include <conio.h>
int main (void){
int opt;
float a,b,c;
char repet;
do{
printf("Menu de la calculadora.\n");
printf("Elige 1 opcion:\n");
printf("1-Suma\n");
printf("2-Resta\n");
printf("3-Multiplicacion\n");
printf("4-Division\n");
scanf("%d",&opt);
printf("Introduce el primer valor:\n");
scanf("%f",&a);
printf("Introduce el segundo valor:\n");
scanf("%f",&b);
switch(opt){
 case 1:
  c=a+b;
  break;
 case 2:
  c=a-b;
  break;
 case 3:
  c=a*b;
  break;
 case 4:
  while(b==0){
  printf("El segundo valor debe ser distinto de 0:\n");
  scanf("%f",&b);
  }
  c=a/b;
  break;
 default:
 printf("Debes introducir una opcion.\n");
 }
 printf("El resultado es:%f\n",c);
 printf("¿Desea hacer otra operacion? S  N:\n");
 repet=getch();
 } while(repet=='s'||repet=='S');
}
