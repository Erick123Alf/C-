#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
  int arregloEntero[10] = {0}; 
  cout << "Arreglo recien declarado: " << endl;
  for (int i = 0 ; i < 10 ; i++) 
    cout << "arregloEntero["<<i<<"]="<<arregloEntero[i] << endl;
  cout << "Introduzca 10 nuevos valores " << endl;
  for (int i = 0 ; i < 10 ; i++) 
    {
      cout << " Introduzca nuevo valor para
arregloEntero["<<i<<"]" << endl;
      cin >> arregloEntero[i];
    }
  cout << "Luego de los valores introducidos, el arreglo quedo asi: " << endl;
  for (int i = 0 ; i < 10 ; i++) 
    cout << "arregloEntero["<<i<<"]="<<arregloEntero[i] << endl;
  return 0;
}

