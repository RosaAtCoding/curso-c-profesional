/*
Sección 3.3. - Bucles (for, while, do-while)

Objetivo: Repetir acciones sin escribir el mismo código muchas veces
*/

#include <stdio.h>

int main(void) {

    int i;

    printf("Bucle 'for' (1 a 5):\n");

    for (i = 1; i<= 5; i++) {
        printf("%d\n", i);
    }

    printf("\nBucle 'while' (cuenta regresiva 5 a 1):\n");

    i = 5;

    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }

    printf("\nBucle 'do-while' (se ejecuta al menos una vez):\n");

    i = 0;

    do {
        printf("%d\n", i);
        i++;
    } while(i < 1);

    return 0;
}
