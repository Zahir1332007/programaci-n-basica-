#include <iostream>
using namespace std;
int main(){
    int calificacion;
    cout<<"pon tu calificacion"<<endl;
    cin>>calificacion;
    string resultado = ( calificacion >= 10.5) ? "apruebas" : "no apruebas";
    cout<<"tu "<<resultado;
    return 0;
}