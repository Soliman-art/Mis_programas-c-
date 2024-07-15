#include <stdio.h>

int main() {
    float suma = 0, num, promedio;
    for (int i = 1; i <= 10; i++) {
        printf("Ingrese un número: ");
        scanf("%f", &num);
        suma += num;
    }
    promedio = suma / 10;
    printf("El promedio es: %.2f\n", promedio);
    return 0;
}
