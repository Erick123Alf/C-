#include <iostream>
#include <string>
using namespace std;

char oPVI(const string& str)
{
    for(size_t i = 1; i < str.length(); i++)
    {
        char c = str[i];
        switch(c)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                return c;
        }
    }
    return 'X';
}

string calRFC(const string& nom, const string& apepat, const string& apemat, const string& fechaNac)
{
    string rfc;
    
    char letIni = apepat[0];
    char PVI = oPVI(apepat);
    
    char IniapeMat = (!apemat.empty()) ? apemat[0] : 'X';
    char Ininom = nom[0];
    
    string an = fechaNac.substr(2,2);
    string me = fechaNac.substr(5,2);
    string di = fechaNac.substr(8,2);

    rfc = std::string(1, letIni) + std::string(1, PVI) + std::string(1, IniapeMat) + std::string(1, Ininom) + an + me + di;

    return rfc;
}

int main()
{
    string nom, apepat, apemat, fechaNac;

    cout << "Ingrese el nombre: ";
    getline(cin, nom);

    cout << "Ingrese apellido paterno: ";
    getline(cin, apepat);

    cout << "Ingrese apellido materno: ";
    getline(cin, apemat);

    cout << "Ingrese la fecha de Nacimiento (AAAA/MM/DD): ";
    getline(cin, fechaNac);

    string rfc = calRFC(nom, apepat, apemat, fechaNac);

    cout << "RFC: " << rfc << endl;

    return 0;
}
