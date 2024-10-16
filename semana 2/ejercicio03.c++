#include <stdio.h>
#include <math.h>

int main() {
    float diagonal_menor, diagonal_mayor, area, lado, perimetro;
    printf("Ingrese la diagonal mayor: ");
    scanf("%f", &diagonal_mayor);
    printf("Ingrese la diagonal menor: ");
    scanf("%f", &diagonal_menor);
    area = (diagonal_mayor * diagonal_menor) / 2;
    lado = sqrt((diagonal_mayor / 2 * diagonal_mayor / 2) + (diagonal_menor / 2 * diagonal_menor / 2));
    perimetro = 4 * lado;
    printf("El área del rombo es: %.2f\n", area);
    printf("El lado del rombo es: %.2f\n", lado);
    printf("El perímetro del rombo es: %.2f\n", perimetro);
    return 0;
}
