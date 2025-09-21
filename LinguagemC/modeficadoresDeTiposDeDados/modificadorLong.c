#include <stdio.h>

int main() {

    int regularNumber = 2147483647; // Valor máximo para um int
    long long int bigNumber = 2147483647;

    printf("Valor regular (int): %d\n", regularNumber);
    printf("Valor grande (long long int): %lld\n", bigNumber);

    bigNumber = 2147483648; // Valor maior que o limite de um int

    printf("Valor grande atualizado (long long int): %lld\n", bigNumber);

    return 0;
}