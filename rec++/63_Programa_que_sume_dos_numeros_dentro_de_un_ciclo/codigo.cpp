#include <stdio.h>

int main() {
    int suma, num1, num2;
    for (int i = 1; i <= 5; i++) {
        printf("Ingrese dos números: ");
        scanf("%d %d", &num1, &num2);
        suma = num1 + num2;
        printf("La suma es: %d\n", suma);
    }
    return 0;
}
