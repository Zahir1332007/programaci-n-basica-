#include<iostream>
using namespace std;
int main(){
    int numero,numero_o;
    int invertido = 0;
    cout<<"ingrese un numero "<<endl;
    cin>>numero;
    numero_o=numero;
    if(numero<0){
        numero=-numero;
    }
    while(numero>0){
        invertido =  invertido*10 + numero%10;
        numero/=10;
    }
    if(numero_o<0){
        invertido=-invertido;
    }
    cout<<"el numero invertido: "<<invertido;
    return 0;
}