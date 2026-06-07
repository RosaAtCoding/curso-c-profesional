/*
Sección 4.5. - Ejemplo Práctico: Funciones y Recursión (sumatorio 1..n)

Objetivo: Ver cómo las funciones organizan el código y cómo recursión puede expresar una idea

Problema:
Clacular la suma de 1 hasta n.

Ejemplo:
n = 5 -> 1 + 2 + 3 + 4 + 5 = 15
*/

#include <stdio.h>

int sumaIterativa(int n) {
    int suma = 0;
    int i;

    for (i = 1; i <= n; i++) {
        suma = suma + i;
    }

    return suma;
}

int sumaRecursiva(int n) {
    // Caso base
    if (n <= 1) {
        return 1;   // sumaRecursiva(1) = 1, sumaRecursiva(0) = 0
    }

    // Paso recursivo
    return n + sumaRecursiva(n - 1);
}


int main(void) {
    int n;

    printf("Ingresa un número entero (>0): ");
    scanf("%d", &n);

    // Asumimos entrada válida
    int resultado1 = sumaIterativa(n);
    int resultado2 = sumaRecursiva(n);

    printf("Suma iterativa 1..%d = %d\n", n, resultado1);
    printf("Suma recursiva 1..%d = %d\n", n, resultado2);

    return 0;
}

