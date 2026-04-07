#include <iostream>
using namespace std;

int main()
{
    // https://parzibyte.me/blog
    string fecha = "20211128";
    string anio = fecha.substr(0, 4);
    string mes = fecha.substr(4, 2);
    string dia = fecha.substr(6, 2);
    // Extraer solo el nombre. Desde 0 tomar 4 caracteres
    cout << "Año " << anio << " Mes " << mes << " Día " << dia << endl;
}
