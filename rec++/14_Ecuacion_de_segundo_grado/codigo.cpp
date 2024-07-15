#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminante, raiz1, raiz2;
    printf("Ingrese el coeficiente a: ");
    scanf("%f", &a);
    printf("Ingrese el coeficiente b: ");
    scanf("%f", &b);
    printf("Ingrese el coeficiente c: ");
    scanf("%f", &c);
    discriminante = b*b - 4*a*c;
    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2*a);
        raiz2 = (-b - sqrt(discriminante)) / (2*a);
        printf("Las raíces son reales y diferentes: %.2f y %.2f\n", raiz1, raiz2);
    } else if (discriminante == 0) {
        raiz1 = -b / (2*a);
        printf("Las raíces son reales e iguales: %.2f\n", raiz1);
    } else {
        printf("Las raíces son complejas y diferentes.\n");
    }
    return 0;
}
