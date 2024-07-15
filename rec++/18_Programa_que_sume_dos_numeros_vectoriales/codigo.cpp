#include <stdio.h>

int main() {
    int v1x, v1y, v2x, v2y, sumax, sumay;
    printf("Ingrese la componente x del primer vector: ");
    scanf("%d", &v1x);
    printf("Ingrese la componente y del primer vector: ");
    scanf("%d", &v1y);
    printf("Ingrese la componente x del segundo vector: ");
    scanf("%d", &v2x);
    printf("Ingrese la componente y del segundo vector: ");
    scanf("%d", &v2y);
    sumax = v1x + v2x;
    sumay = v1y + v2y;
    printf("La suma de los vectores es: (%d, %d)\n", sumax, sumay);
    return 0;
}
