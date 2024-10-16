#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, base, altura, area, perimetro;

    printf("Ingresa el primer lado del triángulo: ");
    scanf("%f", &lado1);
    printf("Ingresa el segundo lado del triángulo: ");
    scanf("%f", &lado2);
    printf("Ingresa la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingresa la altura del triángulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;
    perimetro = lado1 + lado2 + base;

    printf("El área del triángulo es: %.2f\n", area);
    printf("El perímetro del triángulo es: %.2f\n", perimetro);

    return 0;
}