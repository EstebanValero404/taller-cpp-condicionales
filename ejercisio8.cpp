#include <iostream>
int main() {
    double saldo = 1000;
    int opcion;
    double cantidad;
    cout << "1. Depositar" << endl;
    cout << "2. Retirar" << endl;
    cout << "3. Consultar saldo" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;
    if (opcion == 1) {
        cout << "Cantidad a depositar: ";
        cin >> cantidad;
        saldo = saldo + cantidad;
        cout << "Nuevo saldo: " << saldo;
    }
    else if (opcion == 2) {
        cout << "Cantidad a retirar: ";
        cin >> cantidad;
        if (cantidad <= saldo) {
            saldo = saldo - cantidad;
            cout << "Nuevo saldo: " << saldo;
        } else {
            cout << "Saldo insuficiente";
        }
    }
    else if (opcion == 3) {
        cout << "Saldo actual: " << saldo;
    }
    else {
        cout << "Opcion no valida";
    }
    return 0;
}
