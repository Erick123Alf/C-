#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<process.h>
main()
{
      int a,b;
   
      while (true)
      { 
      printf("ingresa un numero\n");
      scanf("%d",&a);
      switch(a)
      {
               case 0: 
                    exit (1);
                    break;
               case 1:
                    printf("es domingo");
                          
                    getch();system("cls");
                    break;
               case 2:
                    printf("es lunes");
                          
                    getch();system("cls");
                    break;
               case 3:
                    printf("es martes");
                          
                    getch();system("cls");
                    break;
               case 4:
                    printf("es miercoles");
                          
                    getch();system("cls");
                    break;
               case 5:
                    printf("es jueves");
                         
                    getch(); system("cls");
                    break;
               case 6:
                    printf("es viernes");
                          
                    getch();system("cls");
                    break;
               case 7:
                    printf("es sabado");
                         
                    getch(); system("cls");
                    break;
               default:
                       printf("no existe");
                            
                       getch(); system("cls");
                       break;
             }
                                  
      }         
}
