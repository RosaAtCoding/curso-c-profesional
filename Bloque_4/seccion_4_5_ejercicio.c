/*
EJERCICIO

Implementa el mismo enfoque (dos funciones) para este problema:

Calcular la potencia base^exponente, con exponente entero >= 0.

- potenciaIterativa(base, exponente); usando un 'for'
- potenciaRecursiva(base, exponente): usando recursión

Prueba con:
base = 2, exponente = 5 -> 32
base = 3, exponente = 0 -> 1

Notas:
- Sin menús
- Sin arreglos ni punteros
- Asume datos válidos
*/

#include <stdio.h>

int potenciaIterativa(int base, int exponente);
int potenciaRecursiva(int base, int exponente);

int main(void) {
    int base;
    int exponente;

    printf("Base (ingresa un número entero (>0)): ");
    scanf("%d", &base);

    printf("Exponente: (ingresa un número entero (>0)): ");
    scanf("%d", &exponente);

    // Asumimos entrada válida
    int resultado1 = potenciaIterativa(base, exponente);
    int resultado2 = potenciaRecursiva(base, exponente);

    printf("Potencia iterativa %d^%d = %d\n", base, exponente, resultado1);
    printf("Potencia recursiva %d^%d = %d\n", base, exponente, resultado2);

    return 0;
}

int potenciaIterativa(int base, int exponente) {
    int potencia = 1;
    int i;

    for (i = 1; i <= exponente; i++) {
        potencia *= base;
    }

    return potencia;
}

int potenciaRecursiva(int base, int exponente) {
    // Caso base
    if (exponente <= 0) {
        return 1;   // potenciaRecursiva(base, 0) = 1
    }

    // Paso recursivo
    return base * potenciaRecursiva(base, exponente - 1);
}

