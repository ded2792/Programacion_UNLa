/*
Escribir un programa C que pida dos n�meros al usuario y calcule la divisi�n de ambos por
medio del m�todo de restas sucesivas. Para ello, restamos el divisor del dividendo sucesivamente
hasta que dividendo<divisor. Cuando se alcance esta condici�n, la cantidad de restas efectuadas
ser� el cociente y el lo que queda del dividendo ser� el resto de la divisi�n.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int dividendo, divisor;
    int cociente = 0;
    int resto;

    printf("*** Division por restas sucesivas ***\n");
    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);
    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: division por cero.\n");
        return 1;
    }

    if (dividendo < 0 || divisor < 0) {
        printf("Para este ejercicio use numeros enteros no negativos.\n");
        return 1;
    }

    // Resta sucesiva: mientras alcance para restar una vez m�s, seguimos
    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }

    resto = dividendo;

    printf("Cociente = %d, Resto = %d\n", cociente, resto);
    return 0;
}
