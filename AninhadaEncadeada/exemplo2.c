#include <stdio.h>

int main (){
    int nota;

    printf("Insira a nota do aluno: \n");
    scanf("%d", &nota);

    // A >= 90
    // B >= 80
    // C >= 70
    // D >= 60
    // E >= 50
    // F < 60

    if (nota >= 90){
        printf("Nota do aluno é A!\n");
    }else if (nota >= 80){
        printf("Nota do aluno é B!\n");
    } else if (nota >= 70){
        printf("Nota do aluno é C!\n");    
    } else if (nota >= 60){
        printf("nota do aluno é D!\n");    
    } else if (nota >= 50){
        printf("nota do aluno é E!\n");
    } else{
        printf ("Nota do aluno é F!\n");
    }

}