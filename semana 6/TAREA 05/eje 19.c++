#include<iostream>
using namespace std;
int main(){
    char letra;
    cout<<"ingresa una letra o consonante "<<endl;
    cin>> letra;
    letra=(towlower(letra));
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<letra<<" es una vocal "<<endl;
        break;
        default :
        if(isalpha(letra)){
            cout<<letra<<" es una consonante"<<endl;
        }else{
            cout<<letra<<" no es una consonate"<<endl;
        }
    }
    return 0;
}