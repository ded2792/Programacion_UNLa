/*
En el ejemplo de la guía 3 (Funciones) se invierte un vector, para lo cual se intercambian los
valores de distintas posiciones del mismo. Escriba una función intercambiar, que reciba al vector y
los índices de las dos posiciones y realice el intercambio. Utilícela en el código original.
*/

#include <stdio.h>

/* intercambiar: intercambia vec[i] y vec[j] */
void intercambiar(int vec[], int i, int j) {
    int tmp = vec[i];
    vec[i] = vec[j];
    vec[j] = tmp;
}

/* mostrarVector: imprime vector con formato {a, b, c} */
void mostrarVector(int vec[], int n) {
    printf("{");
    for (int k = 0; k < n; k++) {
        printf("%d", vec[k]);
        if (k+1 < n) printf(", ");
    }
    printf("}\n");
}

int main(void) {
    int vec[] = {10, 20, 30, 40, 50};
    int n = sizeof(vec)/sizeof(vec[0]);

    printf("Vector inicial: ");
    mostrarVector(vec, n);

    /* Intercambiamos posición 1 y 4 (0-index) */
    printf("Intercambiando vec[1] y vec[4]...\n");
    intercambiar(vec, 1, 4);

    printf("Vector resultado: ");
    mostrarVector(vec, n);

    return 0;
}
