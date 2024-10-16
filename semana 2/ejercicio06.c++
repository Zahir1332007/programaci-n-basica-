#include <stdio.h>
#include <math.h>

int main() {
    double lado1, lado2, lado3, radio, area;
    printf("Ingresa el primer lado del triángulo inscrito: ");
    scanf("%lf", &lado1);
    printf("Ingresa el segundo lado del triángulo inscrito: ");
    scanf("%lf", &lado2);
    printf("Ingresa el tercer lado del triángulo inscrito: ");
    scanf("%lf", &lado3);
    printf("Ingresa el radio del círculo inscrito: ");
    scanf("%lf", &radio);
    int esTriangulo = (lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1);
    int radioValido = radio > 0;
    area = (esTriangulo && radioValido) ? (lado1 * lado2 * lado3) / (4 * radio) : 0;
    printf(esTriangulo && radioValido ? "El área del triángulo inscrito es: %.2f\n" : "Los lados ingresados no forman un triángulo válido.\n", area);

    return 0;
}
