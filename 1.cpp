#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
main()
{
    using namespace std;
	int main(); 
	int factorial();
	int num=0, fac=0;
	cout<<"Ingrese un valor: ";
	cin>>num;
	fac=num;
	for(int i=num-1; i>=1; i--)
	{
		fac=fac*i;
	}
	cout<<"El factorial de "<<num<<" es "<<fac<<"\n\n";

	using namespace std;
	int main();
	int potencia();
	int pot;
	cout<<"Ingrese un valor:";
	cin>>num;
	
	cout<<"Ingrese la potencia del numero: ";
	cin>>pot;
	
	num = pow(num,pot);
	cout<<"La potencia es:"<<num<<"\n\n";
	
	int suma();
	int a;
	int b;
	int s;
	printf("Ingrese un valor: ");
	scanf("%d",&a);
	printf("Ingrese otro valor: ");
	scanf("%d",&b);
	s=a+b;
	printf("la sumatoria es %d \n\n",s);
	
	int resta();
	int r;
	printf("Ingrese un valor: ");
	scanf("%d",&a);
	printf("Ingrese otro valor: ");
	scanf("%d",&b);
	r=a-b;
	printf("El reultado de la resta sera: %d \n\n",r);
    
    int multiplicacion();
	int m;
	printf("Ingrese un valor: ");
	scanf("%d",&a);
	printf("Ingrese otro valor: ");
	scanf("%d",&b);
	m=a*b;
	printf("el producto es %d \n\n",m);
	
	float division();
	float  x, y, resultado;
	printf("Valor de la variable= %f", x);
	printf ("Ingrese un valor: ");
	scanf ("%f",&x);
	printf("Ingresa otro valor: ");
	scanf("%f",&y);
	resultado=x/y;
	printf("El resultado es= %f",resultado);
	printf("Si divides %f entre %f tu resultado es %f \n\n",x,y,resultado);
	
	float raiz();
	float numero,ra;
	printf("Ingrese valor: ");
    scanf("%f",&numero);
	if (num>=0)
	{
		ra=sqrt(numero);
		printf("La raiz cuadrada de %f es %f \n\n",numero, ra);
			
	}
	else 
	{
		printf("Su numero no puede ser calculado pues su numero es negativo \n\n");
     
	 }
	    
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
		printf("7.- Exponente\n");
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
	
  




