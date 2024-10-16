#include <iostream>
#include <ctime>
using namespace std;
#define N 4
int main()
{
    int v[]={3,5,2,6};
    int minor,major,j;
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        j=i+1;
        if(v[i]>v[j]){
            major=v[i];
            minor=v[j];
        }else{
            major=v[j];
            minor=v[i];
        }
        cout<<minor<<" "<<major<<endl;
        do{
            sum+=minor;
            minor++;
        }while(minor<major);
    }
    cout<<"La suma es: "<<sum;
}