
#include <stdio.h>

/* division_restas: calcula cociente y resto por restas sucesivas.
   Si divisor == 0 coloca cociente = -1 como señal de error. */
void division_restas(int dividendo, int divisor, int *cociente, int *resto) {
    if (divisor == 0) {
        *cociente = -1;  /* señal de error */
        *resto = dividendo;
        return;
    }
    int q = 0;
    int r = dividendo;
    while (r >= divisor) {
        r -= divisor;
        q++;
    }
    *cociente = q;
    *resto = r;
}

int main(void) {
    int a, b;
    printf("Ingrese dividendo (>=0): ");
    if (scanf("%d", &a) != 1) return 0;
    printf("Ingrese divisor (>0): ");
    if (scanf("%d", &b) != 1) return 0;

    int q, r;
    division_restas(a, b, &q, &r);
    if (q == -1) {
        printf("Error: división por cero.\n");
    } else {
        printf("%d / %d -> Cociente = %d, Resto = %d\n", a, b, q, r);
    }
    return 0;
}
