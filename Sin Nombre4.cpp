#include <stdio.h>
#include <conio.h>
main()
{
	int n;
	int m;
	printf("Ingesa un numero");
	scanf("%d",&n);
	printf("Ingresa otro valor");
	scanf("%d",&m);
	if(n>m)
	{
	printf("(A)El numero %d es mayor",n);
	}
	else
	{
	printf("(B)El numero %d es mayor",m);
	}
}
