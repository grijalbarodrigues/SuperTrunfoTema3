#include <stdio.h>

int main (){

    //exemplo 2
    // usuario escolher a opcao de acordo com a resposta numerica

    int opcao;
    float saldo = 1505;

    printf("**ESCOLHA A OPÇÃO QUE VOCÊ DESEJAR**\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %.2f\n", saldo);
    break;
    case 2:
        printf("Você apertou em Fazer depósito\n");
    break;
    case 3:
        printf("Você apertou em Fazer saque\n");
    break;
    default:
        printf("Selecione uma das opções válidas\n");
    break;
    }



}