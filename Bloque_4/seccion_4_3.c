/*
Sección 4.3. - Prototipos de Funciones

Objetivo: Entender por qué declarar una función antes de usarla.
*/

#include <stdio.h>

/* Prototipo (declaración): le avisa al compilador que esta función existe */
int cuadrado(int n);

int main(void) {
    int x = 7;

    // Usamos la función antes de su definición
    int resultado = cuadrado(x);

    printf("El cuadrado de %d es %d\n", x, resultado);

    return 0;
}

/* Definición (implementación): aquí está el cuerpo real de la función */
int cuadrado(int n) {
    return n * n;
}
