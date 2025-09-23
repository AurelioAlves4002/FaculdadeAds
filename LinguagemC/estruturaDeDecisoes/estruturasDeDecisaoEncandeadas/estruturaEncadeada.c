#include <stdio.h>

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("idade inválida\n");
    } else if (idade > 65) {
        printf("Voce e Aposentado\n");
    } else if (idade >= 18) {
        printf("Voce e Adulto\n");
    } else if (idade >= 12) {
        printf("Voce e Adolescente\n");
    } else {
        printf("Voce e Crianca\n");
    }

    return 0;
}

