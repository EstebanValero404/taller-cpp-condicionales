// ejercicio_03.cpp
#include <iostream>
int main() {
    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    int valor;

    cout << "Ingrese el valor de permisos (0-7): ";
    cin >> valor;

    if (valor & LEER)
        cout << "Tiene permiso de LEER" << endl;
    if (valor & ESCRIBIR)
        cout << "Tiene permiso de ESCRIBIR" << endl;
    if (valor & EJECUTAR)
        cout << "Tiene permiso de EJECUTAR" << endl;

    return 0;
}
