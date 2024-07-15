#include <stdio.h>

int main() {
    int opcion;
    printf("Seleccione una opción (1: Hola, 2: Adiós): ");
    scanf("%d", &opcion);
    if (opcion == 1) {
        printf("Hola\n");
    } else if (opcion == 2) {
        printf("Adiós\n");
    } else {
        printf("Opción no válida.\n");
    }
    return 0;
}
