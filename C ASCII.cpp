#include<stdio.h>
#include<conio.h>
 
int main() 
{
  int ascii=0,col=1,ren=1;
  for(ascii=1;ascii<=256;ascii++) 
  {
	printf("%i: %c  ",ascii,ascii);
    if(ren==24) { ren=0; col+=12; }
    if(col>=80) { getch();  
	ren=0; col=1; }
    ren++;
  }
  getch();
}

