/*
Escriba un programa C que muestre todos los n�meros pares entre dos n�meros ingresados
por el usuario. Por ejemplo, si el usuario ingresa 12 y 20, e programa deber� dar una salida como:
12 14 16 18 20
*/
#include <stdio.h>
int main(){
printf("*** Imprimir n�mero pares en un rango ***\n");

int num1, num2;
printf("Ingresar el primer numero: ");
scanf("%d", &num1);
printf("Ingresar el segundo numero: ");
scanf("%i", &num2);
int i;

for(i = num1; i <= num2; i++){
    if(i % 2 == 0)
        printf("%d ", i);
}
return 0;
}
