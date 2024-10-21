#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"multiplo hasta 100"<<endl;
    cout<<" "<<endl;
    cout<<"ingresa el multiplo"<<endl;
    cin>>x;
    for(y=1;y<=100;y++){
        if(y % x==0){
            cout<<y<<" ";
        }
    }
}