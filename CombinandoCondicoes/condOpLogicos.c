#include <stdio.h>

int main (){
    /*
    PRINCIPAIS OPERADORES LOGICOS:
    E  = && 
    OU = ||
    NAO = !
    */

    //EXEMPLO 1 - &&:
    int a = 10, b = -5;

    if (a > 0 && b > 0){
        printf("Os dois numeros sao positivos!\n"); 
    } else {
        printf("pelo menos um dos numeros é positivo!\n");
    }

    //EXEMPLO 2 - ||: - Tabela verdade retornará falso apenas se os dois sao falsos
    int a = -10, b = -5;

    if (a > 0 || b > 0){
        printf("PELO MENOS UM DOS NUMEROS É POSITIVO!\n"); 
    } else {
        printf("Os dois numeros sao negativos!\n");
    }

    //EXEMPLO 3 - ! - Inverte o valor lógico - se o resultado for V inverte para F 
    int a = 10;

    if (!(a > 0)){
        printf("O valor é negativo!\n"); 
    } else {
        printf("O valor é positivo!\n");
    }// o que aconteceu aqui:
    // a vale 10. 10 é maior q zero, ou seja V, ai inverte o valor, fica F, e retorna o else


}