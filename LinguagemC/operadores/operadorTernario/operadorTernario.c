#include <stdio.h>

int main() {
  int num1 = 10, num2 = 20;
  int maior;

  maior = (num1 > num2) ? num1 : num2;

  printf("O maior número é: %d\n", maior);

  return 0;
}