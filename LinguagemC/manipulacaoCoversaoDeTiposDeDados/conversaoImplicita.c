#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    float resultado;

    resultado = a + b; // Conversão implícita de int para float
    printf("Resultado: %.2f\n", resultado);

    return 0;
}
