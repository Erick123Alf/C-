#include<stdio.h>
#include<conio.h>

/*
main()
{
	int arr[5];
	arr[0]=3;
	arr[1]=4;
	arr[2]=5;
	arr[3]=6;
	arr[4]=7;
	
	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("%d\n",arr[2]);
	printf("%d\n",arr[3]);
	printf("%d\n",arr[4]);
	
	
	
}*/



main()
{
	int arr[5];
	
	for(int x=0;x<4;x++)//aqui el programa designa los valores para cada posicion
		arr[x]=x+1;//ingresamos valores
		
	for(int x=0;x<4;x++)
		printf("%d\n",arr[x]);//
	
	for(int x=0;x<5;x++)//aqui el usuario ingresa los valores para cada posicion
	{
		printf("ingresa la posicion %d:",x+1);
		scanf("%d",&arr[x]);
	}
	
	for (int x=0;x<5;x++)
		printf("%d\n",arr[x]);
}
