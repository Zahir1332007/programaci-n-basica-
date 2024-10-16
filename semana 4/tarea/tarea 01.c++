#include <iostream>
using namespace std;
int main(){ 
    int num[10],i;
    float promedio ,suma =0;
    
    cout<<"ingresa los numeros: "<<endl;
    for(i=1;i<=10;i++){
        cin>>num[i];
        suma += num[i] ;
        promedio = suma/10;
    }
    cout<<"la suma es "<<suma<<endl;
    cout<<"el promedio es: "<<promedio<<endl;
    cout<<" los numeros mayores al promedio es: ";
    for(i = 1;i<=10;i++){
        if(num[i]>promedio)
        cout<<" "<<num[i];
    }   
    return 0;
}     