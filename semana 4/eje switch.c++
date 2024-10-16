#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"INGRESA UN NUMERO";
    cin>>num;
    switch(num){
        case 1:
        cout<<"ingresaste el numero 1"<<endl;
        break;
        case 2:
        cout<<"ingresaste el numero 2"<<endl;
        break;
        default :
        cout<<"numero no encontrado";
        break;
    }
}