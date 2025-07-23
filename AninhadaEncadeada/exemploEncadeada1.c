#include <stdio.h>

int main (){
    int idade;

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    //crianca < 12
    //adolescente 12 <= x < 18
    //adulto 18 <= x < 60
    //idoso > 60

    if (idade > 60){
        printf("Você é idoso!\n");
    } else if (idade <= 60 && idade >= 18){
        printf("você é adulto!\n");
    } else if (idade < 18 &&  idade >= 12){
        printf("VocÊ é adolescente!\n");
    } else {
        printf("você é criança!\n");
    }

}