/*
Escribir una funci�n recursiva que calcule el producto de un n�mero por otro como una serie de
sumas sucesivas.
*/

#include <stdio.h>

// Funci�n recursiva para multiplicar a * b usando sumas sucesivas
int multiplicar(int a, int b) {
    if (b == 0)           // Caso base: multiplicar por 0
        return 0;
    if (b > 0)            // Caso recursivo: suma a, b veces
        return a + multiplicar(a, b - 1);
    // Para manejar n�meros negativos
    return -multiplicar(a, -b);
}

int main() {
    int num1, num2;

    printf("Ingrese el primer n�mero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo n�mero: ");
    scanf("%d", &num2);

    printf("%d * %d = %d\n", num1, num2, multiplicar(num1, num2));

    return 0;
}
