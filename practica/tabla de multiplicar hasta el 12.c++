#include<iostream>
using namespace std;
int main(){
    int i,j,r;
    cout<<"mi tabla de multiplicar"<<endl;
    for(i = 1 ; i<=12 ; i++ ){
        for(j = 1 ;  j <= 12 ; j++){
            r=i*j;
            cout<<i<<"x"<<j<<"="<<r<<endl;
        } 
    }
    cout<<endl;
    return 0;
}