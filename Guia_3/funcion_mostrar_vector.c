#include <stdio.h>
#include <stdlib.h>

void mostrarVector(int vector[], int longitud) {
    int i;
    for(i=0; i<longitud; i++){
        printf("Vector[%d] = %d\n", i, vector[i]);
    }
}

int main() {
    int vec[] = {1,2,3,4,5};
    int i, temporal;

    printf("Vector Inicial:\n");
    mostrarVector(vec, 5);

    // Invertir vector
    for(i=0; i<2; i++){
        temporal = vec[i];
        vec[i] = vec[4-i];
        vec[4-i] = temporal;
    }

    printf("\nVector Invertido:\n");
    mostrarVector(vec, 5);

    return 0;
}
