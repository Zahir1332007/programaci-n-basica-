#include<iostream>
using namespace std;
int main(){
    int num;
    bool band;
    cout<<"INGRESA UN NUMERO";
    cin>>num;

    do{

    switch(num){
        case 1:
        cout<<"ingresaste el numero 1"<<endl;
        break;
        case 2:
        cout<<"ingresaste el numero 2"<<endl;
        break;
        case 0:
        band = false;
        break;
        default:
        cout<<"numero no encontrado"<<endl;
        break;
    }
    }
while(band);
    cout<<"hasta pronto"<<endl;
}