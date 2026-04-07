 #include<stdio.h> 
 #include<conio.h>
 #include<string.h> 

main() 
{ 
  char DatoA[15], DatoB[15], DatoC[15], rfc[15], ano[7]; 
  puts("\n\n\tIngresa el apellido paterno "); 
  gets(DatoA); puts("\n\n\tIngresa el apellido materno "); 
  gets(DatoB); puts("\n\n\tIngrese solo su primer nombre "); 
  gets(DatoC); puts("\n\n\tIngresa tu fecha de nacimiento < aa/mm/dd > "); 
  puts("Ejemplo: 97/09/07 es igual 970907"); 
  gets(ano); 
  
  //Conversion de toda la cadena de texto a mayusculas. 
  strupr(DatoA); strupr(DatoB); strupr(DatoC);
  //Dandole valores a una nueva cadena. 
  
  rfc[0] = DatoA[0]; 
  rfc[1] = DatoA[1];
  rfc[2] = DatoB[0];
  rfc[3] = DatoC[0]; 
  //Concadenando la nueva cadena de manera que siga continua 
  strcat(rfc, ano); 
  //Impresion de los datos. 
  printf("\n\n\tSu nombre es: %s %s %s ",DatoC,DatoA,DatoB); 
  printf("\n\n\tfecha de nacimiento: %s ",ano); 
  printf("\n\n\t\tSu RFC es: %s",rfc); 
  getch();
   return 0; 
}
