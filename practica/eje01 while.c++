#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;
    cout << "Ingresa números para sumar (0 para terminar): " << endl;
    cin >> num;
    
    while (num != 0) {
        suma += num;
        cin >> num;
    }

    cout << "La suma total es: " << suma << endl;
    return 0;
}
