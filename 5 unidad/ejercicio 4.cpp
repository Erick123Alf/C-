#include<conio.h>
#include<stdio.h>
#include<windows.h>

int numeros[3][3];

void mosmat()
{
	printf("\n datos almacenados dentro de la matriz");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("numeros [i][j]\t");
		}
		printf("\n");
	}
}
main()
{
	system("cls");
	printf("ingrese 9 numeros:");
	for (int filas=0;filas<3; filas++)
	{
		for(int columnas=0; columnas<3; columnas++)
		{
			printf("\ningrese numero[%d][%d]:",numeros[filas][columnas]);
			scanf("%d",&numeros[filas][columnas]);
		}
	}
	mosmat();
}
