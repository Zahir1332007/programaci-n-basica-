#include <iostream>

int main() {
    int contador = 10;

    while (contador > 0) {
        std::cout << "Cuenta regresiva: " << contador << std::endl;
        contador--;
    }

    std::cout << "¡Despegue!" << std::endl;

    return 0;
}
