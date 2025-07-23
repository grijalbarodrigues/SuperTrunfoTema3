#include <stdio.h>

int main (){
    int numero;
    int resto = 0;

    printf("Digite um numero: \n");
    scanf("%d", &numero);


    if (numero != 0){
        if (numero > 0){
                if(numero % 2 == resto){
                    printf("O numero é positivo e par\n");
                }else {
                    printf("O numero é positivo impar\n");
                }
            
                
        }else if (numero < 0 && numero % 2 == resto){
            printf("O numero é negativo e par\n");
        }else {
            printf("O numero é negativo e impar\n");
        }

    }else {
        printf("O numero é igual a Zero\n");
    }


}