/*
Sección 3.1. - Esctructuras condicionales (if, else, else if)

Objetivo: Tomar decisiones en el programa según una condición
*/

#include <stdio.h>

int main(void) {

    int calificacion;

    printf("Ingresa tu calificación (0 a 100): ");
    scanf("%d", &calificacion);

    if (calificacion >= 90) {
        printf("Resultado: Excelente\n");
    } else if (calificacion >= 70) {
        printf("Resultado: Aprobado\n");
    } else {
        printf("Resultado: Reprobado\n");
    }

    return 0;
}
