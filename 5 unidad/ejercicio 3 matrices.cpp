#include<stdio.h>
#include<conio.h>
#include<windows.h>


main()
{
  //int [fila][columna]
	int matriz[2][3];
	matriz[0][0]=1;
	matriz[0][1]=2;
	matriz[0][2]=3;
	//fila 1
	matriz[1][0]=-1;
	matriz[1][1]=-2;
	matriz[1][2]=-5;
	
	printf("matriz [0][0] %d \n", matriz [0][0]);
	//puedo teber matrices de muchas dimensiones 
	int matriz2 [2][3][5][2];
	matriz2[2][3][5][2]=500;
	printf("matriz [1][2][3][1] %d \n",matriz2[1][2][3][1]=500);
	
	getch();
	
	
	

	
}
