#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
void Suma();
void Resta();
void Multiplicacion();
void Division();
void Cambios_de_base();
void Radicacion();
void Potencia();
void Trigonometria();
void Logaritmo();
void main()
{
int a;
char b;
textbackground(GREEN);
cout<<"                Bienvenido al programa para calcular"<<endl;
getch();
cout<<endl;
cout<<endl;
cout<<"         Ingrese la opcion correspondiente a cada calculo"<<endl;
getch();
cout<<endl;
cout<<endl;
opciones:
again:
cout<<"*Ingrese 1 para calcular sumas"<<endl;
cout<<endl;
cout<<"*Ingrese 2 para calcular restas"<<endl;
cout<<endl;
cout<<"*Ingrese 3 para calcular multiplicaciones"<<endl;
cout<<endl;
cout<<"*Ingrese 4 para calcular divisiones"<<endl;
cout<<endl;
cout<<"*Ingrese 5 para realizar cambios de base"<<endl;
cout<<endl;
cout<<"*Ingrese 6 para calcular raices"<<endl;
cout<<endl;
cout<<"*Ingrese 7 para calcular potencias"<<endl;
cout<<endl;
cout<<"*Ingrese 8 para realizar calculos trigonometricos"<<endl;
cout<<endl;
cout<<"*Ingrese 9 para realizar logaritmos"<<endl;
cout<<endl;
cout<<"*Ingrese 10 para salir"<<endl;
cout<<endl;
cin>>a;
if (a==1)
{
clrscr();
Suma();
clrscr();
}
else if(a==2)
{
clrscr();
Resta();
clrscr();
}
else if(a==3)
{
clrscr();
Multiplicacion();
clrscr();
}
else if(a==4)
{
clrscr();
Division();
clrscr();
}
else if(a==5)
{
clrscr();
Cambios_de_base();
clrscr();
}
else if(a==6)
{
clrscr();
Radicacion();
clrscr();
}
else if(a==7)
{
clrscr();
Potencia();
clrscr();
}
else if(a==8)
{
clrscr();
Trigonometria();
clrscr();
}
else if(a==9)
{
clrscr();
Logaritmo();
clrscr();
}
else if(a==10)
{
goto bye;
}
else
{
clrscr();
cout<<"Te equivocaste, esa opcion no existe"<<endl;
cout<<"Elegi nuevamente"<<endl;
getch();
clrscr();
goto again;
}
cout<<"Si quiere volver a realizar alguna operacion ingrese Y"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>b;
if (b == 'Y' || b == 'y')
{
clrscr();
goto opciones;
}
else
bye:
clrscr();
cout<<"BYE"<<endl;
getch();
}

void Suma()
{
float a,b,c;
char d;
cout<<"Bienvenido al programa para sumar"<<endl;
cout<<endl;
sumar:
cout<<"Ingrese el primer numero"<<endl;
cin>>a;
cout<<"Ingrese el numero a sumar"<<endl;
cin>>b;
c=a+b;
cout<<"El resultado es:"<<c<<endl;
getch();
cout<<"Si quiere volver a sumar ingrese S"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>d;
if (d == 'S' || d == 's')
{
clrscr();
goto sumar;
}
}

void Resta()
{
float a,b,c;
char d;
cout<<"Bienvenido al programa para restar"<<endl;
cout<<endl;
restar:
cout<<"Ingrese el primer numero"<<endl;
cin>>a;
cout<<"Ingrese el numero a restar"<<endl;
cin>>b;
c=a-b;
cout<<"El resultado es:"<<c<<endl;
getch();
cout<<"Si quiere volver a restar ingrese R"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>d;
if (d == 'R' || d == 'r')
{
clrscr();
goto restar;
}
}

void Multiplicacion()
{
float a,b,c;
char d;
cout<<"Bienvenido al programa para multiplicar"<<endl;
cout<<endl;
multiplicar:
cout<<"Ingrese el primer numero"<<endl;
cin>>a;
cout<<"Ingrese el numero a multiplicar"<<endl;
cin>>b;
c=a*b;
cout<<"El resultado es:"<<c<<endl;
getch();
cout<<"Si quiere volver a multiplicar ingrese M"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>d;
if (d == 'M' || d == 'm')
{
clrscr();
goto multiplicar;
}
}

