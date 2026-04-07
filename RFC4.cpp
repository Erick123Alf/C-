#include <iostream>
#include <string>

struct RFC {
    std::string nombre;
    std::string apellidoPaterno;
    std::string apellidoMaterno;
    std::string fechaNacimiento;
    std::string rfc;
};

int main() {
    RFC registro;

    std::cout << "Registro de RFC" << std::endl;
    std::cout << "Ingrese su nombre: ";
    std::cin >> registro.nombre;
    std::cout << "Ingrese su apellido paterno: ";
    std::cin >> registro.apellidoPaterno;
    std::cout << "Ingrese su apellido materno: ";
    std::cin >> registro.apellidoMaterno;
    std::cout << "Ingrese su fecha de nacimiento (dd/mm/aaaa): ";
    std::cin >> registro.fechaNacimiento;

    // Generar RFC (solo un ejemplo, no es un algoritmo real)
    registro.rfc = registro.apellidoPaterno.substr(0, 2) + registro.apellidoMaterno.substr(0, 1) + registro.nombre.substr(0, 1) + registro.fechaNacimiento.substr(0, 2) + registro.fechaNacimiento.substr(2, 3) + registro.fechaNacimiento.substr(6, 2);

    std::cout << "RFC registrado: " << registro.rfc << std::endl;

    return 0;
}
