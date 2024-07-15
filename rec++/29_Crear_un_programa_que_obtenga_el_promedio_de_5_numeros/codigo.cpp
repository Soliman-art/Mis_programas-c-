#include <stdio.h>

int main() {
    float num1, num2, num3, num4, num5, promedio;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%f", &num3);
    printf("Ingrese el cuarto número: ");
    scanf("%f", &num4);
    printf("Ingrese el quinto número: ");
    scanf("%f", &num5);
    promedio = (num1 + num2 + num3 + num4 + num5) / 5;
    printf("El promedio es: %.2f\n", promedio);
    return 0;
}
