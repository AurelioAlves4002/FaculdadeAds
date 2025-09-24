#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opcao: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      srand(time(0));
      numeroSecreto = rand() % 9 + 1;
      printf("Adivinhe o numero (entre 1 e 9): \n");
      scanf("%d", &palpite);

      if (palpite == numeroSecreto) {
        printf("Parabens! Voce acertou!\n");
      } else {
        printf("Voce errou. O numero era %d.\n", numeroSecreto);
      }
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opcao no menu.\n");
      printf("2. Se voce escolher 'Iniciar Jogo', adivinhe o numero secreto.\n");
      printf("3. O jogo termina quando voce escolhe 'Sair'.\n");
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opcao invalida. Tente novamente.\n");
  }

  return 0;
}