#include <iostream>

int main()
{
    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    int valor;

    std::cout << "Ingrese el valor de permisos (0-7): " << std::endl;
    std::cin >> valor;

    if (valor & LEER)
        std::cout << "Tiene permiso de LEER" << std::endl;
    if (valor & ESCRIBIR)
        std::cout << "Tiene permiso de ESCRIBIR" << std::endl;
    if (valor & EJECUTAR)
        std::cout << "Tiene permiso de EJECUTAR" << std::endl;
    return 0;
}
