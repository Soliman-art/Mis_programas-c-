#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d es mayor que %d\n", a, b);
    } else {
        printf("%d no es mayor que %d\n", a, b);
    }
    return 0;
}
