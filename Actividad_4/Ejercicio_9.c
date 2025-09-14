/*
Escribir una función recursiva que calcule el producto de un número por otro como una serie de
sumas sucesivas.
*/

#include <stdio.h>

// Función recursiva para multiplicar a * b usando sumas sucesivas
int multiplicar(int a, int b) {
    if (b == 0)           // Caso base: multiplicar por 0
        return 0;
    if (b > 0)            // Caso recursivo: suma a, b veces
        return a + multiplicar(a, b - 1);
    // Para manejar números negativos
    return -multiplicar(a, -b);
}

int main() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("%d * %d = %d\n", num1, num2, multiplicar(num1, num2));

    return 0;
}
