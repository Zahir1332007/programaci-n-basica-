#include <iostream>
using namespace std;
int main() {
    int numero;
    do {
        cout << "Ingrese un número (negativo para salir): ";
        cin >> numero;
        if (numero >= 0) {
            cout << "Usted ingresó: " << numero << endl;
        }
    } while (numero >= 0);
    cout << "Número negativo ingresado. Saliendo del programa." << endl;
    return 0;
}