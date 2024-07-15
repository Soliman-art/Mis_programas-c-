#include <stdio.h>

int main() {
    int opcion;
    printf("Seleccione una opción (1: Hola, 2: Adiós): ");
    scanf("%d", &opcion);
    switch (opcion) {
        case 1:
            printf("Hola\n");
            break;
        case 2:
            printf("Adiós\n");
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }
    return 0;
}
