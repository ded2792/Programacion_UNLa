/*
Escribir un programa C que a partir de un vector con 10 elementos ordenado
{0,1,2,3,4,5,6,7,8,9}, lo invierta y lo muestre por pantalla con formato {9,8,7,6,5,4,3,2,1,0}.
*/

#include <stdio.h>

int main() {
    int array[10];
    int i, aux;

    // Cargar vector
    for (i = 0; i < 10; i++) {
        array[i] = i;
    }

    // Mostrar vector original
    printf("Vector ordenado de menor a mayor:\n{ ");
    for (i = 0; i < 10; i++) {
        printf("%d", array[i]);
        if (i < 9) printf(", ");
    }
    printf(" }\n");

    // Invertir en memoria
    for (i = 0; i < 10 / 2; i++) {
        aux = array[i];
        array[i] = array[9 - i];
        array[9 - i] = aux;
    }

    // Mostrar vector invertido
    printf("Vector invertido en memoria:\n{ ");
    for (i = 0; i < 10; i++) {
        printf("%d", array[i]);
        if (i < 9) printf(", ");
    }
    printf(" }\n");

    return 0;
}
