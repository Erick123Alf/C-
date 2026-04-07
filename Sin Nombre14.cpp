#include <stdio.h>
#include <conio.h>
main()
{
	int i=1, n=0, m=0;
	scanf("%d",&n);
	scanf("%d",&m);
	for (n=0; n<=m; n++);
	{
	for (i=1; i<=10; i++)
	printf ("%d * %d = %d \n", n, i, n*i);
    }
}
