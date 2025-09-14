// Escribir una función que dado un número, devuelva el factorial del mismo

#include <stdio.h>

/* factorial: cálculo iterativo, devuelve -1 si n < 0 */
long long factorial(int n) {
    if (n < 0) return -1;
    long long r = 1;
    for (int i = 2; i <= n; i++) r *= i;
    return r;
}

int main(void) {
    int n;
    printf("Ingrese n para calcular n! (n >= 0): ");
    if (scanf("%d", &n) != 1) return 0;
    long long res = factorial(n);
    if (res < 0) printf("Error: n debe ser >= 0\n");
    else printf("%d! = %lld\n", n, res);
    return 0;
}
