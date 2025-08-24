#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
bool a = true;
bool b= false;
bool c= true;
if(a && b)
printf("a && b es verdadero");
else
printf("a && b es falso");
printf("\n");
if((a && c) || b)
printf("(a && c) || b es verdadero");
else
printf("(a && c) || b es falso");

/*
Salida esperada
primer if "a && b es falso"
segundo if "(a && c) || b es verdadero"
*/
return 0;
}

