/*
Sabiendo que los strings en realidad son arrays de char terminados en 0 (ver guía 2), escribir y
probar las siguientes funciones sin utilizar las funciones definidas en string.h:
Devolver la longitud de un string.
Extraer los primeros n caracteres de un string.
Devolver n caracteres comenzando desde la posición m.
Invertir un string.
*/

#include <stdio.h>

/* strlen_custom: longitud del string sin contar '\0' */
int strlen_custom(const char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

/* first_n_chars: copia los primeros n chars de s en dest (dest debe tener n+1) */
void first_n_chars(const char s[], char dest[], int n) {
    int i;
    for (i = 0; i < n && s[i] != '\0'; i++) dest[i] = s[i];
    dest[i] = '\0';
}

/* substr_from_m_n: copia n caracteres desde posición m (0-based) en dest */
void substr_from_m_n(const char s[], char dest[], int m, int n) {
    int len = strlen_custom(s);
    if (m >= len) { dest[0] = '\0'; return; }
    int i;
    for (i = 0; i < n && s[m+i] != '\0'; i++) dest[i] = s[m+i];
    dest[i] = '\0';
}

/* reverse_string_inplace: invierte string en su buffer */
void reverse_string_inplace(char s[]) {
    int i = 0, j = strlen_custom(s) - 1;
    while (i < j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++; j--;
    }
}

/* demostración de uso */
int main(void) {
    char s[256] = "prueba_de_cadena";
    char tmp[256];

    printf("Cadena original: %s\n", s);
    printf("strlen_custom = %d\n", strlen_custom(s));

    first_n_chars(s, tmp, 6);
    printf("first_n_chars(6): '%s'\n", tmp);

    substr_from_m_n(s, tmp, 7, 5); /* desde pos 7, 5 chars */
    printf("substr_from_m_n(m=7,n=5): '%s'\n", tmp);

    reverse_string_inplace(s);
    printf("Cadena invertida: %s\n", s);

    return 0;
}
