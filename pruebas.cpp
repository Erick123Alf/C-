#include <conio.h>
#include <stdio.h>

main()
{
	int pruebas=0;
	printf("Ingrese numero de pruebas: ");
	scanf("%d",&pruebas);
	for(int p=1;p<=pruebas;p++)
	{
		int alumnos=0;
		int totald=0;
		printf("Ingrese numero de alumnos: ");
		scanf("%d",&alumnos);
		for(int a=1;a<=alumnos;a++)
		{
			int dulces=0;
			printf("Ingrese el numero de dulces: ");
			scanf("%d",&dulces);
			totald=totald+dulces;
		}
		if(totald%alumnos==0)
		printf("\nRepartir...");
		if(totald%alumnos!=0)
		  printf("\n No Repartir...");
	}
}


