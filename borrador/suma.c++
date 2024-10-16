#include<iostream>
using namespace std;
int main(){
    int j,i,m;
    for(i=1;i<=12;i++){
     cout<<"la tabla del "<<i<<endl;
        for(j=1;j<=12;j++){
            m=i*j;
            cout<<i<<"x"<<j<<"="<<m<<endl;
        }
    }
}