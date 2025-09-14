// Escribir una función que, dado un número n, devuelva el número de Fibonacci correspondiente.

#include <stdio.h>

/* fibonacci_iterativa: retorna fib(n) para n >= 0, -1 si n < 0 */
long long fibonacci_iterativa(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    long long a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(void) {
    int n;
    printf("Ingrese n para calcular fib(n): ");
    if (scanf("%d", &n) != 1) return 0;
    long long f = fibonacci_iterativa(n);
    if (f < 0) printf("n debe ser >= 0\n");
    else printf("fib(%d) = %lld\n", n, f);
    return 0;
}
