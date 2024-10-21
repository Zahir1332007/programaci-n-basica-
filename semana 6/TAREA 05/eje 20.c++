#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ingrese un numero de 3 digitos"<<endl;
    cin>>x;
    if(x<100 && x>999)
    {
    cout<<"el numero que ingreso no es de 3 digitos"<<endl;
    return 0;}
    int centena = x/100;
    int decena = (x/10)%10;
    int unidad = x%10;
    if(centena==decena && decena==unidad){
    cout<<"todos los digitos son iguales"<<endl;
    }else if(centena==decena || decena==unidad || centena==unidad){
        cout<<"dos digitos son diferentes"<<endl;
    }else{
        cout<<"todos los digitos son diferentes"<<endl;
    }
    return 0;
}