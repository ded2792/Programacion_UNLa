/*Además, realice una función invertir que realice la inversión del caso anterior, utilizando la
función intercambiar.
*/

#include <stdio.h>

void intercambiar(int vec[], int i, int j) {
    int tmp = vec[i];
    vec[i] = vec[j];
    vec[j] = tmp;
}

/* invertir: invierte el vector usando intercambiar */
void invertir(int vec[], int longitud) {
    for (int i = 0; i < longitud / 2; i++) {
        intercambiar(vec, i, longitud - 1 - i);
    }
}

void mostrarVector(int vec[], int n) {
    printf("{");
    for (int k = 0; k < n; k++) {
        printf("%d", vec[k]);
        if (k+1 < n) printf(", ");
    }
    printf("}\n");
}

int main(void) {
    int vec[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(vec)/sizeof(vec[0]);

    printf("Vector inicial: ");
    mostrarVector(vec, n);

    invertir(vec, n);

    printf("Vector invertido: ");
    mostrarVector(vec, n);

    return 0;
}
