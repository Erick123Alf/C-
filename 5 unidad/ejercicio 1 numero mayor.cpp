#include<stdio.h>
#include<conio.h>


main()
{
	int numeros [100];
	int cantidadnumeros=0;
	printf("cuantos numeros desea introducir:");
	scanf("%d",&cantidadnumeros);
	for(int i=0; i<cantidadnumeros; i++)
	{
		printf("\ncual es valor numero #", 1 + 1);
		scanf("%d", &numeros[i]);
	}
	
	
	int mayor = 0;
	for (int i=0 ; i<cantidadnumeros; i++)
	{
		if (numeros[i] > mayor)
		{
			mayor=numeros[i];
		}
	}
	printf("el numero mayor introducido es %d", mayor);\
	getch();
	
}
