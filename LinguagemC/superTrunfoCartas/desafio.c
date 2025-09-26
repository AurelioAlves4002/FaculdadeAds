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
    scanf("%lu", &populacao);
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
    scanf("%lu", &populacao2);
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
    printf("Area: %.2f km\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontoTuristico);
    printf("Densidade Populacional: %.2f habitantes/km\n", densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);
    printf("SuperPower: %.2f\n", SuperPower);

    printf("Dados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f habitantes/km\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("SuperPower: %.2f\n", SuperPower2);

    // Menu de comparação das cartas

    printf("Escolha um atributo para a comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - SuperPower\n");

    int escolha1, resultado1, resultado2;
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
        resultado1 = area > area2 ? 1 : 0;
        break;

    case 3:
        resultado1 = pib > pib2 ? 1 : 0;
        break;
    case 4:
        resultado1 = pontoTuristico > pontoTuristico2 ? 1 : 0;
        break;
    case 5:
        resultado1 = densidadePopulacional > densidadePopulacional2 ? 0 : 1;
        break;
    case 6:
        resultado1 = pibPerCapita > pibPerCapita2 ? 1 : 0;
        break;
    case 7:
        resultado1 = SuperPower > SuperPower2 ? 1 : 0;
        break;
    default:
        printf("Escolha invalida!\n");
        break;
    }

    printf("Escolha o segundo atributo para a comparacao:\n");
    printf("Atencao: Voce deve escolher um atributo diferente do primeiro.\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - SuperPower\n");

    int escolha2;
    scanf("%d", &escolha2);

    // Verificando se a escolha do segundo atributo é diferente do primeiro
    if (escolha2 == escolha1)
    {
        printf("Escolha um atributo diferente do primeiro.\n");
        return 1;
    } else { 
        switch (escolha2)
    {
    case 1:
        resultado2 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
        resultado2 = area > area2 ? 1 : 0;
        break;

    case 3:
        resultado2 = pib > pib2 ? 1 : 0;
        break;

    case 4:
        resultado2 = pontoTuristico > pontoTuristico2 ? 1 : 0;
        break;

    case 5:
        resultado2 = densidadePopulacional > densidadePopulacional2 ? 0 : 1;
        break;

    case 6:
        resultado2 = pibPerCapita > pibPerCapita2 ? 1 : 0;
        break;

    case 7:
        resultado2 = SuperPower > SuperPower2 ? 1 : 0;
        break;

    default:
        printf("Escolha invalida!\n");
        break;
    }

    }
    
    // Exibindo o resultado da comparacao
    if (resultado1 == 1 && resultado2 == 1)
    {
        printf("A primeira carta vence.\n");
    }
    else if (resultado1 == 0 && resultado2 == 0)
    {
        printf("A segunda carta vence.\n");
    }
    else
    {
        printf("Deu em empate.\n");
    }

    return 0;
}