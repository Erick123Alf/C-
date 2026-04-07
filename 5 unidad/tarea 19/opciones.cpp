int ingresar()
{
	int i;
	for(int y=0;y<2;y++)
	{
		for(int x=0;x<5;x++)
		{
			printf("Ingresa la posicion [%d][%d]: ",y+1,x+1);
			scanf("%d",&arreglo[y][x]);
			
		}
	}
}

void mostrar()
{
	for(int y=0;y<2;y++)
	{
		for(int x=0;x<5;x++)
			printf("* %d",arreglo[y][x]);
			printf(" *\n");
    }

}

int buscar(int b)
{
	for (int y=0; y<2; y++)
	{
		for(int x=0; x<5; x++)
		{
				if(b==arreglo[y][x])
				{
					return arreglo[y][x];
				}
		}
	}
	return -1;
}

int cambiar(int c)
{
	int d;
	for(int y=0; y<2; y++)
	{
		for(int x=0; x<5; x++)
		{
			if (c==arreglo[y][x])
			{
				printf("ingrese nuevo valor: ");
				scanf("%d",&d);				
				arreglo[y][x]=d;
				printf("valor modificado\n");
				return 1;
			}
		}
	}
	return -1;
}


int eliminar(int e)
{
	for (int y=0; y<2; y++)
	{
		for(int x=0; x<5; x++)
		{
			if(e==arreglo[y][x])
			{
				arreglo[y][x]=0;
				return 1;
			}
		}
	}
	return -1;
}
