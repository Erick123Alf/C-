#include <stdio.h>
#include <conio.h>

int factorial(int res, int n)
{
	if(n==1)
	    return res;
	res=n*res;
	factorial(res,--n);
}
int suma(int a,int b)
{
	return a+b;
	
}
main()
{
	
	char opc;
	int n,m;
	scanf("%d",&n);
	scanf("%c",&opc);
	switch(opc)
	{
		case '!':
		    printf("%d",factorial(1,n));
		break;
		case '+':
			scanf("%d",&m);
			printf("%d",suma(n,m));
	}
}
