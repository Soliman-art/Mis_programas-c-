#include <stdio.h>
#include <math.h>

int main() {
    float a1, b1, a2, b2, a3, b3, h1, h2, h3;
    printf("Ingrese los catetos del primer triángulo: ");
    scanf("%f %f", &a1, &b1);
    h1 = sqrt(a1 * a1 + b1 * b1);
    printf("La hipotenusa del primer triángulo es: %.2f\n", h1);
    
    printf("Ingrese los catetos del segundo triángulo: ");
    scanf("%f %f", &a2, &b2);
    h2 = sqrt(a2 * a2 + b2 * b2);
    printf("La hipotenusa del segundo triángulo es: %.2f\n", h2);
    
    printf("Ingrese los catetos del tercer triángulo: ");
    scanf("%f %f", &a3, &b3);
    h3 = sqrt(a3 * a3 + b3 * b3);
    printf("La hipotenusa del tercer triángulo es: %.2f\n", h3);
    
    return 0;
}
