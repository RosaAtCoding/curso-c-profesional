/*
Sección 2.5. - Comentarios y buenas prácticas de código

Objetivo: Ver comentarion de una línea y múltiples líneas
            y entender buenas prácticas por contraste
*/

#include <stdio.h>

int main(void) {

    /*
     * EJEMPLO 1 (a propósito malo)
     * - Nombres poco descriptivos
     * - Formato inconsistente
     * Esto compila, pero se vuelve difícil de leer y mantener
    */

    int n=30;double p=92.5;
    printf("Estudiantes: %d\n",n);
    printf("Promedio: %.1lf\n",p);

    printf("\n");   // Separador visual en la salida

    /*
     * EJEMPLO 2 (mejor práctica)
     * - Nombres descriptivos
     * - Espacios e indentaciones consistentes
     * - Comentarios cortos solo donde aportan contexto
    */

    int numeroDeEstudiantes = 30;
    double promedio = 92.5;

    printf("Estudiantes: %d\n", numeroDeEstudiantes);
    printf("Promedio: %.1lf\n", promedio); 

    return 0;
}
