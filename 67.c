#include <stdio.h>

int main() {
    int a = 5, b = 2;
    int inteiro = a / b;         
    int resto = a % b;            
    float real = (float)a / b;   

    printf("Divisao inteira: %d\n", inteiro);
    printf("Resto: %d\n", resto);
    printf("Divisao real: %.1f\n", real);
    return 0;
}
