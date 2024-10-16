#include<iostream>
#include<ctime>
#include<math.h>
using namespace std;
int main(){
float num1, num2;
int op;
float resultado = 0;
srand(time(0));
num1 = rand ()% 11;
num2 = rand ()% 11;
do{
    cout<<"ingresa una operacion"<<endl;
    cout<<"1.suma"<<endl;
    cout<<"2.resta"<<endl;
    cout<<"3. multiplicacion"<<endl;
    cout<<"4.division"<<endl;
    cout<<"5.para salir"<<endl;
    cout<<"que necesitas "<<endl;
    cin>>op;
    switch(op){
    case 1:
    resultado = num1 +num2;
    cout<<num1<<"+"<<num2<<"="<<resultado<<endl;
    break;
    case 2:
    resultado = num1 - num2;
    cout<<num1<<"-"<<num2<<"="<<resultado<<endl;
    break;
    case 3:
    resultado=num1*num2;
    cout<<num1<<"x"<<num2<<"="<<resultado<<endl;
    break;
    case 4:
    if(num1 != 0){
        resultado = num1/num2;
        cout<<num1<<"/"<<num2<<"="<<resultado<<endl;
    }else{
        cout<<"la solucion es imaginaria";
    }
    break;
    default:
    cout<<"saliste del programa"<<endl;
    break;
    }
 }
while (op != 5);
return 0;

}
