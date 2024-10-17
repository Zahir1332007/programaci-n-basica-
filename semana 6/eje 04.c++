#include <iostream>
using namespace std;

int main() {
 int numeros[10],mayor,menor;
 for(int i = 1;i<=10;i++){
    cout<<"ingrese los numeros "<<i<<endl;
    cin>>numeros[i];
 }
 menor=mayor =numeros[0];
 for(int i =1;i<=10;i++){
    if(numeros[i]>mayor){
        mayor=numeros[i];
    }
    if(numeros[i]<menor){
        menor=numeros[i];
    }
 }
 cout<<"el mayor es : "<<mayor;
 cout<<"el menor es : "<<menor;
    return 0;
}
