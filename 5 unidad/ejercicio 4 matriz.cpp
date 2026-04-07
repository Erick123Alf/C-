#include<stdio.h>
#include<conio.h>
#include<windows.h>


int numeros[3][3];
void MostrarMatriz()
{
	printf("datos almacenados dentro de la matriz");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d\n",numeros[i][j]);
		}
		printf("\n");
	}
}

main()
{
	
	printf("\n Ingrese 9 numeros:");
	for (int filas=0; filas<3; filas++)
	{
		for(int columnas=0; columnas<3; columnas++)
		{
			printf("\n Ingrese numero en %d y %d:",filas,columnas);
			scanf("%d",&numeros[filas][columnas]);
			
		}
	}
	MostrarMatriz();
	
}

