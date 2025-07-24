#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int escolhaJogador, escolhaComputador;
    srand(time(0)); //inicializa o gerenciador de numeros aleatorios 

    printf("**JOGO DE JOKENPÔ**\n");
    printf("**Escolha uma opção:**\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura \n");
    printf("Eu escolho: \n");
    scanf("%d", &escolhaJogador);

    if (escolhaJogador < 1 || escolhaJogador > 3){
        printf("Você digitou uma opção inválida!\n");
        return 1;// encerra o programa se digitar um valor invalido
    }


    //aqui o PC gera um numero aleatorio onde as opcoes sao apenas 0,1,2 somando 1 unidade fica 1,2,3
    //porem isso nao restringe valores negativos
    escolhaComputador = rand() % 3 + 1;

    printf("JO...KEN...PÔ!\n");

    //pedra ganha de tesoura - 1pedra
    //papel ganha de pedra - 2papel
    //tesoura ganha de papel - 3tesoura

    printf("O computador escolheu: ");
    switch (escolhaComputador){
        case 1: printf("1. Pedra\n");break;
        case 2: printf("2. Papel\n");break;
        case 3: printf("3. Tesoura\n");break;        
    }

    switch (escolhaComputador)
    {
    case 1://escolha do computador = pedra
        if (escolhaJogador == 3){
        printf("Você perdeu! O computador escolheu PEDRA e você TESOURA\n");
            }else if(escolhaJogador == 2){
                printf("Parabéns! Você ganhou. Você escolheu PAPEL e o computador PEDRA\n");
            } else {
                printf("Empatou! Os dois escolheram PEDRA\n");
            }
        break;
    
    case 2://escolha do computador = papel
        if (escolhaJogador == 1){
        printf("Você perdeu! O computador escolheu PAPEL e você PEDRA\n");
            }else if(escolhaJogador == 3){
                printf("Parabéns! Você ganhou.Você escolheu TESOURA e o computador PAPEL\n");
            } else {
                printf("Empatou! Os dois escolheram PAPEL\n");
            }
        break;

    case 3://escolha do computador = tesoura
        if (escolhaJogador == 2){
        printf("Você perdeu! O computador escolheu TESOURA e você PAPEL\n");
            }else if(escolhaJogador == 1){
                printf("Parabéns! Você ganhou. Você escolheu PEDRA e o computador TESOURA\n");
            } else {
                printf("Empatou! Os dois escolheram TESOURA\n");
            }
        break; 

    }

}