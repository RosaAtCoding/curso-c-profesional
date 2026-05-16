/*

EJERCICIO (sin control de flujo y sin arrays)

"Calculadora" (algo más realista)

1) Pide al usuario:
    - subtotal (double)
    - porcentajePropina (double)    -> por ejemplo:10 para 10%
    - porcentajeImpuesto (double)   -> por ejemplo: 16 para 16%
    - numeroDePersonas (int)

2) Calcula:
    - propina = subtotal * (porcentajePropina / 100)
    - impuesto = subtotal * (porcentajeImpuesto / 100)
    - total = subtotal + propina + impuesto

3) Imprime todo con 2 decimales:
    - subtotal
    - propina
    - impuesto
    - total
    - pagoPorPersona

Nota:
- En este ejercicio asume que el usuario mete valores válidos
- Más adelante con control de flujo se validarán casos como: numeroDePersonas = 0

*/

#include <stdio.h>

int main(void) {

    int numeroDePersonas;
    double subtotal, porcentajePropina, porcentajeImpuesto;

    // Input del usuario
    printf("Ingresa el número de personas: ");
    scanf("%d", &numeroDePersonas);

    printf("Ingresa el subtotal: ");
    scanf("%lf", &subtotal);

    printf("Ingresa el porcentaje de la propina: ");
    scanf("%lf", &porcentajePropina);

    printf("Ingresa el porcentaje de impuesto: ");
    scanf("%lf", &porcentajeImpuesto);

    // Cálculos
    double propina = subtotal * (porcentajePropina / 100);
    double impuesto = subtotal * (porcentajeImpuesto / 100);
    double total = subtotal + propina + impuesto;
    
    // Salida de resultados
    printf("Número de personas: %d\n", numeroDePersonas);
    printf("Subtotal: %.2lf\n", subtotal);
    printf("Propina: %.2lf\n", propina);
    printf("Impuesto: %.2lf\n", impuesto);
    printf("Total: %.2lf\n", total);
    printf("Pago por persona: %.2lf\n", total / numeroDePersonas);

    return 0;
}
