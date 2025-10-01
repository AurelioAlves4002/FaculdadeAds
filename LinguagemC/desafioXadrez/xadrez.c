#include <stdio.h>

int main() {

    //Inicialização das peças

    char bispo = 'B';
    char torre = 'T';
    char rainha = 'R';
    int opcao, pecas, movimento, movimento2, movimento3;

    //Menu do jogo

    do
    {
        printf("Digite a opcao desejada: \n");
        printf("1. Comecar jogo\n");
        printf("2. Ver pecas\n");
        printf("3. Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {

            //Inicio do jogo e escolha das peças

        case 1:
            printf("Jogo iniciado!\n");
            printf("Escolha sua peca para jogar!\n");
            printf("1. Bispo\n");
            printf("2. Torre\n");
            printf("3. Rainha\n");
            scanf("%d", &pecas);
            switch (pecas)
            {

                //Movimentos do bispo com o uso do while

            case 1:
                printf("Bispo Selecionado!\n");
                printf("Escolha o movimento:\n");
                printf("1. Baixo, Direita\n");
                printf("2. Baixo, Esquerda\n");
                printf("3. Cima, Direita\n");
                printf("4. Cima, Esquerda\n");
                scanf("%d", &movimento);

                int contador = 0;
                while (contador < 5)
                {
                    if (movimento == 1)
                    {
                        printf("Movimento para Baixo, Direita\n");
                    }
                    else if (movimento == 2)
                    {
                        printf("Movimento para Baixo, Esquerda\n");
                    }
                    else if (movimento == 3)
                    {
                        printf("Movimento para Cima, Direita\n");
                    }
                    else if (movimento == 4)
                    {
                        printf("Movimento para Cima, Esquerda\n");
                    }
                    else
                    {
                        printf("Movimento invalido!\n");
                        break;
                    }
                    contador++;
                }
                break;



            case 2:
                printf("Torre Selecionada!\n");
                printf("Escolha o movimento:\n");
                printf("1. Baixo\n");
                printf("2. Cima\n");
                printf("3. Direita\n");
                printf("4. Esquerda\n");
                scanf("%d", &movimento2);

                for (size_t i = 0; i < 5; i++)
                {
                    if (movimento2 == 1)
                    {
                        printf("Movimento para Baixo\n");
                    }
                    else if (movimento2 == 2)
                    {
                        printf("Movimento para Cima\n");
                    }
                    else if (movimento2 == 3)
                    {
                        printf("Movimento para Direita\n");
                    }
                    else if (movimento2 == 4)
                    {
                        printf("Movimento para Esquerda\n");
                    }
                    else
                    {
                        printf("Movimento invalido!\n");
                        break;
                    }
                }
                break;

                //Movimentos da rainha com o uso do do-while

            case 3:
                printf("Rainha Selecionada!\n");
                printf("Escolha o movimento:\n");
                printf("1. Baixo, Direita\n");
                printf("2. Baixo, Esquerda\n");
                printf("3. Cima, Direita\n");
                printf("4. Cima, Esquerda\n");
                printf("5. Baixo\n");
                printf("6. Cima\n");
                printf("7. Direita\n");
                printf("8. Esquerda\n");
                scanf("%d", &movimento3);
                int contador2 = 0;
                do
                {
                    if (movimento3 == 1)
                    {
                        printf("Movimento para Baixo, Direita\n");
                    }
                    else if (movimento3 == 2)
                    {
                        printf("Movimento para Baixo, Esquerda\n");
                    }
                    else if (movimento3 == 3)
                    {
                        printf("Movimento para Cima, Direita\n");
                    }
                    else if (movimento3 == 4)
                    {
                        printf("Movimento para Cima, Esquerda\n");
                    }
                    else if (movimento3 == 5)
                    {
                        printf("Movimento para Baixo\n");
                    }
                    else if (movimento3 == 6)
                    {
                        printf("Movimento para Cima\n");
                    }
                    else if (movimento3 == 7)
                    {
                        printf("Movimento para Direita\n");
                    }
                    else if (movimento3 == 8)
                    {
                        printf("Movimento para Esquerda\n");
                    }
                    else
                    {
                        printf("Movimento invalido!\n");
                        break;
                    }
                    contador2++;
                } while (contador2 < 8);
                break;
            default:
                printf("Peca invalida!\n");
                break;
            }

            default:
            printf("Opcao invalida!\n");
            break;
        case 2:
            printf("Pecas disponiveis:\n");
            printf("Bispo: %c\n", bispo);
            printf("Torre: %c\n", torre);
            printf("Rainha: %c\n", rainha);
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        }

    } while (opcao != 3);
    
    return 0;
}