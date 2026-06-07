/*
Sección 4.4. - Recursión

Objetivo: Entenderla idea de una función que se llama a sí misma.

Qué es factorial?
5! = 5 * 4 * 3 * 2 * 1
4! = 4 * 3 * 2 * 1
1! = 1
0! = 1 (por definición)

Idea recursiva:
n! = n * (n - 1)!

"Dibujo" de la pila recursiva (ejemplo n = 4):

Llamadas (bajando):
factorial(4)
    -> 4 * factorial(3)
        -> 3 * factorial(2)
            -> 2 * factorial(1)
                -> factorial(1) regresa 1 (caso base)

Regresos (subiendo):
factorial(1) = 1
factorial(2) = 2 * 1 = 2
factorial(3) = 3 * 2 = 6
factorial(4) = 4 * 6 = 24

La "pila" se puede imaginar como capas: 
        cada llamada espera a que regrese la siguiente
*/

#include <stdio.h>

int factorial(int n) {
    // Caso base: condición que detiene la recursión
    if (n < 1) {
        return 1;
    }

    // Paso recursivo:
    // la función se llama a sí misma con un problema más pequeño
    return n * factorial(n - 1);
}

int main(void) {
    int n;

    printf("Ingresa un número entero (>= 0): ");
    scanf("%d", &n);

    // Por ahora asumimos entrada válida
    printf("%d! = %d\n", n, factorial(n));

    return 0;
}
