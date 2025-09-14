/*Escribir un programa C que 6 partiendo de una representación binaria de un número
almacenada en un vector de longitud 8, lo devuelva como entero en notación decimal.
Para pasar de binario a decimal se deberà multiplicar cada posiciòn binaria por la potencia de dos
correspondiente, por ejemplo: 11100= 1*2^4 + 1*2^3 + 1*2^2 + 0*2^1 + 0*2^0 = 28
Hacerlo para los vectores {0,1,1,1,0,0,0,1}, {1,0,1,0,1,0,0,1} y {0,0,0,1,0,0,0,1}
*/

#include <stdio.h>
#include <math.h> // para pow()

// Convierte un número binario de 8 bits almacenado en un vector a decimal
int binarioADecimal(int binario[8]){
    int decimal = 0;
    for(int i = 0; i < 8; i++){
        // la posición i corresponde al exponente (7 - i)
        decimal += binario[i] * (int)pow(2, 7 - i);
    }
    return decimal;
}

int main(void){
    int v1[8] = {0,1,1,1,0,0,0,1};
    int v2[8] = {1,0,1,0,1,0,0,1};
    int v3[8] = {0,0,0,1,0,0,0,1};

    printf("Decimal de v1 = %d\n", binarioADecimal(v1));
    printf("Decimal de v2 = %d\n", binarioADecimal(v2));
    printf("Decimal de v3 = %d\n", binarioADecimal(v3));

    return 0;
}
