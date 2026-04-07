#include<conio.h>
#include<stdio.h>
#include<windows.h>


int vector [3][3];//guada 3 numenos en cada nivel empieza a leer 0,1,2


#include"funciones.cpp"//archivo definido por el usuario


void menu()
{
	while(true)
	{
		char opc;
		system("cls");
		printf("Ingresar \t(I)\n");
		printf("Mostrar\t\t(M)\n");
		printf("Salir\t\t(S)\n");
		scanf("%c",&opc);
		switch(opc)
		{
			case 'i'://se sobre pone xq ambos terminan en l break
			case 'I':
				ingresar();
				mostrar();
			break;
			case 'm':
			case'M':
				mostrar();
			break;
			case 's':
			case 'S':
				printf("Bye.....\n");
				exit (1);
			break;
					
				
		}//llave switch
		getch();
		
	}
}


main()
{
	menu();
}
