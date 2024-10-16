#include <iostream>
#include <string>

using namespace std;

// Definir una estructura para el alumno
struct Alumno {
    string nombre;
    int notas[3];
    string facultad;
};

int main() {
    // Crear una lista de 5 alumnos
    Alumno alumnos[5] = {
        {"Mariana Gómez", {85, 90, 78}, "Ingeniería"},
        {"Carlos Ramírez", {88, 79, 91}, "Medicina"},
        {"Ana Pérez", {92, 85, 80}, "Derecho"},
        {"Juan Torres", {75, 82, 88}, "Arquitectura"},
        {"Laura Martínez", {81, 89, 87}, "Ciencias"}
    };
    // Mostrar la información del segundo alumno (Carlos Ramírez)
    cout << "Segundo Alumno:\n";
    cout << "Nombre: " << alumnos[1].nombre << endl;
    cout << "Notas: " << alumnos[1].notas[0] << ", " << alumnos[1].notas[1] << ", " << alumnos[1].notas[2] << endl;
    cout << "Facultad: " << alumnos[1].facultad << endl;

    return 0;
}