#include <stdio.h>
#include <conio.h>
void main(void)
{
int numeros[20], i;
float promedio;
clrscr();
promedio = 0;
for(i=0; i<20; i++)
{
printf("\nIntroducir un número: ");
scanf("%d", &valor[i]);
}
for(i=0; i<20; i++)
promedio = promedio + valor[i];
printf("\nEl promedio es: %f”, promedio/20");
}
