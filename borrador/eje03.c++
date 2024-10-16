#include<iostream>
#include<string>
using namespace std;
int main(){
    string correcta,clave;
    correcta="zahir";
    do{
        cout<<"ingrese la clave correcta"<<endl;
        cin>>clave;
    }while(clave!=correcta);
    cout<<"la calve es correcta"<<endl;
    return 0;

}