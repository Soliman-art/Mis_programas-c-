#include <stdio.h>

int main() {
    char nombre[50], direccion[100], telefono[20];
    int edad;
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese su dirección: ");
    scanf("%s", direccion);
    printf("Ingrese su teléfono: ");
    scanf("%s", telefono);
    printf("Datos personales:\n");
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Dirección: %s\n", direccion);
    printf("Teléfono: %s\n", telefono);
    return 0;
}
