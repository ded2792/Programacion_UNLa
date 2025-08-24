#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("*** Calculadora de factorial ***\n");
    int num1, i, resultado;

    printf("Ingrese un numero entero mayor o igual que cero: ");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        resultado = 1;                 // acumulador
        for (i = 2; i <= num1; i++) {  // multiplicar desde 2 hasta num1
            resultado = resultado * i;
        }
        printf("El resultado es: %d! = %d\n", num1, resultado);
    }
    else if (num1 == 0)
    {
        resultado = 1;
        printf("El resultado es: 0! = %d\n", resultado);
    }
    else
    {
        printf("Error: el factorial no esta definido para numeros menores que cero.\n");
    }

    return 0;
}
