#include<iostream>
using namespace std;
int main(){
    int min,max;
    cout<<"ingrese el inicio"<<endl;
    cin>>min;
    cout<<"ingrese el final"<<endl;
    cin>>max;
    cout<<"la cantidad de numeros primos desde "<<min<<" hasta "<<max<<" son :";
    for(int num=min;num<=max;num++){
        if(num<2){
           continue;
        }
        bool primo = true;
        for(int divi = 2;divi*divi<=num;divi++)
        if(num%divi==0){
            primo=false;
            break;
        }
        if(primo){
            cout<<num<<" ";
        }
    }
    return 0;
}