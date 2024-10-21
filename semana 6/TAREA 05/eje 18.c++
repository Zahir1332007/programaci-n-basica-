#include<iostream>
using namespace std;
int main (){
    int x,precio;
    char y;
    cout<<"ingresa el precio del producto"<<endl;
    cin>>x;
    cout<<"A. descuento de 10% "<<endl;
    cout<<"B. descuento de 20% "<<endl;
    cout<<"C. descuento de 30% "<<endl;
    cout<<"ingresa el descuento "<<endl;
    cin>>y;
    switch(y){
        case 'a':
        case 'A':
            precio=x-(x*0.10);
            break;
        case 'b':
        case 'B':
           precio=x-(x*0.20);
           break;
        case 'c':
        case 'C':
           precio=x-(x*0.30);
        default :
           cout<<"ingrese la opcion correcta"<<endl;
           precio=x;
           break;
    }
    cout<<"el precio despues del descuento es: "<<precio;
}