#include <stdio.h>
#include <conio.h>
main()
{
	int edad;
	printf("Ingrese edad: ");
	scanf("%d",&edad);
	{
		if(edad>=0 && edad<=3)
	printf("Es Bebe");
	else
	if(edad>=4 && edad<=12)
	printf("Es Niño");
	else
	if(edad>=13 && edad<=15)
	printf("Es Adolescente");
	else
	if(edad>=16 && edad<=18)
	printf("Es Joven");
	else
	if(edad>=19 && edad<=50)
	printf("Es Adulto");
	else
	if(edad>=51 && edad<=100)
	printf("Es Adulto Mayor");
	
	}
	
}

