#include <iostream>
#include <string>
using namespace std;

char oPVI(const string& str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        char c = toupper(str[i]);
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            return c;
        }
    }
    return 'X';
}

string calRFC(const string& nom, const string& apepat, const string& apemat, const string& fechaNac)
{
    string rfc;
    
    char letIni = toupper(apepat[0]);
    char PVI = oPVI(apepat);
    
	const string iniapepat = apepat.substr(2,2);
    
    char IniapeMat = (!apemat.empty()) ? toupper(apemat[0]) : 'X';
    char Ininom = toupper(nom[0]);
    
   	string an = fechaNac.substr(2,2); 
    string me = fechaNac.substr(4,2); 
    string di = fechaNac.substr(6,2); 

    rfc = string(1, letIni) + string(1, PVI) + string(1, IniapeMat) + string(1, Ininom) + an + me + di;

    return rfc;
}

int main()
{
    string nom, apepat, apemat, fechaNac, date;

    cout << "Ingrese el nombre: ";
    getline(cin, nom);

    cout << "Ingrese apellido paterno: ";
    getline(cin, apepat);

    cout << "Ingrese apellido materno: ";
    getline(cin, apemat);

    cout << "Ingrese la fecha de Nacimiento (AAAAMMDD): ";
    getline(cin, fechaNac);

    string rfc = calRFC(nom, apepat, apemat, fechaNac);

    cout << "RFC: " << rfc << endl;

    return 0;
}
