/*
Escribir una funci�n esMultiploDe, que reciba dos enteros y devuelva true o false dependiendo
de si el primer n�mero es m�ltiplo del segundo.
*/
#include <stdio.h>
#include <stdbool.h>

/* esMultiploDe: true si a % b == 0. Si b==0 devuelve false (no est� definido). */
bool esMultiploDe(int a, int b) {
    if (b == 0) return false;
    return (a % b) == 0;
}

/* esPar: usa esMultiploDe para comprobar paridad */
bool esPar(int n) {
    return esMultiploDe(n, 2);
}

int main(void) {
    int a, b;
    printf("Ingrese a y b para comprobar si a es m�ltiplo de b: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;
    printf("%d es m�ltiplo de %d? %s\n", a, b, esMultiploDe(a,b) ? "SI" : "NO");
    printf("%d es par? %s\n", a, esPar(a) ? "SI" : "NO");
    return 0;
}
