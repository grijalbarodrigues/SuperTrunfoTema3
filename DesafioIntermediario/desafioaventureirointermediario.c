#include <stdio.h>

int main (){
    
    //variaveis da carta 1
    char estado1[4], codigo1[5], cidade1[20];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibpercapita1;
    int pontoturistico1;
    float superPoder1;

    
    //entrada dos dados da primeira carta
    printf("Vamos cadastrar a primeira carta!\n");
    /*printf("Digite a letra do Estado: \n");
    scanf("%s", estado1);*/

    /*printf("Digite o código da carta: \n");
    scanf("%s", codigo1);*/

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população desta cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &pontoturistico1);
    
    //CALCULO DA DENSIDADE POPULACIONAL, PIB PER CAPITA E SUPER PODER DA CARTA 1: 
    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 / (float) populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 + (1/densidade1);

   //saída dos dados da primeira carta inseridos pelo usuário
    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.2lu habitantes\n",estado1,codigo1,cidade1,populacao1);
    printf("Área: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n",area1,pib1,pontoturistico1);
    printf("Densidade Populacional: %.2f hab./km²\nPIB per capita: %.2f reais\nSuper Poder Carta 1: %.2f\n", densidade1, pibpercapita1, superPoder1);


     //variaveis da carta 2
    char estado2[4], codigo2[4], cidade2[20];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibpercapita2;
    int pontoturistico2;
    float superPoder2;

    //inserção dos dados para cadastro da CARTA 2:

    printf("Vamos cadastrar a CARTA 2!\n");
    /*printf("Digite a letra do Estado: \n");
    scanf("%s", estado2);*/

    /*printf("Digite o código da carta: \n");
    scanf("%s", codigo2);*/

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população desta cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &pontoturistico2);

    //CALCULO DA DENSIDADE POPULACIONAL, PIB PER CAPITA E SUPER PODER DA CARTA 2: 
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / (float) populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + (1/densidade2);

    //impressão na tela dos dados cadastrados da CARTA 2
    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.2lu habitantes\n",estado2,codigo2,cidade2,populacao2);
    printf("Área: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n",area2,pib2,pontoturistico2);
    printf("Densidade Populacional: %.2f hab./km²\nPIB per capita: %.2f reais\nSuper Poder Carta 2: %.2f\n", densidade2, pibpercapita2, superPoder2);

    //RESULTADO DA BATALHA DAS CARTAS COM CONDICAO IF ELSE:
