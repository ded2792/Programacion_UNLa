/*
Escribir una función recursiva que calcule la potencia de un número como una serie de
multiplicaciones sucesivas.
*/
#include <stdio.h>

/* potencia_recursiva: no maneja exponentes negativos. */
long long potencia_recursiva(long long a, int b) {
    if (b < 0) return 0; /* no manejado */
    if (b == 0) return 1;
    return a * potencia_recursiva(a, b - 1);
}

int main(void) {
    long long a;
    int b;
    printf("Ingrese base (long long) y exponente (int >= 0): ");
    if (scanf("%lld %d", &a, &b) != 2) return 0;
    if (b < 0) { printf("Exponente debe ser >= 0\n"); return 0; }
    long long r = potencia_recursiva(a, b);
    printf("%lld ^ %d = %lld\n", a, b, r);
    return 0;
}
