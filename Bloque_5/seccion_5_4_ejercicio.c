/*
EJERCICIO

Extiende el programa para que también muestre:
- cuántas calificaciones están aprobadas (>= 70)
- cuántas están reprobadas

Restricciones:
- Sigue usando el arreglo fijo de 10 y la variable n.
- No uses memoria dinámica.
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
    int aprobadas = 0;
    int reprobadas = 0;

    for (int i = 0; i < n; i++) {
        suma += calificaciones[i];

        if (calificaciones[i] > maximo) {
            maximo = calificaciones[i];
        }

        if (calificaciones[i] < minimo) {
            minimo = calificaciones[i];
        }
        
        if (calificaciones[i] >= 70) {
            aprobadas++;
        } else {
            reprobadas++;
        }
    }

    double promedio = (double) suma / n;

    printf("\nMateria: %s\n", materia);
    printf("Promedio: %.2f\n", promedio);
    printf("Máximo: %d\n", maximo);
    printf("Mínimo: %d\n", minimo);
    printf("Calificaciones aprobadas: %d\n", aprobadas);
    printf("Calificaciones reprobadas: %d\n", reprobadas);

    return 0;
}
