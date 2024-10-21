#include<iostream>
using namespace std;
int main (){
    int x,suma=0;
    cout<<"ingresa un numeros"<<endl;
    cin>>x;
    while(x<0){
        x=-x;
    }
    while(x>0){
        suma +=x%10;
        x/=10;
    }
    cout<<"la suma de los numeros digitos es "<<suma<<endl;
}