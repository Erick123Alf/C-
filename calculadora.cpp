
 #include <iostream>
 #include <math.h>

 float suma(float a, float b){
 return a+b;
 }
 float resta(float a, float b){
 return a-b;
 }
 float multiplicacion (float a,float b){
 return a*b;
 }
 float division (float a, float b){
 return a/b;
 }
 float potencia (float a,float b){
 return pow(a,b);
 }
 float raiz(float a, float b){
 return pow(a,(1/b));
 }
 float factorial(float a){
 if(a<=1){
 return 1;
 }
 else{
 return a*(factorial(a-1));
 }
 }

 main(){
 float a=0;
 float b=0;
 int x,y;
 do{

 cout<<"\n1. Suma\n";
 cout<<"2. Resta\n";
 cout<<"3. Multiplicacion\n";
 cout<<"4. Division\n";
 cout<<"5. Potencia\n";
 cout<<"6. Raiz (cuadrada, cubica etc.)\n";
 cout<<"7. Factorial de un numero\n";
 cout<<"8. Salir de la calculadora";
 cout<<"\nEscriba el numero de la operacion: ";
 cin>>x;
 if(x==8){
 y=1;
 }
 switch(x){
 case 1:
 {
 cout<<"\nEscriba el primer numero que va a sumar: ";
 cin>>a;
 cout<<"\nEscriba el segundo numero que va a sumar: ";
 cin>>b;
 cout<<"El resultado es "<<suma(a,b);
 }break;
 case 2:
 {
 cout<<"\nEscriba el primer numero que va a restar: ";
 cin>>a;
 cout<<"\nEscriba el segundo numero que va a restar: ";
 cin>>b;
 cout<<"El resultado es "<<resta(a,b);
 }break;
 case 3:
 {
 cout<<"\nEscriba el primer numero que va a multiplicar: ";
 cin>>a;
 cout<<"\nEscriba el segundo numero que va a multiplicar: ";
 cin>>b;
 cout<<"El resultado es "<<multiplicacion(a,b);
 }break;
 case 4:
 {
 cout<<"\nEscriba el primer numero que va a dividir: ";
 cin>>a;
 cout<<"\nEscriba el segundo numero que va a dividir: ";
 cin>>b;
 if(b==0){
 cout<<"\nNumero no valido, escriba otro: ";
 cin>>b;
 }
 cout<<"El resultado es "<<division(a,b);
 }break;
 case 5:
 {
 cout<<"\nEscriba la base: ";
 cin>>a;
 cout<<"\nEscriba la potencia: ";
 cin>>b;
 cout<<"El resultado es "<<potencia(a,b);
 }break;
 case 6:
 {
 cout<<"\nEscriba el nnumero al que le va a sacar raiz: ";
 cin>>a;
 cout<<"\nEscriba el valor de la raiz(ejemplo 2, 3 etc): ";
 cin>>b;
 cout<<"El resultado es "<<raiz(a,b);
 }break;
 case 7:
 {
 cout<<"\nEscriba el numero al que le va a sacar factorial: ";
 cin>>a;
 cout<<"El resultado es : "<<factorial(a);
 }break;
 case 8:
 {
 cout<<"\n***********Super Calculadora***********\n";
 }break;
 default: {
 cout<<"\nOpcion no valida";
 }
 }
 if(x==8){
 y=1;
 system("PAUSE");
 }
 else{
 cout<<"\n Desea hacer otra operacion SI(1)/NO(2) ";
 cin>>y;
 }
 system("cls");}
 while (y==1);
 return 0;
 }
