#include<iostream>
using namespace std;
int main(){
    int num,i;
    long long factorial = 1;
    cout<<"ingresa un numero"<<endl;
    cin>>num;
    for(i = 1 ; i <= num ; ++i )
    factorial *= i;
    cout<<"el numero en factorial es"<<endl;
    cout<<factorial;
    return 0;
}