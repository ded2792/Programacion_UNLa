/*
Escriba un programa C para que , dados dos números que el usuario ingresa por teclado,
imprima la suma, la resta, la multiplicación y la división de los mismos.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("*** Calculadora ***\n");

    int num1, num2;

    printf("Ingresar el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresar el segundo numero: ");
    scanf("%i", &num2);

    // operaciones
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    int division = num1 / num2;

    // salida
    printf("%d + %d = %d\n", num1, num2, suma);
    printf("%d - %d = %d\n", num1, num2, resta);
    printf("%d * %d = %d\n", num1, num2, multiplicacion);
    printf("%d / %d = %d\n", num1, num2, division);

    return 0;
}
