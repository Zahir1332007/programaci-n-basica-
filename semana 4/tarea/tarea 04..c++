#include<iostream>
using namespace std;
int main(){
    int n,pasos;
    cout<<"ingresa un numero entero"<<endl;
    cin>>n;
    if(n>0){
        while(n != 1){
            if(n%2 == 0){
                n=n/2;
                cout<<n<<" ";
            }else{
                n=n*3+1;
                cout<<n<<" ";
            }
        pasos++;
        }
    }
    cout<<endl;
    cout<<"la cantidad de pasos es "<<pasos;
}