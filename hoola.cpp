#include <stdio.h>
#include <conio.h>
void mensaje();
int func();
main()
{
	printf("Hola desde el main \n");
	printf("%d \n",func());
	int numero=func();
	printf("%d",numero);
	printf("Salimos del main \n");
}

void mensaje()
{
	printf("Hola desde la funcion \n");
	printf("Salimos del main \n");
	getch();
}
int func()
{
	int n;
	printf("\n Ingresa un valor: ");
	scanf("%d",&n);	
	return n;
}
