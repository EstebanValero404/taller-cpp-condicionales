#include <iostream>
int main() {
    int año;
    cout << "da el año a evaluar: ";
    cin >> año;

    if (año % 4 == 0) {
        if (año % 100 == 0) {
            if (año % 400 == 0) {
                cout << "Es bisiesto";
            } else {
                cout << "No es bisiesto";
            }
        } else {
            cout << "Es bisiesto";
        }
    } else {
        cout << "No es bisiesto";
    }
    return 0;
}
