#include <stdio.h> //biblioteca de entrada e saida de dados
#include <stdlib.h>
#include <time.h>

int main (){

    int opcao;
    int numeroSecreto, palpite;

    printf("Menu principal:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma das opções acima: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0)); //srand é um gerador de numeros aleatorios - time(0) quer dizer q ele vai gerar um numero no time 0 q esta sendo executado isso permite ser o mais aleatorio possivel
        numeroSecreto = rand() % 10; //aqui pego o nº aleatorio e pega o resto da divisao por 10 (ou seja até 9)
        printf("Vamos jogar?\n");
        printf("Tente advinhar o numero secreto\n");
        printf("DIGITE UM NUMERO: \n");
        scanf("%d", &palpite);

        if (numeroSecreto == palpite){
            printf("Você acertou!\n");
        } else {
            printf("Você errou!\n");
        }

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