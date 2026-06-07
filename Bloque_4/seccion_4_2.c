/*
Sección 4.2. - Alcance de Variables

Objetivo: Diferenciar variales locales y globales y entender su tiempo de vida.
*/

#include <stdio.h>

// Variable global: existe durante toda la ejecución del programa
int contadorGlobal = 0; 

void incrementar(void) {
    
    // Variable local: se crea al entrar a la función y se destruye al salir
    int contadorLocal = 0;

    contadorLocal++;
    contadorGlobal++;

    printf("Dentro de 'incrementar' -> contadorLocal=%d, contadorGlobal=%d\n", 
            contadorLocal, contadorGlobal);
}

int main(void) {
    printf("Inicio -> contadorGlobal=%d\n", contadorGlobal);

    incrementar();
    incrementar();
    incrementar();

    printf("Final -> contadorGlobal=%d\n", contadorGlobal);

    return 0;
}
