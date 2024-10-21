#include<iostream>
using namespace std;
int main(){
    int x;
    do{
       cout<<"menu de opciones "<<endl;
       cout<<"1. hola"<<endl;
       cout<<"2. adios"<<endl;
       cout<<"3. salir"<<endl;
       cout<<"ingresa una opcion "<<endl;
       cin>>x;
    
        switch(x){
            case 1:
                cout<<"hola"<<endl;
                break;
            case 2:
                cout<<"adios"<<endl;
                break;
            case 3:
                cout<<"saliendo del programa...."<<endl;
                break;
            default :
               cout<<"ingresa la opcion correcta"<<endl;
               break;
        }
    }while(x != 3);
    return 0;
}