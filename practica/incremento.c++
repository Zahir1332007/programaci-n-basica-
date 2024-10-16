#include<iostream>
using namespace std;
int main(){
    int n,m;
    n = 7;
    m = n++;
    n=++m;
    cout<<m<<endl;
    cout<<n;
}