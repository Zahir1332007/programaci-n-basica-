#include<iostream>
using namespace std;
int main(){
    const int n = 2;
    const int m = 3;
    const int p = 2;
    int a[n][m]={
        {1, 2, 3},
        {4, 5, 6}
    };
    int b[m][p]={
        {7, 8},
        {9, 10},
        {11, 12}
    };
    int c[n][p]={0};
    for (int i = 0 ;i<n;i++){
        for(int j = 0 ; j<p ; j++){
            for (int k = 0 ; k<m ; k++){
                c[i][j]+=a[i][k] * b[k][j];
            }
        }
    }
    cout<<"la suma resultada de c es: "<<endl;
    for(int i=0; i<n; i++){
        for(int j = 0; j<p; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}