void Division()
{
float a,b,c;
char d;
cout<<"Bienvenido al programa para dividir"<<endl;
cout<<endl;
dividir:
cout<<"Ingrese el dividendo"<<endl;
cin>>a;
mal:
cout<<"Ingrese el divisor"<<endl;
cin>>b;
if (b==0)
{
cout<<"Tramposo, asi me trabas el programa"<<endl;
goto mal;
}
else
{
c=a/b;
}
cout<<"El resultado es:"<<c<<endl;
getch();
cout<<"Si quiere volver a dividir ingrese D"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>d;
if (d == 'D' || d == 'd')
{
clrscr();
goto dividir;
}
}

void Cambios_de_base()
{
int tabla[10];
int a,c,d,x,b;
char f;
cout<<"Bienvenido al programa para convertir numeros decimales a base 2;8 o 16"<<endl;
cout<<endl;
binario:
cout<<"Para convertir un numero a base 2 ingrese.............2"<<endl;
cout<<"Para convertir un numero a base 8 ingrese.............8"<<endl;
cout<<"Para convertir un numero a base 16 ingrese...........16"<<endl;
cin>>b;
if(b==2)
{
clrscr();
cout<<"Ingrese el numero"<<endl;
cin>>a;
for(c=0;c<10;c++)
{
x = a % 2;
if(x == 1)
tabla[c] = 1;
else if(x == 0)
tabla[c] = 0;
a = a / 2;
}
gotoxy (9,0);
cout<<"El valor que ingresaste pasado a binario es:"<<endl;
gotoxy (9,0);
for (d=0;d<10;d++)
{
gotoxy (10-d,4);
cout<<tabla[d]<<endl;
}
cout<<"Si quiere realizar otra conversion presione C"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>f;
if (f == 'C' || f == 'c')
{
clrscr();
goto binario;
}
}
if(b==8)
{
clrscr();
cout<<"Ingrese el numero"<<endl;
cin>>a;
cout<<oct<<a<<endl;
cout<<"Si quiere realizar otra conversion presione C"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>f;
if (f == 'C' || f == 'c')
{
clrscr();
goto binario;
}
}
if(b==16)
{
clrscr();
cout<<"Ingrese el numero"<<endl;
cin>>a;
cout<<hex<<a<<endl;
cout<<"Si quiere realizar otra conversion presione C"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>f;
if (f == 'C' || f == 'c')
{
clrscr();
goto binario;
}
}
}

void Radicacion()
{
int d;
float a,b,e;
char c;
cout<<"Bienvenido al programa para calcular raices"<<endl;
cout<<endl;
mal:
raiz:
cout<<"Ingrese el indice de la raiz"<<endl;
cin>>d;
cout<<"Ingrese el radicando"<<endl;
cin>>a;
if (d<=0||a<0)
{
cout<<"Tramposo, asi me trabas el programa"<<endl;
goto mal;
}
else
{
e=pow (d,-1);
b=pow (a,e);
}
cout<<"El resultado es:"<<b<<endl;
getch();
cout<<"Si quiere volver a calcular una raiz ingrese R"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>c;
if (c == 'R' || c == 'r')
{
clrscr();
goto raiz;
}
}

void Potencia()
{
int d;
float a,b;
char c;
cout<<"Bienvenido al programa para calcular potencias"<<endl;
cout<<endl;
mal:
potencia:
cout<<"Ingrese el exponente de la potencia"<<endl;
cin>>d;
cout<<"Ingrese la base de la potencia"<<endl;
cin>>a;
if (d<0&&a==0)
{
cout<<"Tramposo, asi me trabas el programa"<<endl;
goto mal;
}
else
{
b=pow (a,d);
}
cout<<"El resultado es:"<<b<<endl;
getch();
cout<<"Si quiere volver a calcular una potencia ingrese P"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>c;
if (c == 'P' || c == 'p')
{
clrscr();
goto potencia;
}
}

