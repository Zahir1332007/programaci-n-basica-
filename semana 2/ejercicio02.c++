#include <stdio.h>
#include <math.h>
int main() {
    float base, altura, area, perimetro, diagonal;
    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);
    printf("El área del rectángulo es: %.2f\n", area);
    printf("El perímetro del rectángulo es: %.2f\n", perimetro);
    printf("La diagonal del rectángulo es: %.2f\n", diagonal);
    return 0;
}