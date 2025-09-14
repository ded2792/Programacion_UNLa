/*Escribir un programa C que pida un string al usuario y lo muestre invertido *usando lo que
sabemos hasta ahora*. Si el usuario ingresó “prueba” el programa deberá mostrar “abeurp” por
pantalla.
*/

#include <stdio.h>

int main(void) {
    char palabra[50];   // guardamos hasta 49 caracteres + '\0'
    int longitud = 0;
    int i;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);   // lee la palabra (sin espacios)

    // calcular longitud "a mano"
    while (palabra[longitud] != '\0') {
        longitud++;
    }

    // mostrar invertida
    printf("Palabra invertida: ");
    for (i = longitud - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }
    printf("\n");

    return 0;
}
