#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ingresa el numero "<<endl;
    cin>>num;
    while(num != 0){
        if(num>0){
            cout<<"el numero es positivo";
        }else{
            cout<<"el numero es negativo";
        }
        break;

    }
    return 0;
}