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
        case 2:// esto permite las opciones del switch
        cout<<"es la opcion 2";
        break;
    }
    return 0;
}