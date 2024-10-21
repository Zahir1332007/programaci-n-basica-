#include<iostream>
using namespace std;
int main(){
    int x,sumapares=0,sumaimpares=0;
    int i=1;
    cout<<"ingresa un numero "<<endl;
    cin>>x;
    while(i<=x){
        if(i % 2 == 0){ 
            sumapares+=i;
        }else{
            sumaimpares+=i;
        }
        i++;
    }
    cout<<"la suma de numeros pares es "<<sumapares<<endl;
    cout<<"la suma de los numeros impares es "<<sumaimpares;
}