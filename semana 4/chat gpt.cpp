#include<iostream>
using namespace std;
string codificador(string text) {
    string resultado = "";
    for (char c : text) {
        resultado += char(c + 2);
    }
    return resultado;
}
int main() {
    string name;
    cout << "Ingrese su nombre completo: ";
    getline(cin, name);
    string nombre= codificador(name);
    cout << "Nombre encriptado: " << nombre << endl;
}