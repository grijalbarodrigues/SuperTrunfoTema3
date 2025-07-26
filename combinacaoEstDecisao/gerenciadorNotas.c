#include <stdio.h>

int main (){
    int opcao;
    float nota1, nota2, media;

    printf("*** MENU GERENCIAMENTO DE ESTUDANTE ***\n");
    printf("1. Calcular a média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Insira a nota 1: \n");
        scanf("%f", &nota1);
        printf("Insira a nota 2: \n");
        scanf("%f", &nota2);
    
        //verificar se o valor da nota inserido é um valor valido - >= 0 e <= 10
        if ((nota1 >= 0 && nota1 <=10) && (nota2 >=0 && nota2 <= 10)){
            media = (nota1 + nota2)/2;
            printf("A média é: %.2f\n", media);
        }else{
            printf("A nota foi inserida incorretamente.\n");
        }      
    break;

    case 2:
        printf("Insira a média: \n");
        scanf("%f", &media);
                
        media >= 7 ? printf("O aluno está Aprovado!\n") : printf("O aluno está Reprovado!\n");
        
    break;
    
    case 3:
        printf("Você quer sair do programa.\n");
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

}