/*
Escribir un programa C que sume dos matrices de 3x3. La matriz resultante es también una
matriz de 3x3 en la que cada elemento es la suma de los elementos correspondientes de las otras
dos matrices. Así, el elemento que va en la fila 0, columna 0 es la suma del elemento de la fila 0,
columna 0 de la primera matriz con el de la fila 0, columna 0 de la segunda y así sucesivamente.
En notación matemática:
Si,j = Ai,j+Bi,j
*/

#include <stdio.h>

int main(void) {
    int matrizUno[3][3], matrizDos[3][3], matrizSuma[3][3];
    int fila, columna;

    // Cargar matrizUno
    printf("Ingrese los elementos de la primera matriz (3x3):\n");
    for (fila = 0; fila < 3; fila++) {
        for (columna = 0; columna < 3; columna++) {
            printf("matrizUno[%d][%d]: ", fila, columna);
            scanf("%d", &matrizUno[fila][columna]);
        }
    }

    // Cargar matrizDos
    printf("\nIngrese los elementos de la segunda matriz (3x3):\n");
    for (fila = 0; fila < 3; fila++) {
        for (columna = 0; columna < 3; columna++) {
            printf("matrizDos[%d][%d]: ", fila, columna);
            scanf("%d", &matrizDos[fila][columna]);
        }
    }

    // Calcular la suma: matrizSuma = matrizUno + matrizDos
    for (fila = 0; fila < 3; fila++) {
        for (columna = 0; columna < 3; columna++) {
            matrizSuma[fila][columna] = matrizUno[fila][columna] + matrizDos[fila][columna];
        }
    }

    // Mostrar la matriz resultante
    printf("\nMatriz resultado (suma de las dos):\n");
    for (fila = 0; fila < 3; fila++) {
        for (columna = 0; columna < 3; columna++) {
            printf("%4d", matrizSuma[fila][columna]);
        }
        printf("\n");
    }

    return 0;
}
