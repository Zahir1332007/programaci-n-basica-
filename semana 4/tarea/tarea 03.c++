#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"ingresa el tamaño de la matriz (n x n)"<<endl;
    cin>>n;
    int matriz[n][n];
    int transpuesta[n][n];
    cout<<"ingresa los valores de la matriz"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        cout<<"el elemento["<<i+1<<"]["<<j+1<<"] : ";
        cin>>matriz[i][j];
        }
    }
    for(i = 0;i<n;i++){
        for(j=0;j<n;j++){
            transpuesta[j][i]=matriz[i][j];
        }
    }
cout<<"\nmatriz original\n"<<endl;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<matriz[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"\nmatriz transpuesta\n";
for(i=1;i<=n;i++){
    for(j=0;j<n;j++){
        cout<<transpuesta[j][i]<<" ";
    }
     cout<<endl;
}
}