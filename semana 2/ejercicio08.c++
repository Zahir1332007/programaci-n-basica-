#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, lado3, semi_perimetro, area;
    printf("Ingrese el primer lado del triángulo: ");
    scanf("%f", &lado1);
    printf("Ingrese el segundo lado del triángulo: ");
    scanf("%f", &lado2);
    printf("Ingrese el tercer lado del triángulo: ");
    scanf("%f", &lado3);
    semi_perimetro = (lado1 + lado2 + lado3) / 2;
    area = sqrt(semi_perimetro * (semi_perimetro - lado1) * (semi_perimetro - lado2) * (semi_perimetro - lado3));
    printf("El semi-perímetro del triángulo es: %.2f\n", semi_perimetro);
    printf("El área del triángulo es: %.2f\n", area);
    return 0;
}
