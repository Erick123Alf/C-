#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <process.h>
#include <math.h>
#include <iostream>

int suma()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	return a+b;
}	
int resta()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	return a-b;
}
int multiplicacion()
{
    int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	return a*b;
}
float division()
{
	int a,b;
	scanf ("%f",&a);
	scanf("%f",&b);
	return a/b;
}
float raiz()
{
	int a,ra;
	scanf("%f",&a);
		if (a>=0)
	{
		ra=(a);
		printf("La raiz cuadrada de %f es %f \n\n",a, ra);
			
	}
	else 
	{  
	   printf("Su numero no puede ser calculado pues su numero es negativo \n\n");
	}
}
int factorial()
{
	int num=0, fac=0;
	scanf("%d",num);
	fac=num;
	for(int i=num-1; i>=1; i--)
	{
		fac=fac*i;
	}
}
int potencia()
{
	using namespace std;
	int main();
	int potencia();
	int pot, num;
	cout<<"Ingrese un valor:";
	cin>>num;
	
	cout<<"Ingrese la potencia del numero: ";
	cin>>pot;
	
	num = pow(num,pot);
	cout<<"La potencia es:"<<num<<"\n\n";
	
}
		


void menu()
{
	while(true)
	{
		system("cls");
		printf("***** Menu de Operaciones ***** \n");
		printf("0.- Salir\n");
		printf("1.- Suma\n");
		printf("2.- Resta\n");
		printf("3.- Multiplicacion\n");
		printf("4.- Division\n");
		printf("5.- Raiz\n");
		printf("6.- Factorial\n");
		printf("7.- Potencia\n");
		int opc;
		printf("Seleccione la opcion :");
		scanf("%d",&opc);
		switch(opc)
		{
			case 0:
				return;
			break;
			case 1:
				printf("El resultado es %d",suma());
				getch();
			break;	
			case 2:
				printf("El resultado es %d",resta());
				getch();
			break;	
			case 3:
				printf("El resultado es %d",multiplicacion());
				getch();
			break;
			case 4:
				printf("El resultado es %d",division());
				getch();
			break;	
			case 5:
				printf("El resultado es %d",raiz());
				getch();
			break;	
			case 6:
				printf("El resultado es %d",factorial());
				getch();
			break;
			case 7:
				printf("El resultado es %d",potencia());
				getch();
			break;					
			default:
			 printf("opcion no valida");
			 getch();
			 break;
		}
	}
}

main ()
{
	menu();
}

