#include<iostream>
using namespace std;
void mostrar(int m[3][2]){
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
            }
}      
void sumar(int m1[3][2] , int m2[3][2] , int mr[3][2]) {
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            mr[i][j]=m1[i][j] + m2[i][j];
        }
    }
}
int main(){
    int m1[3][2]={{3,2},{2,4},{1,6}};
    int m2[3][2]={{3,2},{3,7},{5,8}};
    int mr[3][2];

    sumar(m1 , m2 , mr);
    cout<<"la suma de matrices son \n";
    mostrar(mr);
}