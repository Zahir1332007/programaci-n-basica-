#include <iostream>
#include <complex>
using namespace std;
int main() {
    complex<double> num1(2.0, 3.0); 
    complex<double> num2(1.0, 4.0);
    complex<double> suma = num1 + num2;
    cout << "Suma: " << suma << endl;
    return 0;
}
