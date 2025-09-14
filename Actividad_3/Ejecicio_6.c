#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que contenga un vector con 5 elementos,
pida el valor para cada elemento por teclado al usuario
y devuelva el mayor de los mismos.
*/

int main ()
{
    printf("*** El mayor elemento de un vector ***\n\r");

    int num, i, vector[5], mayor;

    printf("Escribir los valores a guardar en el vector: \n");

    // Primero pedimos el PRIMER número fuera del for
    scanf("%d", &num);
    vector[0] = num;

    // Inicializamos 'mayor' con este primer valor
    // Esto garantiza que 'mayor' siempre sea un valor real del vector
    mayor = num;

    // Ahora recorremos desde i = 1 para pedir los otros 4 valores restantes
    for (i = 1; i < 5; i++)
    {
        scanf("%d", &num);
        vector[i] = num;

        // Si el nuevo valor es mayor que el actual, lo actualizamos
        if (vector[i] > mayor)
        {
            mayor = vector[i];
        }
    }

    // Mostramos los valores ingresados
    printf("Los valores guardados en el vector son: \n{");
    for (i = 0; i < 5; i++)
    {
        printf("%d", vector[i]);
        if (i < 4) printf(", ");
    }
    printf("}\n");

    // Mostramos el mayor encontrado
    printf("El mayor de los elementos del vector es: %d\n", mayor);

    return 0;
}
