#include <stdio.h>

int main() {

    // inicio carta 1

    char estado[3], codigo[5], cidade[50]; // 2 letras para estado + 1 para '\0', 4 dígitos para código + 1 para '\0', nome da cidade até 49 caracteres + 1 para '\0'
    int populacao, pontoTuristico;
    float area, pib;

    printf("Digite o estado (UF): ");
    scanf("%2s", estado); // Limitando a entrada para 2 caracteres
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o codigo do municipio: ");
    scanf("%4s", codigo); // Limitando a entrada para 4 caracteres
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin); // Usando fgets para permitir espaços no nome da cidade

    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite a area (em km): ");
    scanf("%f", &area);
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o PIB (em R$): ");
    scanf("%f", &pib);
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontoTuristico);

    // fim carta 1

    printf("digite os dados da segunda carta:\n");

    // inicio carta 2

    char estado2[3], codigo2[5], cidade2[50];
    int populacao2, pontoTuristico2;
    float area2, pib2;

    printf("Digite o estado (UF): ");
    scanf("%2s", estado2); // Limitando a entrada para 2 caracteres
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o codigo do municipio: ");
    scanf("%4s", codigo2); // Limitando a entrada para 4 caracteres
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); // Usando fgets para permitir espaços no nome da cidade

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite a area (em km): ");
    scanf("%f", &area2);
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o PIB (em R$): ");
    scanf("%f", &pib2);
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontoTuristico2);

    printf("Dados da primeira carta:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f km²\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Pontos Turisticos: %d\n", pontoTuristico);

    printf("Dados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("PIB: R$ %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontoTuristico2);

    // fim carta 2

    return 0;
}