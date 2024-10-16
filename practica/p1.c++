#include <iostream>
#include<ctime>
#include <math.h>
using namespace std;
int main(){
    float resultado[5];
    int op;
    float num1,num2;
    srand(time(0));
    num1 = rand ()% 11;
    num2 = rand ()% 11;

    do
    {
    cout<<"ingresa una operacion"<<endl;
    cout<<"1.suma"<<endl;
    cout<<"2. resta"<<endl;
    cout<<"3.multiplicar"<<endl;
    cout<<"4. dividir"<<endl;
    cout<<"que opeeracion quieres"<<endl;
    cin>>op;
        switch(op){
            case 1:
            resultado[0]=num1+num2;
            cout<<num1<<"+"<<num2<<"="<<resultado[0]<<endl;
            break;
            case 2:
            resultado[1]=num1-num2;
            cout<<num1<<"-"<<num2<<"="<<resultado[1]<<endl;
            break;
            case 3:
            resultado[2]=num1*num2;
            cout<<num1<<"x"<<num2<<"="<<resultado[2]<<endl; 
            break;
            case 4:
            if(num2 != 0){
            resultado[3]=num1/num2;
            cout<<num1<<"/"<<num2<<"="<<resultado[3]<<endl;
            }else{
                cout<<"es imaginario";
            }
            break; 
            default : 
            cout<<"error de operacion"<<endl;       
        }
    } while (op != 0);
    cout<<"gracias por utilizar la calculadora";
return 0;
}