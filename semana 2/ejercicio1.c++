#include <stdio.h>
#include <math.h>

int main() {
    float area, perimetro, diagonal, lado;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    perimetro = 4 * lado;
    diagonal = lado * sqrt(2);
    printf("El área del cuadrado es: %f\n", area);
    printf("El perímetro del cuadrado es: %f\n", perimetro);
    printf("La diagonal del cuadrado es: %2f\n", diagonal);
    return 0;
}
