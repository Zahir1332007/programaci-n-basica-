#include<iostream>
using namespace std;
int main(){
    int i,resultado,n,m;
    cout<<"con que numero quieres multiplicar"<<endl;
    cin>>m;
    for (n=1;n<=100;n++){
        resultado =n*m;
        if (i % 1 == 0){
            cout<<n<<" x "<< m <<" = "  <<resultado<<endl;

        }
    }
    cout<<endl;
    return 0;
}