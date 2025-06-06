#include<iostream>
#include<string>
using namespace std;
struct farmacia{
    int codigo;
    string nombre;
    int valor;
};
void mostrar(farmacia arreglo[], int tamaño){
    for(int i = 0 ; i < tamaño ; i++ ){
        cout<<"codigo : "<<arreglo[i].codigo<<
        "nombre : "<<arreglo[i].nombre<<
        "precio : "<<arreglo[i].valor<<endl;
    }
}
void llenarlista(farmacia arreglo[], int tamaño){
    for(int i = 0 ; i < tamaño ; i++){
        cout<<"ingresa los datos de los medicamentos #"<<i+1<<endl;
        cout<<"codigo :";
        cin>>arreglo[i].codigo;
        cout<<"nombre :";
        getline(cin, arreglo[i].nombre);
        cout<<"precio :";
        cin>>arreglo[i].valor;
    }
}
int sumanumeros(farmacia arreglo[], int tamaño){
    int suma = 0;
    for(int i = 0 ; i < tamaño ; i++){
        suma+=arreglo[i].valor;
    }
    return suma;
}
void modificar(farmacia arreglo[], int tamaño, int codigo, int nuevocodigo, string nuevonombre, int nuevovalor){
    for(int i = 0 ; i < tamaño ; i++){
        if(arreglo[i].codigo==codigo){
            arreglo[i].codigo = nuevocodigo;
            arreglo[i].nombre = nuevonombre;
            arreglo[i].valor = nuevovalor;
            cout<<"meidcamento actualizado"<<endl;
            return;
        }
    }
    cout<<"medicamento con codigo "<< codigo << "no encontrado" <<endl;
}
void eliminar(farmacia arreglo[], int tamaño , int codigo){
    for(int i = 0 ; i < tamaño; i++){
        if(arreglo[i].codigo){
            arreglo[i].codigo=0;
            arreglo[i].nombre = "";
            arreglo[i].valor = 0;
            cout<<"elemento eliminado exitosamente "<<endl;
            return;
        }
    }
    cout<<"codigo no encontrado"<<endl;
}
int main(){
    int tamaño;
    cout<<"ingresa la cantidad de medicamentos"<<endl;
    cin>>tamaño;

    farmacia* arreglo = new farmacia[tamaño];
    llenarlista(arreglo, tamaño);
    mostrar(arreglo, tamaño);
    int sumatotal=sumanumeros(arreglo,tamaño);
    cout<<"el total de los precios es "<<sumatotal<<endl;
    int codigomodificar;
    cout<<"ingrese el codigo del elemento a modificar : ";
    cin>>codigomodificar;
    modificar(arreglo,tamaño,codigomodificar , 999 , "aspirina" , 200);
    int codigoeliminar;
    cout<<"ingresa el codigo a eliminar"<<endl;
    cin>>codigoeliminar;
    eliminar(arreglo, tamaño, codigoeliminar);
    mostrar(arreglo, tamaño);
    delete[] arreglo;
    return 0;
    }