/* Actividad 3 — problema 8) Invertir string usando función (sin string.h para práctica*/

#include <stdio.h>

/* strlen_custom: obtiene longitud de string sin usar string.h */
int strlen_custom(const char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

/* reverse_string_inplace: invierte el string s en el mismo buffer */
void reverse_string_inplace(char s[]) {
    int i = 0;
    int j = strlen_custom(s) - 1;
    while (i < j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++; j--;
    }
}

int main(void) {
    char s[256];
    printf("Ingrese una cadena (max 255 chars): ");
    getchar(); /* limpiar posible newline */
    if (!fgets(s, sizeof(s), stdin)) return 0;
    /* quitar newline final si existe */
    int len = strlen_custom(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';

    printf("Original: '%s'\n", s);
    reverse_string_inplace(s);
    printf("Invertida: '%s'\n", s);
    return 0;
}
