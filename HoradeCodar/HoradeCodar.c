#include <stdio.h>

int main (){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo;
    estoqueMinimo = 1000;

    printf("Insira a temperatura\n");
    scanf("%f", &temperatura);

    printf("insira a umidade\n");
    scanf("%f", &umidade);

    printf("insira o estoque\n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("A temperatura está alta!\n");
    } else {
        printf("A temperatura está boa!\n");
    }

    if (umidade > 50){
        printf("A umidade está elevada!\n");
    } else {
        printf("A umidade está boa!\n");
    }

    if (estoque < estoqueMinimo){
        printf("O estoque está abaixo do mínimo\n");
    }else {
        printf("O estoque está bom!\n");
    }

}