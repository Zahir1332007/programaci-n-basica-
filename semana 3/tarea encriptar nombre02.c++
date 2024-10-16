#include <iostream>
#include <string>
using namespace std;
int main(){
    int razon;
    
    string nombre="zahir";
    string acomulador= " ";
    for ( char letra : nombre) {
        acomulador += char( letra + razon);
    }
      cout<<"el nombre encriptado es "<<acomulador<<endl;
    return 0;
}