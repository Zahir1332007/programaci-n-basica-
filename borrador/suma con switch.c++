#include<iostream>
using namespace std;
int main(){
    int x,y,s;
    cout<<"1: suma   2: resta"<<endl;
    cin>>x;
    cout<<"ingrese la cantidad de numeros \n";
    cin>>y;
    switch(x){
        case 1:
        for(double i=1;i<=y;i++){
            s+=i;
        }
        cout<<s<<endl;
    }
    return 0;
}