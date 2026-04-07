#include <stdio.h>
#include <conio.h>

main()
{
	int a,b,c;
	printf("Ingrese el valor de A: ");
	scanf("%d",&a);
	printf("Ingrese el valor de B: ");
	scanf("%d",&b);
	printf("Ingrese el valor de C: ");
	scanf("%d",&c);
	if(a>b && a>c)
	    printf("el numero A que vale %d es mayor",a);
	else
	   if(b>c)
	    printf("el numero B que vale %d es mayor",b);
	    else
	    printf("el numero C que vale %d es mayor",c);
}
