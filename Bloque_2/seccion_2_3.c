/*
Sección 2.3. - Operadores aritméticos, lógicos y relacionales

Objetivo: Ver ejemplos claros de cada operador y cómo se combinan
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int a = 10;
    int b = 3;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // 1) Operadores aritméticos: + - * / %
    printf("\nARITMETICOS:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (división entera)\n", a / b);
    printf("a %% b = %d (residuo)\n", a % b);

    // 2) Operadores relacionales: == != < <= > >=
    printf("\nRELACIONALES:\n");
    printf("a == b -> %d\n", a == b);
    printf("a != b -> %d\n", a != b);
    printf("a < b -> %d\n", a < b);
    printf("a <= b -> %d\n", a <= b);
    printf("a > b -> %d\n", a > b);
    printf("a >= b -> %d\n", a >= b);

    // 3) Operadores lógicos: && (AND) || (OR) ! (NOT)
    printf("\nLOGICOS:\n");
    bool p = (a > 5);   // true
    bool q = (b > 5);   // false

    printf("p = (a > 5) -> %d\n", p);
    printf("q = (b > 5) -> %d\n\n", q);

    printf("p && q -> %d\n", p && q);
    printf("p || q -> %d\n", p || q);
    printf("!p -> %d\n", !p);
    printf("!q -> %d\n", !q);

    // Orden de Operaciones
    printf("\nORDEN DE OPERACIONES:\n");
    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);

    return 0;
}