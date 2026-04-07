#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <process.h>

int suma()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	return a+b;
	
}

void menu()
{
	while(true)
	{
		system("cls");
		printf("***** Menu de Operaciones ***** \n");
		printf("0.- Salir\n");
		printf("1.- Suma\n");
		int opc;
		printf("Seleccione la opcion :");
		scanf("%d",&opc);
		switch(opc)
		{
			case 0:
				return;
			break;
			case 1:
				printf("El resultado es %d",suma());
				getch();
			break;			
			default:
			 printf("opcion no valida");
			 getch();
			 break;
		}
	}
}

main ()
{
	menu();
}
