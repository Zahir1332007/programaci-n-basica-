#include <iostream>
using namespace std;

class Rectangulo {
private:
    float ancho;
    float alto;

public:
    // Constructor
    Rectangulo(float a, float h) : ancho(a), alto(h) {}

    // Métodos para obtener área y perímetro
    float calcularArea() {
        return ancho * alto;
    }

    float calcularPerimetro() {
        return 2 * (ancho + alto);
    }

    // Métodos get y set
    void setAncho(float a) {
        ancho = a;
    }

    void setAlto(float h) {
        alto = h;
    }

    float getAncho() {
        return ancho;
    }

    float getAlto() {
        return alto;
    }
};

int main() {
    Rectangulo rect(5.0, 3.0);

    cout << "Ancho: " << rect.getAncho() << endl;
    cout << "Alto: " << rect.getAlto() << endl;
    cout << "Área: " << rect.calcularArea() << endl;
    cout << "Perímetro: " << rect.calcularPerimetro() << endl;

    return 0;
}
