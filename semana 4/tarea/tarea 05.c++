#include <iostream>
using namespace std;
int main(){
    char n;
    int clave;
    cout<<"ingrese el numero para el cifrado"<<endl;
    cin>>clave;
    cout<<"ingrese la palabra a cifrar(terminar con un punto)"<<endl;
    cin>>n;
    while(n != '.'){
        if(n>= 'A' && n<= 'Z'){
            n = (n-'A'+clave)%26+'A';

        }else if(n>='a' && n<='z'){
            n =(n-'a'+clave)%26+'a';
        }
        cout<<n;
        cin>>n;

    }
    cout<<endl;

}