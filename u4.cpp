#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

 int mayor(int a, int b, int c)
{
	

	printf("----------------------\n");
	printf("....MAYOR A MENOR....\n");
	if (a > b, a > c && b> c) {
		printf ( "A B C: %d %d %d \n", a, b,c);
		}
		else if (a > b, a > c && b< c) {
		printf ("A C B: %d %d %d \n",  a,  c, b);
		}
		else if (b > a, b > c && a>c) {
			printf("B A C: %d %d %d \n",  b , a, c);
			}
			else if (b > a, b > c && a<c) {
			printf ("B C A: %d %d %d \n", b , c, a);
			}
			else if (c > a, c > b&& b>a) 
				{
					printf( "C B A %d %d %d \n", c, b ,a);
				}
			else if (c > a, c > b && b<a) 
				{
					printf("C A B: %d &d %d \n", c ,a,b);
				}
				printf("----------------------\n");	
					};

 int menor(int a, int b, int c)
{
	
printf("---------------------- \n");
	printf("....MENOR A MAYOR.... \n");
	if (a < b && a < c && b<c) 
	{
		printf(" A B C %d %d %d \n",  a , b, c);
		
	
	}
	else if (a < b&& a < c && b>c) 
	{
		printf("A C B %d &d %d \n",  a ,c, b);
		
	
	}
		else if (b < a &&  b < c && a<c) 
			{
				printf("B A C  %d &d %d \n" , b,a,c );
			}
		else if (b < a &&  b < c && a>c) 
			{
				printf("B C A  %d &d %d \n" ,b, c, a);
			}
			else if (c < a && c < b && b<a) 
				{
					printf("C B A  %d &d %d \n", c, b, a);
				}
printf("----------------------\n");
		};

 int medio(int a, int b, int c)
{
	

	printf("----------------------\n");
	if (a < b && b < c || a>b && b>c) {
		printf ("el numero medio es B: %d \n", b );
		}
		else if (b < a && a < c) {
			printf("el numero medio es A: %d \n", a);
			}
		else if (b > a && a > c) {
			printf("el numero medio es A: %d  \n" , a );
			}
			else 
				{
					printf("el numero medio es C: %d",  c);
				}
	printf("----------------------\n");
					
					};
int operaciones(){
	int a, b, c;
do{	

	system("CLS");
	printf("Ingresa primer numero: \n");
	scanf("%d",&a);
	printf("Ingresa segundo numero: \n");
	scanf("%d",&b);
	printf("Ingresa tercer numero: \n");
	scanf("%d",&c);
	
	
	mayor(a, b, c);
	menor(a, b, c);
	medio(a, b, c);
	
	system("pause");

	
	

	}while (true);};

int main()
{
	operaciones();
	
	
}



