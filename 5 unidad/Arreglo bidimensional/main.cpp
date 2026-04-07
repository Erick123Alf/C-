#include<conio.h>
#include<stdio.h>
#include<windows.h>
//Siempre es primero "y" y luego es "x"

int vector[3][3];

#include"funciones.cpp"

void menu()
{
	int busca;
	while (true)
	{
		char opc;
		system("cls");
		printf("Ingresar\t\t(I)\n");
		printf("Mostrar\t\t(M)\n");
		printf("Buscar\t\t(B)\n");
		printf("Eliminar\t\t(e)\n");
		printf("cambiar\t\t(c)\n");
		printf("Salir\t\t(S)\n");
		scanf("%s",&opc);
			switch(opc)
			{
				case 'i':
				case 'I':
					ingresar();
						mostrar();
				break;
					case 'M':
					case'm':
						mostrar();
					break;
						case 's':
						case'S':
							printf("Te lo lavas xD...");
							exit(1);
						break;
							case 'b':
								case 'B':
									printf("Dame el valor a buscar: ");
									scanf("%d",&busca);
									buscar(busca);
									if (buscar(busca)>-1)
										printf("El valor esta en el vector XD");
										else
										printf("Tronco el valor no esta xD");
										getche();
								break;
								case 'e':
									case 'E':
										int limi;
										printf("Dame el valor a eliminar: ");
										scanf("%d",& limi);
										eliminar(limi);
										if (eliminar(busca)>0)
										printf("El vector ha sido eliminado xD");
										else
										printf("El valor no existe");
										getche();
										break;
										case 'c':
											case 'C':
												int camb;
												printf("Ingresa el valor a cambiar");
												scanf("%d",&camb);
												cambiar(camb);
												if(cambiar(busca)>0)
												{
														printf("El valor no existe");
													}	
												getche();
												break;
												
			}
		getche();
	}
}

main()
{
	menu();
}
