#include <stdio.h>

int main() {

    //declaração das variaveis

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 3000;

    float precoA = 92.99;
    float precoB = 47.69;

    unsigned int estoqueMinimo = 100;
    unsigned int estoqueMinimoB = 300;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //exibir as informações do produtos

    printf("Estoque do %s: %u unidades e o preço unitario e R$ %.2f\n", produtoA, estoqueA, precoA);
    printf("Estoque do %s: %u unidades e o preço unitario e R$ %.2f\n", produtoB, estoqueB, precoB);


    //comparação com o valor minimo de estoque

    resultadoA = estoqueA > estoqueMinimo;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O estoque do %s e maior que o estoque minimo? %d\n", produtoA, resultadoA);
    printf("O estoque do %s e maior que o estoque minimo? %d\n", produtoB, resultadoB);

    //comparação entre os valores totais dos produtos

    printf("O valor total do A (R$ %.2f) e maior que o valor total do B (R$ %.2f)? %d\n", (estoqueA * precoA), (estoqueB * precoB), (estoqueA * precoA) > (estoqueB * precoB));

    return 0;


}