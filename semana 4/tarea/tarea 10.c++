#include<iostream>
using namespace std;
int main(){
    const int max=200;
    char oracion[max];
    int contarvocales[5]={0};
    int i = 0;
    cout<<"ingresa una oracion de para contar las vocales"<<endl;
    cin>>noskipws;
    while(i<max-1 && cin >>oracion[i]){
        if(oracion[i]== '\n'){
            break;
        }
        switch (oracion[i]){
            case 'a':
            case 'A':
                contarvocales[0]++;
                break;
            case 'e':
            case 'E':
                contarvocales[1]++;
                break;
                case 'i':
                case 'I':
                contarvocales[2]++;
                break;
                case 'o':
                case 'O':
                contarvocales[3]++;
                break;
                case 'u':
                case 'U':
                contarvocales[4]++;
                break;
        }
        i++;
    }
    oracion[i] =  '\0';
    cout<<"cantidad de vocales :\n";
    cout<<"a: "<<contarvocales[0]<<endl;
    cout<<"e: "<<contarvocales[1]<<endl;
    cout<<"i: "<<contarvocales[2]<<endl;
    cout<<"o: "<<contarvocales[3]<<endl;
    cout<<"u: "<<contarvocales[4]<<endl;
    return 0;
}