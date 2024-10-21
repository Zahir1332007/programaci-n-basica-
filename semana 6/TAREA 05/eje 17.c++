#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"ingresa el año "<<endl;
    cin>>year;
    if(year % 4 == 0){
        if (year % 100 != 0 || year % 400 == 0){
            cout<<year<<" es un año bisiesto"<<endl;
        }else{
            cout<<year<< " no es un año bisiesto ";
        }
    }else{
        cout<<year<<" no es un año bisiesto "<<endl;
    }
    return 0;
}