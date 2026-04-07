#include <stdio.h>
#include <conio.h>
main ()
{
float  x= 1, y=2, resultado=0;
printf("Valor de la variable= %f", x);
printf ("Ingrese un valor: ");
scanf ("%f",&x);
printf("\nIngresa otro valor: ");
scanf("%f",&y);
resultado=x/y;
printf("\nEl resultado es= %f",resultado);
printf("\nSi divides %f entre %f tu resultado es %f",x,y,resultado);
}
