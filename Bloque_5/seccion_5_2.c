/*
Sección 5.2. - Arreglos bidimensionales (matrices)

Objetivo: Declarar una matriz, acceder por fila/columna y recorrerla.

Idea clave:
- Una matriz es un arreglo de arreglos.
- Se accede como: matriz[fila][columna]

Representación visual (3x3):
            col 0   col 1   col 2
fila 0        1       2       3
fila 1        4       5       6
fila 2        7       8       9
*/

#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Acceso directo:\n");

    printf("matriz[0][0] = %d\n", matriz[0][0]);
    printf("matriz[2][1] = %d\n", matriz[2][1]);

    printf("\nRecorrido fila por fila:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Consideraciones / edge cases:
1) Igual que con arreglos 1D, C no verifica límites.
2) Para una matriz 3x3, fila y col van de 0 a 2.
3) El recorrido típico es: for fila afuera, for columna adentro.
*/
