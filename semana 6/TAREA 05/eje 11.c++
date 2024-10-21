#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"ingrese el numero de filas del triangulo "<<endl;
    cin>>x;
    cout<<"\n el triangulo"<<endl;
    for(int i=0;i<=x;i++){
        for(int j =0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}