/*
    //condicional da população
    printf("***BATALHA DAS CARTAS***\n");
    printf("Comparação de cartas - ATRIBUTO: População\n");
    printf("Carta 1 - %s (%s): %lu habitantes.\n",cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes.\n",cidade2, estado2, populacao2);
    
        if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
    } else {
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
    }

    //condicional da área
    printf("Comparação de cartas - ATRIBUTO: Área\n");
    printf("Carta 1 - %s (%s): %.2f km².\n",cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km².\n",cidade2, estado2, area2);
    
    if (area1 > area2){
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
    } else {
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
    }

    //condicional do PIB
    printf("Comparação de cartas - ATRIBUTO: PIB\n");
    printf("Carta 1 - %s (%s): %.2f.\n",cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f.\n",cidade2, estado2, pib2);
    
    if (pib1 > pib2){
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
    } else {
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
    }

    //condicional da quantidade de pontos turisticos
    printf("Comparação de cartas - ATRIBUTO: Número de Pontos Turísticos.\n");
    printf("Carta 1 - %s (%s): %d pontos turísticos.\n",cidade1, estado1, pontoturistico1);
    printf("Carta 2 - %s (%s): %d pontos turísticos.\n",cidade2, estado2, pontoturistico2);
    
    if (pontoturistico1 > pontoturistico2){
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
    } else {
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
    }

    //condicional da densidade populacional - a menor vence!
    printf("Comparação de cartas - ATRIBUTO: Densidade Populacional.\n");
    printf("Carta 1 - %s (%s): %.2f. hab./km²\n",cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab./km².\n",cidade2, estado2, densidade2);
    
    if (densidade1 < densidade2){
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
    } else {
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
    }

    //condicional do pib per capita
    printf("Comparação de cartas - ATRIBUTO: PIB per capita.\n");
    printf("Carta 1 - %s (%s): %.2f reais.\n",cidade1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%s): %.2f reais.\n",cidade2, estado2, pibpercapita2);
    
    if (pibpercapita1 > pibpercapita2){
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
    } else {
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
    }

    //condicional do SuperPoder
    printf("Comparação de cartas - ATRIBUTO: Super Poder!.\n");
    printf("Carta 1 - %s (%s): %.2f pontos.\n",cidade1, estado1, superPoder1);
    printf("Carta 2 - %s (%s): %.2f pontos.\n",cidade2, estado2, superPoder2);
    
    if (superPoder1 > superPoder2){
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
    } else {
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
    }
    return 0;
*/
    int atributo;

    printf("***ESCOLHA O ATRIBUTO QUE QUER BATALHAR!***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &atributo);

    if(atributo < 1 || atributo > 5){
        printf("Você digitou uma opção inválida!\n");
        return 1;
    }

    switch (atributo)
    {
    case 1:
        printf("***Batalha entre %s e %s\n", cidade1, cidade2);
        printf("Você escolheu POPULAÇÃO para batalhar!\n");
        printf("A população de %s é: %d.\n",cidade1, populacao1);
        printf("A população de %s é: %d.\n",cidade2, populacao2);
        if (populacao1 > populacao2){
            printf("A Carta 1 venceu!\n");
        }else if(populacao1 < populacao2){
            printf("A Carta 2 venceu!\n");
        }
        else{
            printf("Empatou!\n");
        }
        break;

    case 2:
        printf("***Batalha entre %s e %s\n", cidade1, cidade2);
        printf("Você escolheu ÁREA para batalhar!\n");
        printf("A área de %s é: %.2f.\n",cidade1, area1);
        printf("A área de %s é: %.2f.\n",cidade2, area2);
        if (area1 > area2){
            printf("A Carta 1 venceu!\n");
        }else if(area1 < area2){
            printf("A Carta 2 venceu!\n");
        }
        else{
            printf("Empatou!\n");
        }
        break;

    case 3:
        printf("***Batalha entre %s e %s\n", cidade1, cidade2);
        printf("Você escolheu PIB para batalhar!\n");
        printf("O PIB de %s é: %.2f.\n",cidade1, pib1);
        printf("O PIB de %s é: %.2f.\n",cidade2, pib2);
        if (pib1 > pib2){
            printf("A Carta 1 venceu!\n");
        }else if(pib1 < pib2){
            printf("A Carta 2 venceu!\n");
        }
        else{
            printf("Empatou!\n");
        }
        break;
    
    case 4:
        printf("***Batalha entre %s e %s\n",  cidade1, cidade2);
        printf("Você escolheu Número de pontos turísticos para batalhar!\n");
        printf("O Número de pontos turísticos de %s é: %d.\n",cidade1, pontoturistico1);
        printf("O Número de pontos turísticos de %s é: %d.\n",cidade2, pontoturistico2);
        if (pontoturistico1> pontoturistico2){
            printf("A Carta 1 venceu!\n");
        }else if(pontoturistico1 < pontoturistico2){
            printf("A Carta 2 venceu!\n");
        }
        else{
            printf("Empatou!\n");
        }
        break;

    case 5:
        printf("***Batalha entre %s e %s\n",  cidade1, cidade2);
        printf("Você escolheu Densidade Demográfica para batalhar!\n");
        printf("O Densidade Demográfica de %s é: %.2f.\n",cidade1, densidade1);
        printf("O Densidade Demográfica de %s é: %.2f.\n",cidade2, densidade2);
        if (densidade1 < densidade2){
            printf("A Carta 1 venceu!\n");
        }else if(densidade1 > densidade2){
            printf("A Carta 2 venceu!\n");
        }
        else{
            printf("Empatou!\n");
        }
        break;

    default:
        break;
    }

    return 0;

    

}