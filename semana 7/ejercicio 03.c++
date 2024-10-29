#include<iostream>
#include<cmath>
using namespace std;
int devolver(int m,int n){
    int resp=1;
    for(int i=0;i<n;i++){
        resp*=m;}
        return resp;
    
}
void no(int m,int n){
    int resp=1;
    for(int i=0;i<n;i++){
        resp*=m;
    }
    cout<<"la potencia es "<<resp;
}
int main(){
    int m,n;
    cout<<"ingresa los valores"<<endl;
    cin>>m;
    cin>>n;
    cout<<"la potencia es "<<devolver(m,n)<<endl;
    no(m, n);
}
