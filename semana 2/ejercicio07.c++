#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, lado3, radio, semi_perimetro, area;

    printf("Ingrese el primer lado del triángulo circunscrito: ");
    scanf("%f", &lado1);
    printf("Ingrese el segundo lado del triángulo circunscrito: ");
    scanf("%f", &lado2);
    printf("Ingrese el tercer lado del triángulo circunscrito: ");
    scanf("%f", &lado3);
    printf("Ingrese el radio del círculo circunscrito: ");
    scanf("%f", &radio);
    semi_perimetro = (lado1 + lado2 + lado3) / 2;
    area = radio * semi_perimetro;
    printf("El semi-perímetro del triángulo circunscrito es: %.2f\n", semi_perimetro);
    printf("El área del triángulo circunscrito es: %.2f\n", area);

    return 0;
}