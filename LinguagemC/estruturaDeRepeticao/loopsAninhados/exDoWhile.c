#include <stdio.h>
 
int main() {
    int i = 1;
    do { //loop externo
        int j = 1; //variavel local do loop interno
        do { //loop interno
            printf("%d\t", i * j);
            j++; //incremento do loop interno
        } while (j <= 10);
        printf("\n");
        i++; //incremento do loop externo
    } while (i <= 10);
    return 0;
}