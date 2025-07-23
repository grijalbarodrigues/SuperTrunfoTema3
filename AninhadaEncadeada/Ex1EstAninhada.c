#include <stdio.h>

int main (){


    //estrutura de decisao aninhada
    /*
    if (condicao1){
        if (condicao2){
            //cod. a ser executado se a condicao1 e condicao2 forem verdadeiras
        }
    }
    */

    //EXEMPLO 1
    // DESCONTO ESPECIAL COM BASE NA IDADE E RENDA
    // A PESSOA DEVE TER MAIS DE 60 ANOS OU MENOS DE 18 E TER UMA RENDA MENSAL ABAIXO DE 2.000 REAIS
    float renda;
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite sua renda: \n");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60){
        if(renda < 2000){
            printf("PARABÉNS! Você atende aos critérios de idade e renda para ter o desconto especial.\n");
        }else{
            printf("Você não tem direito ao desconto devido a renda!\n");
        }
    } else {
        printf("Você não tem idade para o desconto.\n"); 
    }

}