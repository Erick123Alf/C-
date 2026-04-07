#include <stdio.h>
#include <conio.h>

main()
{
	int pruebas=0, a, b, n, s;
	printf("Ingrese numero de pruebas: ",n);
	scanf("%d",&pruebas);
	for(int i=0; i<pruebas; i++)
	{
	printf("Ingrese un valor: ");
	scanf("%d",&a);
	printf("Ingrese otro valor: ");
	scanf("%d",&b);
	s=a%a==0, s=b%a==0;
	if(s==0)
	printf("Es coprimo \n");
	else
	printf("No es coprimo \n");
    }
}
