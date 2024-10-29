#include <iostream>
#include <fstream>
using namespace std;

struct perro {
protected:
    int id;
    string nombre;
    float peso;
    string color;
    string fecha_entrada;
    string fecha_salida;
    string estado;

public:
    void setDatos(int di, string name, float pes, string coulor, string fe, string fs, string status) {
        id = di;
        nombre = name;
        peso = pes;
        color = coulor;
        fecha_entrada = fe;
        fecha_salida = fs;
        estado = status;
    }

    void ingresodatos() {
        cout << "Ingrese datos del perro" << endl;
        cout << "ID: "; cin >> id;
        cout << "Nombre del perro: "; cin >> nombre;
        cout << "Peso del perro en Kg: "; cin >> peso;
        cout << "Color del perro: "; cin >> color;
        cout << "Fecha de ingreso del perro: "; cin.ignore(); getline(cin, fecha_entrada);
        cout << "Fecha de salida del perro: "; getline(cin, fecha_salida);
        cout << "Estado de salud del perro: "; cin >> estado;
    }

    void infodog() {
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Peso: " << peso <<" Kg"<< endl;
        cout << "Color: " << color << endl;
        cout << "Fecha de ingreso: " << fecha_entrada << endl;
        cout << "Fecha de salida: " << fecha_salida << endl;
        cout << "Estado: " << estado << endl;
    }
};


struct adoptante {
protected: 
    int ID;
    string NomBrecomplet;
    string telefono;
    bool xp_mascotas;

public:
    void setdatosadopta(int ide, string namecomplet, string numberphone, bool xp_dog) {
        ID = ide;
        NomBrecomplet = namecomplet;
        telefono = numberphone;
        xp_mascotas = xp_dog;
    }

    void ingresoDatosAdoptante() {
        cout << "Ingrese ID del adoptante: "; cin >> ID;
        cout << "Ingrese nombre del adoptante: "; cin.ignore(); getline(cin, NomBrecomplet);
        cout << "Ingrese telefono del adoptante: "; cin >> telefono;
        cout << "¿Tiene experiencia con mascotas? (1: Si, 0: No): "; cin >> xp_mascotas;
    }

    void mostrarDatosAdoptante() const {
        cout << "ID del adoptante: " << ID << endl;
        cout << "Nombre del adoptante: " << NomBrecomplet << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Experiencia con mascotas: " << (xp_mascotas ? "Si" : "No") << endl;
    }
};

int main() {
    int opcion;
    perro p1;
    adoptante a1;

    do {
        cout << "<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "<<<<            Menu de opciones        >>>>" << endl;
        cout << "<<<< 1. Ingresar datos del perro nuevo   >>>>" << endl;
        cout << "<<<< 2. Mostrar datos del perro nuevo    >>>>" << endl;
        cout << "<<<< 3. Ingresar datos del adoptante     >>>>" << endl;
        cout << "<<<< 4. Mostrar datos del adoptante      >>>>" << endl;
        cout << "<<<< 5. Salir                            >>>>" << endl;
        cout << "<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>" << endl;
        cout << "Seleccione una opcion (1-5): "; cin >> opcion;

        switch (opcion) {
            case 1:
                p1.ingresodatos();
                break;
            case 2:
                p1.infodog();
                break;
            case 3:
                a1.ingresoDatosAdoptante();
                break;
            case 4:
                a1.mostrarDatosAdoptante();
                break;
            case 5:
                cout << "Saliendo del menu de opciones" << endl;
                return 0;
            default:
                cout << "Ingrese una opcion que esta en el menu" << endl;
                break;
        }
    } while (opcion != 5);
    
    return 0;
}