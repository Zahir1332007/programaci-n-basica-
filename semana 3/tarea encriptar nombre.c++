#include<iostream>
using namespace std;
int main(){
    int razon;
    razon = 5;
    char c = 'z';
    char b = 'a';
    char d = 'h';
    char e = 'i';
    char f = 'r';
    int  y = int(c),x =int(b),z = int(d),w = int(e),v = int(f);
    y+=razon,x+=razon,z+=razon,w+=razon,v+=razon;
    cout<<"mi nombre encriptado es "<<endl;
    cout<<char(y)<<char(x)<<char(z)<<char(w)<<char(v)<<endl;
    cout<<"mi nombre desencriptado es"<<endl;
    cout<<char(c)<<char(b)<<char(d)<<char(e)<<char(f);
    return 0;
    }