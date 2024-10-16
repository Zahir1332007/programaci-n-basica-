#include<iostream>
using namespace  std;
int main(){
    int numeros[]={10,20,80,40,70,79,99,89,54,12};
    int total=10;
    int mayor=numeros[0];
    for(int i=1;i<=total;i++){
        if(numeros[i]>mayor){
            mayor=numeros[i];
        }
        if(mayor >100){
            cout<<"el numero es demaciado grande";
            break;
        }

    }
    cout<<"el mayor numero es "<<mayor<<endl;
    return 0;
}