#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char op;
    double a, b, r;

    printf("Ingrese la operacion (+,-,*,/): ");
    scanf(" %c", &op);           // nota el espacio antes de %c

    printf("Ingrese el primer operando: ");
    scanf("%lf", &a);

    printf("Ingrese el segundo operando: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            r = a + b;
            printf("%.2f + %.2f = %.2f\n", a, b, r);
            break;

        case '-':
            r = a - b;
            printf("%.2f - %.2f = %.2f\n", a, b, r);
            break;

        case '*':
            r = a * b;
            printf("%.2f * %.2f = %.2f\n", a, b, r);
            break;

        case '/':
            if (b == 0) {
                printf("Error: division por cero.\n");
            } else {
                r = a / b;
                printf("%.2f / %.2f = %.2f\n", a, b, r);
            }
            break;

        default:
            printf("Operacion invalida: '%c'\n", op);
    }

    return 0;
}
