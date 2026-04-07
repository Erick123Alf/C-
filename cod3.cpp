#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int mayor ( int,int,int); 
int main()
{
  int num1 = 0,num2 = 0,num3 = 0;
  cout << "*ENCUENTRA EL MAYOR DE 3 NUMEROS ENTEROS*" << endl;
  cout << "Ingrese el primero: " << endl;
  cin >> num1;
  cout << "Ingrese el segundo: " << endl;
  cin >> num2;
  cout << "Ingrese el tercero: " << endl;
  cin >> num3;
  cout << "El mayor es " << mayor(num1,num2,num3) << endl;
}
int mayor ( int a , int b, int c) 
{
  int may = a;
  if (b > may)
    may = b;
  if (c > may)
    may = c;
  return may;
}

