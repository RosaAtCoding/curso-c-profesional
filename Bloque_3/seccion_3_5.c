/*
Sección 3.5. - Ejemplo Práctico Funciones y Control de Flujo

Objetivo:
*/

#include <stdio.h>

int main(void) {

    int opcion;
    int numero;
    int i;

    do {
        printf("\nMenú:\n");
        printf("1) Verificar si el número es par o impar\n");
        printf("2) Imprimir tabla de multiplicar (1 al 10)\n");
        printf("3) Salir\n");

        printf("Elige una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingresa un número entero: ");
                scanf("%d", &numero);

                if (numero % 2 == 0) {
                    printf("El número es par.\n");
                } else {
                    printf("El número es impar.\n");
                }

                break;

            case 2:
                printf("Ingresa un número entero: ");
                scanf("%d", &numero);

                for (i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", numero, i, numero * i);
                }

                break;

            case 3:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opción inválida.\n");
                break;
        }

    } while (opcion != 3);

    return 0;
}
