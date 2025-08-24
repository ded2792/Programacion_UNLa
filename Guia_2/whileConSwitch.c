#include <stdio.h>
#include <stdlib.h>

static void esperar_enter(void) {
    int c;
    // 1) vaciar basura que pudo quedar en el buffer (por ejemplo, el \n del scanf)
    while ((c = getchar()) != '\n' && c != EOF) { }
    // 2) ahora sí, esperar que el usuario presione Enter
    getchar();
}

int main(void) {
    int seleccion;   // usar int para opciones del menú
    do {
        // Limpiar pantalla (ajustar según SO)
        system("clear");  // en Windows usar: system("cls");

        printf("\n\n");
        printf("Menú principal:\n");
        printf("---------------\n\n");
        printf("1 - Opción 1\n");
        printf("2 - Opción 2\n");
        printf("0 - Salir\n\n");
        printf("Seleccione una opción: ");

        if (scanf("%d", &seleccion) != 1) {
            // Entrada no numérica: limpiar y marcar opción inválida
            seleccion = -1;
        }

        switch (seleccion) {
            case 1:
                system("clear");
                printf("Ha elegido la opción 1.\n");
                break;
            case 2:
                system("clear");
                printf("Ha elegido la opción 2.\n");
                break;
            case 0:
                // salir
                break;
            default:
                system("clear");
                printf("La opción %d no existe en el menú.\n", seleccion);
                break;
        }

        if (seleccion != 0) {
            printf("Presione Enter para continuar.");
            esperar_enter();
        }

    } while (seleccion != 0);

    system("clear");
    printf("Gracias! ¡Vuelva pronto!\n");
    return 0;
}
