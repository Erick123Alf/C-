#include <stdio.h>
#include <conio.h>

void funcion();
void otra()
{
	printf("Otra funcion en accion....\n");
	getch();
}
int suma()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	return a+b;
}
int otrafun(int valor)
{
	int val2=0;
	printf("La cantidad a sumar");
	scanf("%d",&val2);
	printf("\nLa suma es %d",valor+val2);
}
main()
{
	int func;
	funcion();
	printf("Salimos de la funcion....\n");
	getch();
	otra();
	int r=suma();
	printf("El resultado de la suma es %d \n",r);
	printf("\nUna funcion con parametro");
	scanf("%d",&func);
	otrafun(func); 
}

void funcion()
{
	printf("Funcion en accion....\n");
	getch();
}
