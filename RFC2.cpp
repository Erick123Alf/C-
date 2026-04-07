#include<stdio.h>
#include<string.h>

char app[11], apm[11], nom[11], rfc[15], ano[7];

int main()

{
printf("\nDame tu apellido Paterno: ");
scanf("%s",&app);
printf("\nIngresa el apellido materno: ");
scanf("%s",apm);
printf("\nIngresa nombres : ");
scanf("%s",&nom);
printf("\nIngresa tu fecha de nacimiento: < aa/mm/dd > ");
scanf("%s",&ano);

strupr(app);
strupr(apm);
strupr(nom);

printf("\nSu nombre es: %s %s %s %s ",nom,nom,app,apm);
printf("\nTu fecha de nacimiento es: %s ",ano);

rfc[0] = app[0];
rfc[1] = app[1];
rfc[2] = apm[0];
rfc[3] = nom[0];

strcat(rfc, ano);
printf("\n\nSu RFC es: %s",rfc);
getchar();
getchar();
}

