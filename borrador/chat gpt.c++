#include<iostream>
#include<cmath>  // Para usar pow()
using namespace std;

// Función que eleva 'm' a la potencia 'n'
int potencia(int m, int n){
    return pow(m, n);  // Usamos pow() para elevar m a la potencia n
}

int main(){
    int m, n, resp;
    cout << "Ingresa la base (m) y el exponente (n):" << endl;
    cin >> m;
    cin >> n;
    
    resp = potencia(m, n);  // Calculamos m^n
    cout << m << " elevado a la " << n << " = " << resp << endl;
    
    return 0;
}
