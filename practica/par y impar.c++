#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ingrese un numero para saber si es par o impar"<<endl;
    cin>>x;
    if(x % 2 == 0){
        cout<<x<<"el numero es par";
    }else{
        cout<<x<<"es impar";
    }
    return 0;
}