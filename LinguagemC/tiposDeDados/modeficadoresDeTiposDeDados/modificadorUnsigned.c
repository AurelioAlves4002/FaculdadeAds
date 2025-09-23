# include <stdio.h>

int main() {

    int signedNumber = 3000000000; // Valor maior que o limite de um int com sinal
    unsigned int unsignedNumber = 3000000000; // Valor dentro do limite de um int sem sinal

    printf("Valor com sinal (signed): %d\n", signedNumber);
    printf("Valor sem sinal (unsigned): %u\n", unsignedNumber);

    return 0;
}