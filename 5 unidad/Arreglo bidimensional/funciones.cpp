
int buscar(int b)
{
	for (int y=0;y<3;y++)
	{
		for (int x=0;x<3;x++)
		{
			if (b==vector[y][x])
			{
				return vector[y][x];
			}
		}
	}
	return -1;
}

int eliminar (int b)
{
	for (int y=0;y<3;y++)
	{
		for (int x=0;x<3;x++)
		{
			if (b==vector[y][x])
			{
				vector[y][x]=0;
				return 1;
			}
		}
	}
	return -1;	
}

int cambiar(int c)
{
	int d;
	for(int y=0; y<3; y++)
	{
		for(int x=0; x<3; x++)
		{
			if (c== vector[y][x])
			{
				printf("Ingresa el nuevo valor: ");
				scanf("%d",& d);
				vector[y][x]=d;
				printf("El valor ha sido modificado");
				return 1;
			}
		}
	}
	return -1;
}

void inicializar()
{
	for(int y=0;y<3;y++)
		for(int x=0;x<3;x++)
			vector[y][x]=0;
}
void mostrar()
{
	for(int y=0;y<3;y++)
	{
		for(int x=0;x<3;x++)
			printf("* %d",vector[y][x]);
			printf(" *\n");
}

}

void ingresar()
{
	for(int y=0;y<3;y++)
		for(int x=0;x<3;x++)
		{
			printf("Ingresa la posicion %d,%d: ",y+1,x+1);
			scanf("%d",&vector[y][x]);
		}
}
