#include <stdio.h>

int main() {
    int suma = 0, num;
    for (int i = 1; i <= 5; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &num);
        suma += num;
    }
    printf("La suma es: %d\n", suma);
    return 0;
}
