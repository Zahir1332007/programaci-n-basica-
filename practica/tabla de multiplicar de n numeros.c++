#include <iostream>
using namespace std;
int main(){
    int num,n1,n2,i;
    cout<<"ingresa el multiplicador"<<endl;
    cin>>num;
    cout<<"ingresa el limite"<<endl;
    cin>>n1;
    cout<<"la tabla de "<<num<<endl;
    for(i = 1 ; i<=n1 ; i++){
        n2 = i*num;
        cout<<num<<"x"<<i<<"="<<n2<<endl;
    }
    return 0;
}