#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Inicializa o gerador de números aleatórios
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número aleatório entre 1 e 100

    // inicio do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Voce deve escolher um numero e o tipo de comparacao:\n");
    printf("M. para Maior\n");
    printf("N. para Menor\n");
    printf("I. para Igual\n");

    printf("Escolha a comparacao (M/N/I): ");
    scanf(" %c", &tipoComparacao);

    printf("Escolha um numero entre 1 e 100: ");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Voce escolheu Maior.\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;

    case 'N':
    case 'n':
        printf("Voce escolheu Menor.\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Voce escolheu Igual.\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;

    default:
        printf("Tipo de comparacao invalido.\n");
        break;
    }

    printf("Numero do Computador: %d\n", numeroComputador);
    printf("Numero do Jogador: %d\n", numeroJogador);

    if (resultado == 1)
    {
        printf("Parabens! Voce ganhou!\n");
    }
    else
    {
        printf("Que pena! Voce perdeu!\n");
    }
}