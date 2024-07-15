#include <stdio.h>

int main() {
    int opcion;
    float base, altura, radio, area;
    printf("Seleccione una opción (1: Triángulo, 2: Círculo): ");
    scanf("%d", &opcion);
    if (opcion == 1) {
        printf("Ingrese la base y la altura del triángulo: ");
        scanf("%f %f", &base, &altura);
        area = (base * altura) / 2;
        printf("El área del triángulo es: %.2f\n", area);
    } else if (opcion == 2) {
        printf("Ingrese el radio del círculo: ");
        scanf("%f", &radio);
        area = 3.14159 * radio * radio;
        printf("El área del círculo es: %.2f\n", area);
    } else {
        printf("Opción no válida.\n");
    }
    return 0;
}
