#include<iostream>
#include<cmath>
using namespace std;
void saludo(){
    cout<<"hola fiis";

}
void saludo(int x){
    cout<<"hola fiis"<<x;

}
void saludo(string name , int x){
    cout<<"hola "<<name<<x;

}
int main(){
    saludo();
    saludo(5);
    saludo("jose",13);
    return 0;
}