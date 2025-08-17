/*
Escriba un programa C que, dados dos números enteros ingresados por el usuario, realice la
suma de los mismos si el primero de los mismos es impar, y la resta en caso contrario. Sabemos
que un número es par cuando el resto de la división del mismo por 2 es 0. Por ejemplo, si el
usuario ingresara los números 3 y 5 la salida del programa debería ser:
3 es impar: 3 + 5 = 8
Y si los números fueran 16 y 7:
16 es par: 16 - 7 = 9
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
printf("*** Suma o Resta segun par/impar ***\n");

int num1, num2, resultado;
printf("Ingresa el primer numero: ");
scanf("%d", &num1);
printf("Ingresar el segundo numero: ");
scanf("%i", &num2);

if (num1 % 2 != 0){
    resultado = num1 + num2;
    printf("%d es impar: %d + %d = %d\n", num1, num1, num2, resultado);
} else {
    resultado = num1 - num2;
    printf("%d es par: %d - %d = %d\n", num1, num1, num2, resultado);
}
}
