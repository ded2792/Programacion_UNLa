#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    int menor, mayor, suma = 0;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if(num1 <= 0 || num2 <= 0) {
        printf("Error: los numeros ingresados deben ser mayores que cero.\n");
        return 0;
    }

    if(num1 < num2) {
        menor = num1;
        mayor = num2;
    } else {
        menor = num2;
        mayor = num1;
    }

    for(int i = menor; i <= mayor; i++) {
        if(i % 2 != 0) {
            suma += i;
        }
    }

    printf("La suma de los impares entre %d y %d es %d\n", menor, mayor, suma);

    return 0;
}
