/*
Sección 5.4. - Ejercicio práctico (arrays y strings)

Objetivos:
- Leer un nombre de materia (string)
- Leer N calificaciones en un arreglo (N <= 10)
- Calcular promedio, máximoy mínimo

Representación:
calificaciones: [c0][c1][c2]...[cN-1]
*/

#include <stdio.h>

int main(void) {
    char materia[20];
    int calificaciones[10];
    int n;

    printf("Nombre de la materia (una palabra): ");
    scanf("%19s", materia);

    printf("Cuántas calificaciones vas a ingresar (1 a 10)? " );
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Error: n debe estar entre 1 y 10\n");
        
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        printf("Calificación %d: ", i + 1);
        scanf("%d", &calificaciones[i]);
    }

    int suma = 0;
    int maximo = calificaciones[0];
    int minimo = calificaciones[0];

    for (int i = 0; i < n; i++) {
        suma += calificaciones[i];

        if (calificaciones[i] > maximo) {
            maximo = calificaciones[i];
        }

        if (calificaciones[i] < minimo) {
            minimo = calificaciones[i];
        }        
    }

    double promedio = (double) suma / n;

    printf("\nMateria: %s\n", materia);
    printf("Promedio: %.2f\n", promedio);
    printf("Máximo: %d\n", maximo);
    printf("Mínimo: %d\n", minimo);

    return 0;
}

/*
Consideraciones / edge cases:
1) Validamos n para no salirnos del arreglo de tamaño 10
2) Usamos %19s para evitar overflow en materia[20]
3) El promedio usa cast a double para no perder decimales (evitar división entera)
*/
