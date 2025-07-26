#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //gerador de numeros aleatorios:

    srand(time(0));
    numeroComputador = rand() % 100 + 1; //numero entre 0 e 100

    //inicio do jogo:
    printf("Bem-vindo ao Jogo - MAIOR, MENOR OU IGUAL!\n");
    printf("Você deve escolher um número e um tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. menor\n");
    printf("I. Igual\n");
    printf("Escolha o tipo de comparação que você deseja competir: \n");
    scanf("%c", &tipoComparacao);
    printf("Digite o numero (entre 1 e 100): \n");
    scanf("%d", &numeroJogador);

    printf("O computador escolheu: %d\n", numeroComputador);

    //calculo do jogo:

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opcao MAIOR\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        if(resultado == 1){
            printf("Parabéns! Você ganhou. Seu numero é maior que do computador.\n");
        }else {
            printf("Você perdeu! Seu numero é menor que do computador.\n");    
        }
        break;

    case 'n':
    case 'N':
        printf("Você escolheu a opcao MENOR\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        if(resultado == 1){
            printf("Parabéns! Você ganhou. Seu numero é menor que do computador.\n");
        }else {
            printf("Você perdeu! Seu numero é maior que do computador.\n");    
        }
        break;

    case 'I':
    case 'i':
        printf("Você escolheu a opcao IGUAL\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        if(resultado == 1){
            printf("Empatou.\n");
        }else{
            printf("Seus numeros são diferente\n");
        }
        break;
    
    default:
        printf("Opção de jogo inválida.\n");
        break;
    }

}