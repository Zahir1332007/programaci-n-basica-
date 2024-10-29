#include <iostream>
using namespace std;
extern int numero;
void mostrarNumero() {
    cout << "El valor de 'numero' es: " << numero << endl;
}
int numero = 10;
int main() {
    mostrarNumero(); 
}