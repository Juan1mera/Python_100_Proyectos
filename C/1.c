// Escribe un programa que muestre por consola (con un print) los
// números de 1 a 100 (ambos incluidos y con un salto de línea entre
// cada impresión), sustituyendo los siguientes:
// - Múltiplos de 3 por la palabra "fizz".
// - Múltiplos de 5 por la palabra "buzz".
// - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
//------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0; i < 101; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("fizzbuzz");
        }
        else if (i % 3 == 0) {
            printf("fizz");
        }
        else if (i % 5 == 0) {
            printf("buzz");
        }
        else {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}