void Sexagesimales();
void Radianes();
void Trigonometria()
{
char d;
cout<<"Bienvenido al programa para realizar calculos trigonometricos"<<endl;
cout<<endl;
again:
trigonometria:
cout<<"En caso de que quiera utilizar radianes presione R"<<endl;
cout<<"En caso de que quiera utilizar grados sexagesimales presione S"<<endl;
cin>>d;
if (d == 'R' || d == 'r')
{
clrscr();
Radianes();
clrscr();
}
else if (d == 'S' || d == 's')
{
clrscr();
Sexagesimales();
clrscr();
}
else
{
clrscr();
cout<<"Te equivocaste, esa opcion no existe"<<endl;
cout<<"Elegi nuevamente"<<endl;
getch();
clrscr();
goto again;
}
cout<<"Si quiere volver a calcular ingrese Y"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>d;
if (d == 'Y' || d == 'y')
{
clrscr();
goto trigonometria;
}
}

void Sexagesimales()
{
float a,b,c;
char d;
cout<<"Ingrese el valor correspondiente a la operacion"<<endl;
cout<<endl;
again:
trigonometria:
cout<<"Coseno........................................1"<<endl;
cout<<"Seno..........................................2"<<endl;
cout<<"Tangente......................................3"<<endl;
cout<<"Arco coseno...................................4"<<endl;
cout<<"Arco seno.....................................5"<<endl;
cout<<"Arco tangente.................................6"<<endl;
cin>>a;
clrscr();
if (a==1)
{
cout<<"Ingrese el numero al que le quiere calcular el coseno"<<endl;
cin>>b;
c=(b*3.141592)/180;
if (b==90||b==270)
{
cout<<"El resultado es 0"<<endl;
}
else
{
cout<<"El resultado es "<<cos(c)<<endl;
}
}
else if(a==2)
{
cout<<"Ingrese el numero al que le quiere calcular el seno"<<endl;
cin>>b;
c=(b*3.141592)/180;
if (b==180||b==360)
{
cout<<"El resultado es 0"<<endl;
}
else
{
cout<<"El resultado es "<<sin(c)<<endl;
}
}
else if(a==3)
{
cout<<"Ingrese el numero al que le quiere calcular el tangente"<<endl;
cin>>b;
c=(b*3.141592)/180;
if (b==90||b==270)
{
cout<<"El resultado es infinito"<<endl;
}
if (b==180||b==360)
{
cout<<"El resultado es 0"<<endl;
}
else
{
cout<<"El resultado es "<<tan(c)<<endl;
}
}
else if(a==4)
{
error:
cout<<"Ingrese el numero al que le quiere calcular el arco coseno"<<endl;
cin>>b;
if(b<-1||b>1)
{
cout<<"Numero incorrecto"<<endl;
getch();
clrscr();
goto error;
}
else
{
cout<<"El resultado es "<<((acos(b))*180)/3.141592<<endl;
}
}
else if(a==5)
{
error2:
cout<<"Ingrese el numero al que le quiere calcular el arco seno"<<endl;
cin>>b;
if(b<-1||b>1)
{
cout<<"Numero incorrecto"<<endl;
getch();
clrscr();
goto error2;
}
else
{
cout<<"El resultado es "<<((asin(b))*180)/3.141592<<endl;
}
}
else if(a==6)
{
cout<<"Ingrese el numero al que le quiere calcular el arco tangente"<<endl;
cin>>b;
cout<<"El resultado es "<<((atan(b))*180)/3.141592<<endl;
}
else
{
clrscr();
cout<<"Te equivocaste, esa opcion no existe"<<endl;
cout<<"Elegi nuevamente"<<endl;
getch();
clrscr();
goto again;
}
cout<<"Si quiere volver a calcular ingrese T"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>d;
if (d == 'T' || d == 't')
{
clrscr();
goto trigonometria;
}
}

