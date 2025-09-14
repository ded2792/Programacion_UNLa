#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    int resultado = 1;
    if(n > 1){
        resultado = n * factorial(n - 1);
    }
    return resultado;
}

int main() {
    int n = 5;
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}
