/*
Sección 5.3. - Cadenas de caracteres (strings) en C

Objetivo: Entender que una cadena es un arreglo de char terminado en \0.

Idea clave:
- Un string en C NO es un tipo especial: es char[] con terminador nulo.
- '\0' marca el final de la cadena.

Representación:
texto = "Hola"

índices:    0      1      2      3      4
valores:  ['H']  ['o']  ['l']  ['a']  ['\0']
*/

#include <stdio.h>

int main(void) {
    char texto[] = "Hola";

    printf("Imprimir como string (%%s): %s\n", texto);

    printf("\nRecorrido carácter por carácter:\n");

    int i = 0;

    while (texto[i] != '\0') {
        printf("texto[%d] = %c\n", i, texto[i]);
        i++;
    }

    return 0;
}

/*
Consideraciones / edge cases:
1) El terminador '\0' es obligatorio: sin él no sabe dónde parar.
2) char texto[] = "Hola": reserva 5 chars (incluye '\0')
3) No uses %s con arreglos de char que no estén correctamente terminados.
*/
