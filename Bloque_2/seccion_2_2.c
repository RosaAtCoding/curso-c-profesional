#include <stdio.h>
#include <stdbool.h>

/*
Sección 2.2 - Tipos de datos y variables

Objetivo: Declarar variables, inicializarlas e imprimir sus valores.

NOTA IMPORTANTE:
En C el tamaño (bits) de algunos tipos puede variar según el sistema / compilador.

Lo común hoy en día es:

+--------------+-----------------------+----------------------------------+------------------+
| Tipo         | Tamaño típico         | Rango típico aprox               | printf  /  scanf |
+--------------+-----------------------+----------------------------------+------------------+
| char         | 8 bits (1 byte)       | signed: -128 a 127               | %c               |
|              |                       | unsigned: 0 a 255                |                  |
| short        | 16 bits (2 bytes)     | -32768 a 32767                   | %hd              |
| int          | 32 bits (4 bytes)     | -2,147,483,648 a 2,147,483,647   | %d               |
| unsigned int | 32 bits (4 bytes)     | 0 a 4,294,967,295                | %u               |
| long         | 32 bits (4 bytes)*    | -2,147,483,648 a 2,147,483,647*  | %ld              |
| long long    | 64 bits (8 bytes)     | ~ -9e18 a 9e18                   | %lld             | 
| float        | 32 bits (4 bytes)     | ~ 1.18e-38 a 3.4e38              | %f               |
| double       | 64 bits (8 bytes)     | ~ 2.23e-308 a 1.79e308           | %f** /  %lf      |
| bool         | 8 bits (1 byte)       | 0 ó 1                            | %d               |
| void         | no aplica             | noes un valor, es 'sin tipo'     | no aplica        |
+--------------+-----------------------+----------------------------------+------------------+

* En Windows 'long' sule ser de 33 bits, en macOS / Linux (muchas veces) es 64 bits

** En 'printf' 'float' se promueve a 'double' por eso %f funciona también para 'double'

*/

int main(void) {

    char inicial = 'M';                     // %c
    short anioCorto = 2026;                 // %hd
    int edad = 21;                          // %d
    unsigned int puntos = 300u;             // %u
    long poblacion = 1000000L;              // %ld
    long long muyGrande = 9000000000LL;     // %lld
    float temperatura = 36.5f;              // %f
    double pi = 3.1415926535;               // printf: %f / scanf: %lf
    bool esEstudiante = true;               // %d (0 ó 1)

    printf("inicial (char) = %c\n", inicial);
    printf("anioCorto (short) = %hd\n", anioCorto);
    printf("edad (int) = %d\n", edad);
    printf("puntos (unsigned int) = %u\n", puntos);
    printf("poblacion (long) = %ld\n", poblacion);
    printf("muyGrande (long long) = %lld\n", muyGrande);
    printf("temperatura (float) = %f\n", temperatura);
    printf("pi (double) = %f\n",pi);
    printf("esEstudiante (bool) = %d\n", esEstudiante);  // 1

    // 'void' se usa para indicar "sin valor" o "sin tipo" en ciertos contextos
    // Aquí no se imprime porque no es un valor como tal

    return 0;
}