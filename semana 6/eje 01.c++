#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double PI=3.14159265;
    cout<<scientific<<"notacion cientifica: "<<PI<<endl;
    cout<<setprecision(5);
    cout<<"notacion cientifica: "<<PI<<endl;
    return 0;
}