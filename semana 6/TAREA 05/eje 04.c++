#include<iostream>
using namespace std;
int main(){
    const int n=3;
    const int m=2;
    int matrix[n][m] = {
        {9, 2},
        {8, 4},
        {5, 6}
    };
    int min=matrix[0][0];
    int max=matrix[0][0];
    for (int i = 0;i<n;i++){
        for (int j = 0 ; j<m;j++){
            if (matrix[i][j]<min){
                min=matrix[i][j];
            }
            if(matrix[i][j]>max){
                max=matrix[i][j];
            }
        }
    }
    cout<<"el menor numero de la matrix es: "<<min<<endl;
    cout<<"el mayor numero de la matrix es: "<<max;
    return 0;

}