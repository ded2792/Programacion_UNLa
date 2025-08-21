#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("*** Calculadora de potencias ***\r\n");
    int num1, num2, resultado, i;

    printf("Ingresar la base: ");
    scanf("%d", &num1);
    printf("Ingresar el exponente: ");
    scanf("%d", &num2);

    // Validacion mayores que 0 y calculo
    if ((num1 >= 0) && (num2 >= 0)) {
        resultado = 1;
        for(i = 1; i <= num2; i++){
            resultado = resultado * num1;  // multiplico la base tantas veces como diga el exponente
        }
        printf("%d^%d = %d", num1, num2, resultado);
    } else {
        printf("Error: los numeros ingresados deben ser mayores que cero.");
    }

    return 0;
}
