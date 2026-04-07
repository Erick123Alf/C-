#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A,B,R;
	printf("Introduce el primer numero entero: ");
	scanf("%d",&A);
	printf("Introduce el segundo numero entero: ");
	scanf("%d",&B);
	R=A-B;
	printf("El resultado de tu resta es: %d\n",R);
	
	system("pause");
	return 0;
}
