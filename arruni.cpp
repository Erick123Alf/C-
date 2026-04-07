// Arreglos unidimensionales
// Lectura y escritura de un vector y calculo del promedio
//------------------------------------------------
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//------------------------------------------------
void lectX(double *x, int n, char c );
void escrX(double *x, int n );
double promX( double *x, int n);
//================================================
int main()
{
double v[40];
int n;
printf("\n Promedio de elementos de un vector.\n\n");
printf(" numero de elementos : ");
scanf( "%d", &n);
if( n > 40 ){
printf("\n Numero demasiado grande\n\n");
exit(1);
}
lectX(v, n, 'v');
printf(" v : \n");
escrX(v, n);
printf(" promedio = %lf\n", promX(v, n));
return 0;
}
//================================================
void lectX(double *x, int n, char c )
{
// lectura de los elementos de un "vector".
int i;
for( i = 0; i < n; i++){
printf(" %c(%d) = ", c, i+1);
scanf("%lf", &x[i] );
}
}
//------------------------------------------------
void escrX(double *x, int n )
{
// escritura de los elementos de un "vector".
int i;
int nEltosLin = 5; // numero de elementos por linea
for( i = 0; i < n; i++){
printf("%15.8lf", x[i]);
if( (i+1)%nEltosLin == 0 || i == n-1) printf("\n");
}
}
//------------------------------------------------
double promX( double *x, int n)
{
// promedio de los elementos del 'vector' x
int i;
double s = 0.0;
if( n <= 0 ){
printf(" promX: n = %d inadecuado\n", n);
return 0.0;
}
for( i = 0; i < n; i++) s += x[i];
return s/n;
}

