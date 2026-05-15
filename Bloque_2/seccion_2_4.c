/*
Sección 2.4. - Entrada y Salida estándar

Objetivo: Leer valores con scanf e imprimir la salida con printf
*/

#include <stdio.h>

int main(void) {

    int edad;
    double estatura;

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("Ingresa tu estatura en metros (ejemplo: 1.63): ");
    scanf("%lf", &estatura);

    printf("Ingresaste: edad = %d y estatura = %.2lf\n", edad, estatura);

    return 0;
}
