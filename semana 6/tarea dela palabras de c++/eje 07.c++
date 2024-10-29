#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ingresa una opcion"<<endl;
    cin>>x;
    switch(x){
        case 1:
        cout<<"es la opcion 1";
        break;
        case 2:
        cout<<"es la opcion 2";
        break;
        default:
        cout<<"ingresa la opcion incorrecta";

    }
    return 0;
}