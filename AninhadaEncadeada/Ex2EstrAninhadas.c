#include <stdio.h>

int main (){
    //EXEMPLO 2: verificar se a pessoa atende a 3 requisitos para programa social
    // requisito 1 - idade entre 18 e 65 anos
    // requisito 2 - renda menor 3000
    // requisito 3 - numero de dependentes maior q 2

    int idade, dependentes;
    float renda;

    printf("Digite a idade do candidato: \n");
    scanf("%d", &idade);
    printf("Digite a renda do candidato: \n");
    scanf("%f", &renda);
    printf("Digite quantos dependentes tem o candidato: \n");
    scanf("%d", &dependentes);

    if (idade >= 18 &&  idade < 65){
        if(renda < 3000){
            if(dependentes > 2){
                printf("Parabéns! Você atende a todos os requisitos para participar do programa!\n");
            }else {
                printf("Você nao atende ao critério dependentes\n");
            }
        } else {
            printf("Você tem idade, mas a renda está acima do permitido!\n");
        }
    }else {
        printf("Você não tem idade para participar do programa social!\n");
    }


}