#include <stdio.h>
#include <conio.h>
main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	if ((n%2==0) && (m%2==0))
	printf("EL NUMERO ES MULTIPLO DEL 2 Y 3");
	else
	{
		if (n%2==0)
		printf("ES MULTIPLO DE 2");
		else if(n%3==0)
		printf("ES MULTIPLO DE 3");
		else 
		printf ("NO ES MULTIPLO DE 2 NI 3");
	}
}
