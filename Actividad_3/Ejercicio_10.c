/*
Escribir un programa C que pida al usuario su nombre y su apellido y los muestre por pantalla
con el formato apellido , nombre. Si el usuario ingres� nombre=Juan y apellido=Fern�ndez, el
programa devolver� el texto �Fern�ndez, Juan�
*/

#include <stdio.h>

int main(void) {
    char nombre[30];
    char apellido[30];

    printf("Ingrese su nombre: ");
    scanf("%29s", nombre);   // lee hasta 29 caracteres + '\0'

    printf("Ingrese su apellido: ");
    scanf("%29s", apellido);

    printf("\n%s, %s\n", apellido, nombre);

    return 0;
}
