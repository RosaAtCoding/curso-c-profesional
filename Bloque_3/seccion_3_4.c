/*
Sección 3.4. - Control de Flujo Anidado

Objetivo: Usar bucles dentro de bucles y condicionales dentro de bucles


Vamos a imprimir una tabla (como si fuera una matriz 3x3):

          col=1   col=2    col=3
fila=1      1       2       3
fila=2      2       4       6
fila=3      3       6       9

Recorrido:
- El bucle exterior controla la fila (fila = 1...3)
- El bucle interior controla la columna (col = 1...3)
- En cada celda calculamos: resultado = fila * columna
*/

#include <stdio.h>

int main(void) {

    int fila, col;

    printf("Tabla de multiplicar del 1 al 3:\n");

    for (fila = 1; fila <= 3; fila++) {
        for (col = 1; col <= 3; col++) {

            int resultado = fila * col;

            // Condicional dentro del bucle: ejemplo simple (par/impar)
            if (resultado % 2 == 0) {
                printf("%d ", resultado);    // par
            } else {
                printf("%d ", resultado);    // impar (por ahora imprimimos igual)
            }
        }

        printf("\n");   // salto de línea al terminar cada fila
    }

    return 0;
}
