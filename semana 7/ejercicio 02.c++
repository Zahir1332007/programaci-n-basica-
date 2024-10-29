#include<iostream>
#include<cmath>
using namespace std;
int potencia(int m,int n){
    return pow(m,n);
}
int main(){
    int m,n,resp;
    cout<<"ingresa la m y la n"<<endl;
    cin>>m;
    cin>>n;
    resp=potencia(m,n);
    cout<<m<<" elevado a la "<<n<<"="<<resp;
    return 0;
}