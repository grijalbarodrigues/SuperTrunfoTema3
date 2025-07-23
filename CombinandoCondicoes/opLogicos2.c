#include <stdio.h>

int main (){
    int a = 5;
    int b = -10;
    int c = 1;

    // o cod. vai fazer essa sequencia:
    // a > 0 --> VERDADEIRO
    // B < 0 --> VERDADEIRO
    // VERDADEIRO && VERDADEIRO  = VERDADEIRO
    // VERDADEIRO || c == 0
    // VERDADEIRO || FALSO --> VERDADEIRO

    if (a > 0 && b < 0 || c == 0){
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }
}
