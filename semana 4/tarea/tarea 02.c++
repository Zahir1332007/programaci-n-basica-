#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,longitud = 0;
    string palabra;
    bool palindromo;
    cout<<"ingrese la palabra"<<endl;
    cin>>palabra;

    while(palabra[longitud] != 0){
        longitud++;
    }
    for(i=0;i<longitud/2;i++){
        if(palabra[i] != palabra[longitud-1-i]){
            break;
        }

    }
    if(palindromo = true){
        cout<<"la palabra "<<palabra<<" es palindromo"<<endl;
    }else{
        cout<<"no es palindromo";
    }
}