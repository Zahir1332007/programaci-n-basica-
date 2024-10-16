#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int *p;
    p=&x;
    cout<<"valor : "<<x<<endl;
    cout<<"direccion : "<<&x<<endl;
    cout<<"valor de p : "<<p<<endl;
    cout<<"direccion : "<<*p<<endl;
    *p=20;
    cout<<"valor : "<<x<<endl;
    return 0;
}