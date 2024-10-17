#include<iostream>
using namespace std;
int main(){
    char name[30];
    char spell[30];
    printf("ingresa tu nombre ");
    scanf ("%s", name);
    printf("ingresa tu apellido: ");
    scanf("%s",spell);
    printf("tu nombre completo es: %s\n",name);
    printf("tu apellido es %s ",spell);
    return 0;
}