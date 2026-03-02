#include <iostream>
int main() {
    double peso, altura;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    double imc = peso / (altura * altura);
    cout << "Su IMC es: " << imc << endl;
    if (imc < 18.5) {
        cout << "Bajo peso";
    }
    else if (imc < 25) {
        cout << "Peso normal";
    }
    else if (imc < 30) {
        cout << "Sobrepeso";
    }
    else if (imc < 35) {
        cout << "Obesidad I";
    }
    else {
        cout << "Obesidad II";
    }
    return 0;
}
