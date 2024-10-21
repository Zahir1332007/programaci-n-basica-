#include<iostream>
using namespace std;
int main (){
    const int m=2;
    const int n=3;
    int matrix[n][m] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int transpuesta[m][n];
    for (int i =0; i<n ; i++){
        for(int j=0;j<m;j++){
            transpuesta[j][i]=matrix[i][j];  
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0; j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"";
    cout<<"matriz transpuesta"<<endl;
    for (int i = 0; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<transpuesta[i][j]<<" ";
        }
        cout<<endl;
    }
}