#include <iostream>
using namespace std;
int main(){
    int opcion;
    double soles,conversion;
    cout<<"1°.sol a dolar"<<endl;
    cout<<"2°.sol a euro"<<endl;
    cout<<"ingrese que quieres convertir"<<endl;
    cin>>opcion;
    cout<<"ingrese el sol"<<endl;
    cin>>soles;

    switch(opcion){
        case 1:
        conversion = soles / 3.75;
        cout<<"la conversion es"<<conversion<<endl;
        break;
        case 2:
        conversion = soles / 4.19;
        cout<<"la conversion es "<<conversion<<endl;
        break;
        default:
        cout<<"no es la opcion ingresada"<<endl;
        break;

    }
return 0;
}