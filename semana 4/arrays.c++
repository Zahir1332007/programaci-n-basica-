#include<iostream>
using namespace std;
int main(){
    int *p;
    int a[5];
    a[0] = 20;
    a[1] = 15;
    a[2] = 10;
    a[3] = 5;
    a[4] = 2;
    p = a;
    p +=3;
    cout<<*p;
}