#include <stdio.h>

int main (){

    int opcao;

    printf("Menu principal:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Vamos iniciar o jogo agora!\n");
    break;
    case 2:
        printf("Regras do Jogo\n");
    break;
    case 3:
        printf("Você está saindo do jogo\n");
    break;

    default:
        printf("Insira uma opcao válida!\n");
    break;
    }


}