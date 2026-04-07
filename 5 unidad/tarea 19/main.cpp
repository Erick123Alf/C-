#include<conio.h>
#include<stdio.h>
#include<windows.h>

int arreglo[2][5];

#include "opciones.cpp"

int menu()
{
	
	while (true)
	{
		char opc;
		int busca;
		system("cls");
		printf(" Ingresar \t(I)\n");
		printf(" Buscar\t(B)\n");
		printf(" Cambiar\t(C)\n");
		printf(" Eliminar\t(E)\n");
		printf(" Mostrar\t(M)\n");
		printf(" Salir\t(S)\n\n");
		printf("Elija una opcion: ");
		scanf("%c",&opc);
		switch(opc)
		{
			case 'I':
			case'i':
				ingresar();
				mostrar();
				break;
				case 'B':
				case 'b':
					printf("Ingrese el numero a buscar: ");
					scanf("%d",&busca);
					buscar(busca);
					if (buscar(busca)>0)
					{
						printf("Valor encontrado");
					}
					else {
						printf("el valor desconocido");
					}
					break;
					case 'c':
					case 'C':
						int c;
						int cambi;
						printf("Ingresa el numero a cambiar: ");
						scanf("%d",&cambi);
						cambiar(cambi);
						if(cambiar(c)<0)
						{
							printf("valor no encontrado");
						}						
						break;
						case 'm':
						case 'M':
							mostrar();
							break;
							case'E':
							case 'e':
								int elimi;
								printf("Valor a eliminar: ");
								scanf("%d",&elimi);
								eliminar(elimi);
								if (eliminar(elimi)>0)
								{
									printf("valor eliminado");
								}
								else 
								{
									printf("valor no existente");
								}
								break;
								case 's':
								case 'S':
									exit (1);
									break;
									default:
										printf("opcion invalida");
										break;
					
		}
		
		getch();
	}
	
}


main()
{
	menu();
}
