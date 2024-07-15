#include <stdio.h>

int main() {
    int opcion, a, b;
    printf("Seleccione una opción (1: Suma, 2: Resta): ");
    scanf("%d", &opcion);
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    if (opcion == 1) {
        printf("La suma es: %d\n", a + b);
    } else if (opcion == 2) {
        printf("La resta es: %d\n", a - b);
    } else {
        printf("Opción no válida.\n");
    }
    return 0;
}
