#include <stdio.h>

int main() {
    int n;
    float suma = 0, num, promedio;
    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Ingrese un número: ");
        scanf("%f", &num);
        suma += num;
    }
    promedio = suma / n;
    printf("El promedio es: %.2f\n", promedio);
    return 0;
}
