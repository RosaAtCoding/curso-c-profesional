/*
Sección 5.1. - Arreglos unidimensionales (arrays)

Objetivo: Declarar, inicializar, acceder por índice y recorrer un arreglo

Idea clave:
- Un arreglo es una colección de elementos del MISMO tipo.
- Los índices empiezan en 0.
- Si el arreglo tiene tamaño N, los índices válidos van de 0 a N-1,

Representación visual:
índices:   0    1    2    3    4
valores:  [5]  [8]  [2]  [9]  [1]     
*/

#include <stdio.h>

int main(void) {
    int numeros[5] = {5, 8, 2, 9, 1};

    printf("El arreglo 'numeros' tiene 5 elementos.\n");

    /* Acceso directo por índice. */
    printf("numeros[0] = %d\n", numeros[0]);
    printf("numeros[3] = %d\n", numeros[3]);

    /* Recorrido completo con 'for' */
    printf("\nRecorrido del arreglo:\n");

    for(int i= 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}

/*
Consideraciones / edge cases:
1) En C NO hay verificación automática de límites
    numeros[5] está fuera del arreglo y puede causar bugs ocrashes.
2) Eltamaño del arreglo (5) aquí es fijo y conocido en compilación.
3) Un arreglo no 'crece' solo (eso se ve más adelante en 'memoria dinámica').
*/
