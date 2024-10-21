#include<iostream>
using namespace std;

int main() {
    int year;

    // Solicitar al usuario que ingrese un año
    cout << "Ingresa un año: ";
    cin >> year;

    // Verificar si el año es bisiesto
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            cout << year << " es un año bisiesto." << endl;
        } else {
            cout << year << " no es un año bisiesto." << endl;
        }
    } else {
        cout << year << " no es un año bisiesto." << endl;
    }

    return 0;
}