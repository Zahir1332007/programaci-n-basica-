#include<iostream>
using namespace std;
int main (){
    int r=3,ds=0,sd=0;
    int matrix[r][r]{
        {1, 2, 3,},
        {4, 5, 6,},
        {7, 8, 9,}
    };
    for (int i = 0 ; i<r;++i){
        ds+=matrix[i][i];
        sd+=matrix[i][r-1-i];
    }
    cout<<"la suma de la matriz diagonal principal es: "<<ds<<endl;
    cout<<"la suma de la matriz diagonal secundaria es: "<<sd;
}