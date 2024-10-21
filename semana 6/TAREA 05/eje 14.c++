#include<iostream>
using namespace std;
int main(){
    int x,y;
    int p=0,n=0,c=0;
    int contador = 0;
    cout<<"cuantos numeros quieres ingresar"<<endl;
    cin>>x;
    do{
        cout<<"ingresa el numero"<<endl;
        cin>>y;
        if(y>0){
            p++;
        }else if(y<0){
            n++;
        }else{
            c++;
        }
        contador++;
    }while(contador<x);
    cout<<"los numeros positivos es "<<p<<endl;
    cout<<"los numeros negativos es "<<n<<endl;
    cout<<"los ceros son "<<c;
    return 0;
}