//crear todas las librerias que se unen al vector
//librerias declaradas en el main ya no son necesarias aqui


void inicializar()//
{
	for (int y=0;y<3;y++)
		for(int x=0;x<3;x++)
			vector [y][x]=0;
}

//---------------------------------------------------------------------------------------

void mostrar()
{
	for (int y=0;y<3;y++)
	{
		for(int x=0;x<3;x++)
			printf("| %d",vector [y][x]);
		printf("|\n");
	}
}

//---------------------------------------------------------------------------------------

void ingresar()
{
		for (int y=0;y<3;y++)
		for(int x=0;x<3;x++)
			{
				printf("Ingresar la posicion %d,%d: ",y+1,x+1);
				scanf("%d",&vector[y][x]);
			}
}
	
//---------------------------------------------------------------------------------------





