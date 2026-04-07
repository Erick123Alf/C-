#include<conio.h>
#include<stdio.h>
#include<windows.h>

int cad[10];



void mostrar()
{
	int x;
	
	 printf("Elementos del vector...\n");
	 
	for(x=1;x<11;x++)
	{
	  	printf("| %d",cad[x]);
	  	printf("|");
	}
	getche();
}
//...........................................
int buscar(int b)
{
	int x;
	for(x=1;x<11;x++)
	{
		if(cad[x]==b)
		{
			return x;
		}
		
	}
	return -1;
}
//...............................
int eliminar(int b)
{
	int esta=buscar(b);
	
	
	if(esta>-1)
	{
		cad[esta]=0;
		return 1;
	}
	else
	{
		return 0;
	}
	
}

//...........................................
void ingresar()
{
  int x;	
	
   for(x=1;x<11;x++)
   {
   	printf("Ingresa valor %d: ",x);
   	
   	scanf("%d",&cad[x]);
   }
	
}
//............................................
void inicializar()
{
	int i;
	
	for(i=1;i<11;i++)
	  {
	  	cad[i]=0;
	  	printf("\nVector inicializado...");
	  }
}

    void menu()
    {
    int opc=1;
    	
       while(opc!=0)
       {
       	int busca;
       	
       	system("cls");
       	printf("0.-Salir\n");
       	printf("1.-Ingresar\n");
       	printf("2.-Buscar\n");
       	printf("3.-Cambiar\n");
       	printf("4.-Eliminar\n");
       	printf("5.-Mostrar\n\n");
       	
       	
       	printf("Ingresa opcion: ");
       	scanf("%d",&opc);
       	
       	switch(opc)
       	  {
       	  	case 0:
       	  	  opc=0;
       	  		
       	  		break;
       	  	
       	  	case 1:
       	  		ingresar();
       	  		
       	  		break;
       	  		
       	  	case 2:
       	  		int busca;
       	  	
				 	printf("Ingrese el valor a buscar: ");
       	  		scanf("%d",&busca);
       	  		
       	  		if(buscar(busca)>-1)
       	  		{
       	  		 printf("\n El valor esta en el vector.....");
       	  	    }
       	  		else
       	  		{
       	  		 printf("\n El valor no esta en el vector.....");
       	  	    }
       	  		break;
				 
			case 3:
				break;
							
			case 4:
				printf("Ingresa el valor a eliminar: ");
				scanf("%d",&busca);
				   if(eliminar(busca)==1)
				   {
				   	printf("Elemento eliminado...\n");
				   }
				   else
				   {
				   	printf("Elemento no eliminado...\n");
				   }
				   
				break;
			
			case 5:
				mostrar();
				break;
			
			default:
				printf("Opcion no valida");
			    break;	 	
       	  }
       	
       	getche();
       	
       }
       
    	
    }
  
  
    
  main()
  {
  	inicializar();
  	getche();
  	menu();
  }  
