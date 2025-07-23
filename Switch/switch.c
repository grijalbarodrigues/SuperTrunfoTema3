#include <stdio.h>

int main (){

    //switch - como se fosse um menu de possibilidades para ser executado
    //exemplo 1

    char letra;

    printf("Insira uma letra\n");
    scanf("%c", &letra);

    switch (letra){
    
    case 'a': 
        printf("a letra inserida foi a\n");
    break;
    case 'b':
        printf("a letra inserida foi b\n");
    break;
    case 'c':
        printf("a letra inserida foi c\n");
    break;
    default:
        printf("A letra inserida nao foi nem a, nem b, e nem c\n");
    break;
    }

}