#include <iostream>
using namespace std;
int main(){
    float nota;
    cout<<"ingresa tu nota(0 a 20)"<<endl;
    cin>>nota;
    string resultado = (nota >=10.5)?"apruebas" : "no apruebas";
    cout<<"tu "<<resultado;
    return 0;
}