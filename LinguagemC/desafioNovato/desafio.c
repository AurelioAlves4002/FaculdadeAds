#include <stdio.h>
#include <string.h>

int main() {

    // inicio carta 1

    char estado[3], codigo[5], cidade[50]; // 2 letras para estado + 1 para '\0', 4 dígitos para código + 1 para '\0', nome da cidade até 49 caracteres + 1 para '\0'
    int pontoTuristico;
    unsigned long int populacao;
    float area, pib, densidadePopulacional, pibPerCapita;
    float SuperPower;

    printf("Digite o estado (UF): ");
    scanf("%2s", estado); // Limitando a entrada para 2 caracteres
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o codigo do municipio: ");
    scanf("%4s", codigo); // Limitando a entrada para 4 caracteres
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin); // Usando fgets para permitir espaços no nome da cidade
    cidade[strcspn(cidade, "\n")] = 0; // Remover o newline lido pelo fgets, se presente

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

    // Calculando densidade populacional e PIB per capita
    densidadePopulacional = (float)populacao / area;
    pibPerCapita = (float)pib / populacao;

    // Calculando SuperPower da carta 1

    SuperPower = (float)populacao + area + pib + pontoTuristico + pibPerCapita - densidadePopulacional;

    // fim carta 1

    printf("digite os dados da segunda carta:\n");

    // inicio carta 2

    char estado2[3], codigo2[5], cidade2[50];
    int pontoTuristico2;
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    float SuperPower2;

    printf("Digite o estado (UF): ");
    scanf("%2s", estado2); // Limitando a entrada para 2 caracteres
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o codigo do municipio: ");
    scanf("%4s", codigo2); // Limitando a entrada para 4 caracteres
    getchar(); // Consumir o newline deixado pelo scanf

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); // Usando fgets para permitir espaços no nome da cidade
    cidade2[strcspn(cidade2, "\n")] = 0; // Remover o newline lido pelo fgets, se presente

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
    getchar(); // Consumir o newline deixado pelo scanf

    // calculando densidade populacional e PIB per capita da segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / populacao2;

    // calculando SuperPower da carta 2

    SuperPower2 = (float)populacao2 + area2 + pib2 + pontoTuristico2 + pibPerCapita2 - densidadePopulacional2;

    // fim carta 2

    // Exibindo os dados das duas cartas

    printf("Dados da primeira carta:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f km\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Pontos Turisticos: %d\n", pontoTuristico);
    printf("Densidade Populacional: %.2f habitantes/km\n", densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);
    printf("SuperPower: %.2f\n", SuperPower);

    printf("Dados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km\n", area2);
    printf("PIB: R$ %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f habitantes/km\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("SuperPower: %.2f\n", SuperPower2);

    // Comparando as duas cartas
    if (SuperPower > SuperPower2) {
        printf("O %s e mais forte: %.2f\n", estado, SuperPower);
    } else if (SuperPower < SuperPower2) {
        printf("O %s e mais forte: %.2f\n", estado2, SuperPower2);
    } else {
        printf("As duas cartas tem a mesma forca.\n");
    }

    return 0;
}