#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("*** Sucesion de Fibonacci ***\n");
    int n, i;
    int fib0 = 0, fib1 = 1, fib;

    printf("Ingrese un numero entero mayor o igual que cero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: la sucesion de Fibonacci no esta definida para numeros menores que cero.\n");
    } else if (n == 0) {
        printf("fib(0) = 0\n");
    } else if (n == 1) {
        printf("fib(1) = 1\n");
    } else {
        // calculo iterativo
        for (i = 2; i <= n; i++) {
            fib = fib0 + fib1;
            fib0 = fib1;
            fib1 = fib;
        }
        printf("fib(%d) = %d\n", n, fib1);
    }

    return 0;
}
