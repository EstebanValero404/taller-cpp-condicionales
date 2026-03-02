#include <iostream>
int main() {
    double monto;
    char tipo;
    bool finSemana;
    cout << "Ingrese el monto de compra: ";
    cin >> monto;
    cout << "Tipo de cliente (V = VIP, N = Normal): ";
    cin >> tipo;
    cout << "Es fin de semana? (1 = Si, 0 = No): ";
    cin >> finSemana;
    double descuento = 0;
    if (tipo == 'V') {
        descuento = descuento + 0.20;
    } else {
        descuento = descuento + 0.10;
    }
    if (monto > 500) {
        descuento = descuento + 0.10;
    }
    if (finSemana == 1) {
        descuento = descuento + 0.05;
    }
    if (descuento > 0.50) {
        descuento = 0.50;
    }
    double total = monto - (monto * descuento);
    cout << "Total a pagar: " << total;
    return 0;
}
