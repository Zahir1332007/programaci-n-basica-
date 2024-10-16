#include<iostream>
using namespace std;
int main(){
    int i,j;
    int numeros []={1,2,1,3,2,4,3,5,4,3,6,5,7,7,};
    int original=14;
    int sinduplicados[14];
    int tsindupla=0;
    for(i=0;i<original;i++){
        bool duplicado=false;
        for(j=0;j<tsindupla;j++){
            if(numeros[i]==sinduplicados[j]){
                duplicado=true;
                break;
            }
        }
        if(!duplicado){
            sinduplicados[tsindupla]=numeros[i];
            tsindupla++;
        }
    }
    cout<<"el arreglo sin duplicado : ";
    for(i=0;i<tsindupla;i++){
        cout<<sinduplicados[i]<<" ";
    }
    cout<<endl;
    return 0;


}