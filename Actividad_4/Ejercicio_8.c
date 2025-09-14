/*
Escribir una función llamada esPar, que reciba un entero y devuelva true o false dependiendo
de si el número recibido es par o no, empleando la función esMultiploDe
*/

#include <stdio.h>

/* producto_recursivo: asume a,b >= 0. Si b == 0 => 0.
   Nota: para b grande puede causar recursión profunda. */
long long producto_recursivo(long long a, long long b) {
    if (b < 0 || a < 0) return -1; /* señal de no soportado (sencillo) */
    if (b == 0) return 0;
    if (b == 1) return a;
    return a + producto_recursivo(a, b - 1);
}

int main(void) {
    long long a, b;
    printf("Ingrese a y b (enteros no-negativos) para calcular a*b por sumas recursivas: ");
    if (scanf("%lld %lld", &a, &b) != 2) return 0;
    long long r = producto_recursivo(a, b);
    if (r < 0) printf("Entrada no soportada (valores negativos).\n");
    else printf("%lld * %lld = %lld\n", a, b, r);
    return 0;
}
