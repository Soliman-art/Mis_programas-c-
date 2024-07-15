#include <stdio.h>

int main() {
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("El mayor es: %d\n", num1);
    } else {
        printf("El mayor es: %d\n", num2);
    }
    return 0;
}
