#include<iostream>
using namespace std;
int main(){
    int m,suma=0;
    cout<<"ingresa los numeros para sumar"<<endl;
    do{
        cin>>m;
        suma += m;
    }while (m!=0);
    cout<<suma;
    return 0;
}