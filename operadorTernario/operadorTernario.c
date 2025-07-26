#include <stdio.h>

int main (){
    //int idade = 26;
   // int resultado;

    //operador ternario
    //condição ? verdadeiro : falso;

//exemplo 1 abaixo:

    /*idade >= 18 ? printf("Você é maior de idade.\n") : printf("Você é menor de idade.\n");*/

//exemplo 2:

    /*resultado = idade >= 18 ? 1 : 0;
        
    if(resultado == 1){
        printf("Você é maior de idade.\n");
    }else {
        printf("Você é menor de idade.\n");
    }*/

//exemplo 3:
    int numero1 = 28, numero2 = 50;
    int maior;

    numero1 > numero2 ? (maior = numero1) : (maior = numero2);
    printf("O numero maior é: %d\n", maior);

    if (numero1 > numero2){
        printf("O numero maior é: %d\n", numero1);
    }else{
        printf("O numero maior é: %d\n", numero2);
    }


    return 0;
}