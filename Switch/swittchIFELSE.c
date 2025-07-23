#include <stdio.h>

int main (){
    // exemplo usando o if else

    char dia;

    printf("Insira o dia da semana: \n");
    scanf("%c", &dia);

    //exemplo usando o if else
/*
    if (dia == 1){
        printf("DOMINGO\n");
    }else if (dia == 2){
        printf("SEGUNDA\n");
    }else if (dia == 3){
        printf("TERÇA\n");
    }else if (dia == 4){
        printf("QUARTA\n");
    }else if (dia == 5){
        printf("QUINTA\n");
    }else if (dia == 6){
        printf("SEXTA\n");
    }else  {
        printf("SABADO\n");
    }
 */       

//exemplo usando o switch
// so funciona com char, int ou enum

    switch (dia)
    {
    case 'd':
        printf("DOMINGO\n");
    break;
    case 's':
        printf("SEGUNDA\n");
    break;
    case 't':
        printf("TERÇA\n");
    break;
    case 'q':
        printf("QUARTA\n");
    break;
    case 'i':
        printf("QUINTA\n");
    break;
    case 'e':
        printf("SEXTA\n");
    break;
    case 'a':
        printf("SABADO\n");
    break;
    default:
        printf("insira um valor válido\n");        
    break;
    }

    return 0;


}