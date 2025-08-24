/*
Escriba un programa C que cuente de 1 a 10 y cuya salida tenga la forma:
1
2
3
4
5
6
7
8
9
10
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
printf("*** Secuencia de numeros ***\n");

int i;
for (i = 1; i < 11; i++){
    printf("%d\n", i);
}
return 0;
}
