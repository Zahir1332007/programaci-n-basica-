#include<iostream>
using namespace std;
int main(){
    long long a,b,resultado=1;
    cout<<"ingresa el numero base "<<endl;
    cin>>a;
    cout<<"ingresa el numero potencia "<<endl;
    cin>>b;
    for(int i=1;i<=b;i++){
        resultado*=a;
    }
    cout<<"la potencia es "<<resultado;
}