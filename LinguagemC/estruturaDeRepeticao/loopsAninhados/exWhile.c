#include <stdio.h>
 
int main() {
    int i = 1; 
    while (i <= 10) {  //loop externo

        int j = 1; //variavel local do loop interno
        while (j <= 10) {  //loop interno
            printf("%d\t", i * j);
            j++; //incremento do loop interno
        }

        printf("\n");
        i++; //incremento do loop externo
    }
    return 0;
}