void Radianes()
{
float a,b;
char d;
cout<<"Ingrese el valor correspondiente a la operacion"<<endl;
cout<<endl;
again:
trigonometria:
cout<<"Coseno........................................1"<<endl;
cout<<"Seno..........................................2"<<endl;
cout<<"Tangente......................................3"<<endl;
cout<<"Arco coseno...................................4"<<endl;
cout<<"Arco seno.....................................5"<<endl;
cout<<"Arco tangente.................................6"<<endl;
cin>>a;
clrscr();
if (a==1)
{
cout<<"Ingrese el numero al que le quiere calcular el coseno"<<endl;
cin>>b;
cout<<"El resultado es "<<cos(b)<<endl;
}
else if(a==2)
{
cout<<"Ingrese el numero al que le quiere calcular el seno"<<endl;
cin>>b;
cout<<"El resultado es "<<sin(b)<<endl;
}
else if(a==3)
{
cout<<"Ingrese el numero al que le quiere calcular el tangente"<<endl;
cin>>b;
cout<<"El resultado es "<<tan(b)<<endl;
}
else if(a==4)
{
error:
cout<<"Ingrese el numero al que le quiere calcular el arco coseno"<<endl;
cin>>b;
if(b<-1||b>1)
{
cout<<"Numero incorrecto"<<endl;
getch();
clrscr();
goto error;
}
else
{
cout<<"El resultado es "<<acos(b)<<endl;
}
}
else if(a==5)
{
error2:
cout<<"Ingrese el numero al que le quiere calcular el arco seno"<<endl;
cin>>b;
if(b<-1||b>1)
{
cout<<"Numero incorrecto"<<endl;
getch();
clrscr();
goto error2;
}
else
{
cout<<"El resultado es "<<asin(b)<<endl;
}
}
else if(a==6)
{
cout<<"Ingrese el numero al que le quiere calcular el arco tangente"<<endl;
cin>>b;
cout<<"El resultado es "<<atan(b)<<endl;
}
else
{
clrscr();
cout<<"Te equivocaste, esa opcion no existe"<<endl;
cout<<"Elegi nuevamente"<<endl;
getch();
clrscr();
goto again;
}
cout<<"Si quiere volver a calcular ingrese T"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>d;
if (d == 'T' || d == 't')
{
clrscr();
goto trigonometria;
}
}
void Logaritmo()
{
char d;
float a,b;
cout<<"Bienvenido al programa para realizar calculos logaritmicos"<<endl;
cout<<endl;
again:
logaritmo:
cout<<"En caso de que quiera calcular logaritmo neperiano presione N"<<endl;
cout<<"En caso de que quiera calcular logaritmo en cualquier base presione B"<<endl;
cin>>d;
if (d == 'N' || d == 'n')
{
clrscr();
mal:
clrscr();
cout<<"Ingrese el argumento del logaritmo"<<endl;
cin>>a;
if(a<1)
{
clrscr();
cout<<"Ese numero es invalido, por favor ingrese devuelta"<<endl;
getch();
goto mal;
}
else
{
cout<<"El resultado es "<<log(a)<<endl;
}
}
else if (d == 'B' || d == 'b')
{
clrscr();
mal2:
clrscr();
cout<<"Ingrese el argumento del logaritmo"<<endl;
cin>>a;
cout<<"Ingrese la base del logaritmo"<<endl;
cin>>b;
if(a<1||b<=1)
{
clrscr();
cout<<"Ese numero es invalido, por favor ingrese devuelta"<<endl;
getch();
goto mal2;
}
else
{
cout<<"El resultado es "<<(log(a))/(log(b))<<endl;
}
}
else
{
clrscr();
cout<<"Te equivocaste, esa opcion no existe"<<endl;
cout<<"Elegi nuevamente"<<endl;
getch();
clrscr();
goto again;
}
cout<<"Si quiere volver a calcular ingrese Y"<<endl;
cout<<"En caso contrario oprima cualquier otra letra"<<endl;
cin>>d;
if (d == 'Y' || d == 'y')
{
clrscr();
goto logaritmo;
}
}

