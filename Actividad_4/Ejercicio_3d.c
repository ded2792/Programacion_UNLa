//Pide nombre y apellido y muestra apellido, nombre.

#include <stdio.h>

/* format_apellido_nombre: imprime "apellido, nombre" */
void format_apellido_nombre(const char nombre[], const char apellido[]) {
    printf("%s, %s\n", apellido, nombre);
}

int main(void) {
    char nombre[100], apellido[100];
    printf("Ingrese nombre: ");
    getchar();
    if (!fgets(nombre, sizeof(nombre), stdin)) return 0;
    printf("Ingrese apellido: ");
    if (!fgets(apellido, sizeof(apellido), stdin)) return 0;

    /* quitar newline final si existe */
    int i = 0;
    while (nombre[i] != '\0') { if (nombre[i] == '\n') { nombre[i] = '\0'; break; } i++; }
    i = 0;
    while (apellido[i] != '\0') { if (apellido[i] == '\n') { apellido[i] = '\0'; break; } i++; }

    printf("Formato: ");
    format_apellido_nombre(nombre, apellido);
    return 0;
}
