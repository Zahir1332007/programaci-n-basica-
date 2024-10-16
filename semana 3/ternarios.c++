#include <iostream>
using namespace std;

int main() {
    float calificacion;
    cout << "Introduce la calificación del estudiante (0.0 a 10.5): ";
    cin >> calificacion;
    string resultado = (calificacion >= 10.5) ? "aprobó" : "no aprobó";
    cout << "El estudiante " << resultado << "." << endl;
    return 0;
}
