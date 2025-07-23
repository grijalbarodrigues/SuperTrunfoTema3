#include <stdio.h>

int main (){
    int idade = 40;
    float altura = 1.75;

    //o que o cod. está fazendo aqui:
    // idade >= 18 --> verdadeiro
    // idade <= 30 --> falso
    //verdadeiro && falso --> falso
    // falso && altura > 1.70 (verdadeiro) --> falso
    // por isso retorna o else

    if (idade >= 18 && idade <=30 && altura > 1.70){
        printf("Você está dentro da faixa etária e tem altura adequada\n");
    } else {
        printf("Você não atende aos requisitos de idade e altura\n");
    }


}