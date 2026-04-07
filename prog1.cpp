#include <stdio.h>
#include <conio.h>//librerias del programa



main()
{
	int a; // permite almacenar numeros
	float f; // permite almacenar numeros de punto decimal
	double d; // permite almacenar numeros de grandes valores
	char letra; // permite almacenar una letra o digito
	// void es vacio y solo las funciones son del tipo void
	// para imprimir
	printf("Ingrese un valor: ");
	//para almacenar valores enteros
	scanf("%lf",&d);// %d porque da entrada a formato decimal entrada
	printf("%lf",d);
}
