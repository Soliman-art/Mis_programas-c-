#include <stdio.h>

int main() {
    int respuesta;
    printf("Responda la siguiente pregunta con verdadero (1) o falso (0): ");
    scanf("%d", &respuesta);
    if (respuesta == 1) {
        printf("Su respuesta es verdadera.\n");
    } else if (respuesta == 0) {
        printf("Su respuesta es falsa.\n");
    } else {
        printf("Respuesta no válida.\n");
    }
    return 0;
}
