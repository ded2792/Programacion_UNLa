//  Escriba un programa C que cuente de 10 a 1.
#include <stdio.h>
int main(){
printf("*** Cuenta regresiva ***\n");

int i;

for (i = 10; i > 0; i--){
    printf("%d ", i);
}
return 0;
}
