#include<iostream>
using namespace std;
int main(){
    int x,y,a;
    cout<<"cuantas filas de triangulo quieres"<<endl;
    cin>>a;
    for(x=0;x<=a;x++){
        for(y=0;y<x;y++){
            cout<<"*";
        }
        cout<<endl;
    }
}