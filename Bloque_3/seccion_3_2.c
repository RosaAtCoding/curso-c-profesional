/*
Sección 3.3. - Esctructura switch-case

Objetivo: 
*/

#include <stdio.h>

int main(void) {

    int opcion;

    printf("Menú:\n");
    printf("1) Saludar\n");
    printf("2) Mostrar un tip de C\n");
    printf("3) Salir\n");

    printf("Elige una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Hola!\n");
            break;
        case 2:
            printf("Tip: Usa nombres de variables descriptivos, te ahorra bugs.\n");
            break;
        case 3:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opción inválida.\n");
            break;
    }

    return 0;
}
