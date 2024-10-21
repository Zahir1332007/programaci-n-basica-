#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"vamos a ver en que estas con las notas"<<endl;
    cout<<"A = 90-100"<<endl;
    cout<<"B = 80-89"<<endl;
    cout<<"C = 70-79"<<endl;
    cout<<"D = 60-69"<<endl;
    cout<<"F = menores de 60"<<endl;
    cout<<"ingresa tu nota"<<endl;
    cin>>x;
    if(x>=90 && x<=100){
    cout<<"estas en la posicion A "<<endl;
    }else if(x>=80 && x<=89){
        cout<<"estas en la posicion B"<<endl;
    }else if(x>=70 && x<=79){
        cout<<"estas en la posicion C "<<endl;
    }else if(x>=60 && x<=69){
        cout<<"estas en la posicion D "<<endl;
    }else{
        cout<<"estas en la posicion F "<<endl;
    }
    return 0;
}