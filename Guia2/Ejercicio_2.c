#include <stdio.h>
#include <stdlib.h>

int main() {
    int dividendo, divisor;

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);

    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    if(dividendo <= 0 || divisor <= 0) {
        printf("Error: los numeros ingresados deben ser mayores que cero.\n");
    } else {
        int cociente = dividendo / divisor;
        int resto = dividendo % divisor;
        printf("%d/%d: Cociente=%d y Resto=%d\n", dividendo, divisor, cociente, resto);
    }

    return 0;
}
