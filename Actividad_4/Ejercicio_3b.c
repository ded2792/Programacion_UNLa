//Actividad 3 — problema 6) Devuelve el mayor elemento de un vector usando función

#include <stdio.h>
#include <stdlib.h>

/* max_vector: retorna el máximo de un vector de n elementos.
   Si n <= 0 retorna 0 (comportamiento definido). */
int max_vector(int vec[], int n) {
    if (n <= 0) return 0;
    int max = vec[0];
    for (int i = 1; i < n; i++) {
        if (vec[i] > max) max = vec[i];
    }
    return max;
}

int main(void) {
    int n;
    printf("Ingrese la cantidad de elementos: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int *v = malloc(sizeof(int) * n);
    if (!v) return 0;

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &v[i]);
    }

    int m = max_vector(v, n);
    printf("El mayor elemento del vector es: %d\n", m);

    free(v);
    return 0;
}
