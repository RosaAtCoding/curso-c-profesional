/*
EJERCICIO

Crea un programa con un menú que se repita usando do-while 
hasta que el usuario elija salir.

Menú:
1) Pedir un número y decir si es positivo, negativo o cero (usa if / else if / else)
2) Pedir un número N e imprimir del 1 a N (usa for o while)
3) Salir

Requisitos:
- Usa switch-case para manejar las opciones del menú
- Incluye default para "Opción inválida"
- El do-while debe repetirse mientras la opción NO sea 3

Nota:
- Por ahora asume que el usuario ingresa valores válidos
- Más adelante verás cómo validar entradas y evitar casos problemáticos

*/

#include <stdio.h>

int main(void) {

    int opcion;
    int numero;
    int n;

    do {
        printf("\nMenú:\n");
        printf("1) Verificar si el número es: positivo, negativo o cero\n");
        printf("2) Imprimir números del 1 a N\n");
        printf("3) Salir\n");

        printf("Elige una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingresa un número entero: ");
                scanf("%d", &numero);

                if (numero > 0) {
                    printf("%d es positivo.\n", numero);
                } else if (numero < 0) {
                    printf("%d es negativo.\n", numero);
                } else {
                    printf("%d es cero.\n", numero);
                }
            
                break;

            case 2:
                printf("Ingresa un número entero: ");
                scanf("%d", &n);
                
                for (int i = 1; i <= n; i++) {
                    printf("%d\n", i);
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
