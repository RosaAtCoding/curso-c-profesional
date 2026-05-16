/*
Sección 2.6. - Ejemplo Práctico Construyendo un Programa Simple

Objetivo: Integrar variables, operadores y scanf/printf en un programa simple
*/

#include <stdio.h>

int main(void) {

    double x, y;

    printf("Ingresa el primer número: ");
    scanf("%lf", &x);

    printf("Ingresa el segundo número: ");
    scanf("%lf", &y);

    double suma = x + y;
    double resta = x - y;
    double multiplicacion = x * y;
    double division = x / y;    // Nota: aquí asumimos que 'y' no es 0
    // Lo validaremos en el siguiente bloque

    printf("\nResultados:\n");
    printf("x + y = %.2lf\n", suma);
    printf("x - y = %.2lf\n", resta);
    printf("x * y = %.2lf\n", multiplicacion);
    printf("x / y = %.2lf\n", division);

    return 0;
}
