#include <stdio.h>

int main() {
    int a = 5, b = 2;
    int inteiro = a / b;          // Resultado: 2
    int resto = a % b;            // Resultado: 1
    float real = (float)a / b;    // Resultado: 2.5

    printf("Divisao inteira: %d\n", inteiro);
    printf("Resto: %d\n", resto);
    printf("Divisao real: %.1f\n", real);
    return 0;
}
