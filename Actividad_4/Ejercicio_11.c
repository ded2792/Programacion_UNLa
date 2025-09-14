/*
Reescribir el problema 5 (fibonacci) como una función recursiva.
*/
#include <stdio.h>

/* fibonacci_recursiva: definición clásica. */
long long fibonacci_recursiva(int n) {
    if (n < 0) return -1; /* error */
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_recursiva(n - 1) + fibonacci_recursiva(n - 2);
}

int main(void) {
    int n;
    printf("Ingrese n para calcular fib(n) recursivo (n >= 0): ");
    if (scanf("%d", &n) != 1) return 0;
    long long r = fibonacci_recursiva(n);
    if (r < 0) printf("n debe ser >= 0\n");
    else printf("fib(%d) = %lld\n", n, r);
    return 0;
}
