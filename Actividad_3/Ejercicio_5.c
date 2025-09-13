/*
Escribir un programa C que contenga un vector con 5 elementos, pida el valor para cada
elemento por teclado al usuario y devuelva la media de los valores del vector. La media se calcula
como la suma de los valores de los elementos del vector dividida por la cantidad de elementos.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
printf("*** Calculo de la media de un vector con valores ingresados por el ususario ***\n\r");
int num, i, vector[5];
int suma = 0;
double media = 0;

printf("Escribir los valores a guardar en el vector: \n");
for (i=0; i<5; i++){
    scanf("%d", &num);
    vector[i]= num;
    suma = suma + vector[i];
}
printf("Los valores guardados en el vector son: \n{");
for (i = 0; i <5 ;i++){
    printf("%d", vector[i]);
    if (i < 4) printf(", ");
}
printf("}\n");

media = (double) suma / 5;
printf("La media del vector es: %.2f\n", media);

return 0;
}
