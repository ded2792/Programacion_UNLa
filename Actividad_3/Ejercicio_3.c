#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numAdivinar, numJugador2;
    int intentos, contador = 0;

    printf("*** Adivinar el numero ***\n");

    // Jugador 1 ingresa el número y la cantidad de intentos
    printf("Jugador 1.\n");
    printf("Ingresar el numero a adivinar (1-100): ");
    scanf("%d", &numAdivinar);
    printf("Cuantos intentos va a tener el jugador 2? ");
    scanf("%d", &intentos);

    // Jugador 2 intenta adivinar
    while (contador < intentos && numJugador2 != numAdivinar) {
        printf("\nJugador 2, cual es el numero? ");
        scanf("%d", &numJugador2);
        contador++;

        if (numAdivinar == numJugador2) {
            printf("¡Acertaste! El numero era: %d\n", numAdivinar);
        } else {
            printf("No acertaste. Te quedan %d intentos\n", intentos - contador);
        }
    }

    // Si se terminaron los intentos y no adivinó
    if (numAdivinar != numJugador2) {
        printf("\nSe acabaron los intentos. El numero era: %d\n", numAdivinar);
    }

    return 0;
}
