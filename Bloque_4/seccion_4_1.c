/*
Sección 4.1. - Definición y Llamada de Funciones

Objetivo: Declarar una función, definirla y llamarla desde 'main'
*/

#include <stdio.h>

/*
Definición de función:
    - Tipo de retorno:  double
    - Nombre: areaRectangulo
    - Parámetros: base y altura (double)
*/
double areaRectangulo(double base, double altura) {
    return base * altura;
}

int main(void) {

    double base, altura;

    printf("Ingresa la base: ");
    scanf("%lf", &base);

    printf("Ingresa la altura: ");
    scanf("%lf", &altura);

    // Llamada a la función
    double area = areaRectangulo(base, altura);

    printf("El área del rectángulo es: %.2lf\n", area);

    return 0;
}
