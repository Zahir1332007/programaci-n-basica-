#include<iostream>
using namespace std;
int main(){
    int numero;
    int invertido = 0;
    cout<<"ingrese un numero "<<endl;
    cin>>numero;
    if(numero<0){
        numero=-numero;
    }
    while(numero>0){
        invertido =  invertido*10 + numero%10;
        numero/=10;
    }
    cout<<"el numero invertido: "<<invertido;
    return 0;
}