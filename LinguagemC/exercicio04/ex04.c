#include <stdio.h>

int main () {

    float temperatura, umidade;
    unsigned int estoque;

    printf("Digite a temperatura (em graus Celsius): \n");
    scanf("%f", &temperatura);
    getchar(); // Consumir o newline deixado pelo scanf
    printf("Digite a umidade: \n");
    scanf("%f", &umidade);
    getchar(); 
    printf("Digite o estoque: \n");
    scanf("%u", &estoque);
    getchar();

    if (temperatura > 30.0) {
        printf("A temperatura esta alta.\n");
    } else {
        printf("A temperatura esta normal.\n");
    }   

    if (umidade < 30.0) {
        printf("A umidade esta baixa.\n");
    } else {
        printf("A umidade esta normal.\n");
    }

    if (estoque < 10) {
        printf("O estoque esta baixo.\n");
    } else {
        printf("O estoque esta normal.\n");
    }

    return 0;
}