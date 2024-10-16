#include <iostream>
using namespace std;
int main(){
    float costo,n,descuento;
    descuento = 0.10;
    cout<<"cual es el costo para el descuento"<<endl;
    cin>>costo;
    n = (costo>=100)?(costo-(costo*descuento)):(costo);
    string precio = (costo >= 100)? "tu descuento de 10%":"no te descuentan nada";
    cout<<precio<<endl;
    cout<<"tu costo es "<<n<<endl;
    return 0;
}