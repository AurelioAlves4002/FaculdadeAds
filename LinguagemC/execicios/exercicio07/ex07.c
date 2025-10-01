#include <stdio.h>

int main() {

    //Exemplo do uso do while

    int i = 0;

    while (i <= 10) {
        if (i % 2 == 0)
        {
            printf("O numero %d e par!\n", i);
        }
        
        i++;
    }

    //exemplo do uso do do-while

    int numero;

    do
    {
        printf("Digite um valor par para sair do programa...\n");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("%d e par!\n", numero);
        } else
        {
            printf("%d e impar\n", numero);
        }
        
        
    } while (numero % 2 != 0);

    printf("Voce digitou um numero par, saindo do programa...\n");


    //Exemplo do uso do For


    int numero2, i2;

    printf("Digite um numero para calcularmos a tabuada...");
    scanf("%d", &numero2); 

    for (i2 = 0; i2 <= 10; i2++)
    {
        printf("%d x %d = %d \n", i2, numero2, i2 * numero2);
    }
    
    return 0;

}