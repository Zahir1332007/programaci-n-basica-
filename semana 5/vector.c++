#include<iostream>
using namespace std;
void mostrarvector(int v[]){
    for(int i=0;i<4;i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int v[4]={3,5,2,6};
    int temp;
    mostrarvector(v);
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(v[i]>v[j]){
                temp=v[j];
                v[j]=v[i];
                v[i]=temp;
                }
          }
    }
}