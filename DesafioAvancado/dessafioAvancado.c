#include <stdio.h>
#include <string.h>

int main (){
    
    //variaveis da carta 1
    char estado1, codigo1[5], cidade1[20];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibpercapita1;
    int pontoturistico1;
    float superPoder1;

    
    //entrada dos dados da primeira carta
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\\n")] = '\\0'; // Remove a quebra de linha

    printf("Digite o nome da cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\\n")] = '\\0';// Remove a quebra de linha

    printf("Digite a população desta cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB desta cidade em bilhões de reais: \n");
    scanf("%f", &pib1);

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &pontoturistico1);
    
    //CALCULO DA DENSIDADE POPULACIONAL, PIB PER CAPITA E SUPER PODER DA CARTA 1:
    //com ajustes para verificar se o denominador é diferente de zero
    
    //ajuste para densidade1:
    if (area1 != 0){
        densidade1 = (float) populacao1 / area1;
    } else{
        printf("Atenção! Área da Carta 1 é zero. A densidade populacional será definida com 0\n");
    }

     //ajuste para pibpercapita1:
    
    if (populacao1 != 0){
        pibpercapita1 = (pib1 * 1000000000.0f) / (float) populacao1;
    } else{
        pibpercapita1 = 0.0f;
        printf("Atenção! População da Carta 1 é zero. O PIB per capita será definido com 0\n");
    }

    //ajuste para o SuperPoder1:
    float inversoDensidade1 = 0.0f/densidade1; // inicia com valor padrao zero
    
    if (densidade1 != 0.0f){
        inversoDensidade1 = 1.0f/densidade1;
    } 
    superPoder1 = populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 + inversoDensidade1;
    

   //saída dos dados da primeira carta inseridos pelo usuário
    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu habitantes\n",estado1,codigo1,cidade1,populacao1);
    printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n",area1,pib1,pontoturistico1);
    printf("Densidade Populacional: %.2f hab./km²\nPIB per capita: %.2f reais/hab.\nSuper Poder Carta 1: %.2f\n", densidade1, pibpercapita1, superPoder1);


     //variaveis da carta 2
    char estado2, codigo2[5], cidade2[20];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibpercapita2;
    int pontoturistico2;
    float superPoder2;

    //inserção dos dados para cadastro da CARTA 2:

    printf("Vamos cadastrar a CARTA 2!\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo1, "\\n")] = '\\0'; // Remove a quebra de linha

    printf("Digite o nome da cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade1, "\\n")] = '\\0';// Remove a quebra de linha

    printf("Digite a população desta cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB desta cidade em bilhões de reais: \n");
    scanf("%f", &pib2);

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &pontoturistico2);

    //CALCULO DA DENSIDADE POPULACIONAL, PIB PER CAPITA E SUPER PODER DA CARTA 2:
    //com ajustes para verificar se o denominador é diferente de zero
    
    //ajuste para densidade2:
    if (area2 != 0){
        densidade2 = (float) populacao2 / area2;
    } else{
        printf("Atenção! Área da Carta 2 é zero. A densidade populacional será definida com 0\n");
    }

     //ajuste para pibpercapita2:
    
    if (populacao2 != 0){
        pibpercapita2 = (pib2 * 1000000000.0f) / (float) populacao2;
    } else{
        pibpercapita2 = 0.0f;
        printf("Atenção! População da Carta 2 é zero. O PIB per capita será definido com 0\n");
    }

    //ajuste para o SuperPoder2:
    float inversoDensidade2 = 0.0f/densidade2;// inicia com valor padrao zero
    
    if (densidade2 != 0.0f){
        inversoDensidade2 = 1.0f/densidade2;
    } 
    superPoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + inversoDensidade2;

    //impressão na tela dos dados cadastrados da CARTA 2
    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu habitantes\n",estado2,codigo2,cidade2,populacao2);
    printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n",area2,pib2,pontoturistico2);
    printf("Densidade Populacional: %.2f hab./km²\nPIB per capita: %.2f reais/hab.\nSuper Poder Carta 2: %.2f\n", densidade2, pibpercapita2, superPoder2);

//###############CODIGO DESAFIO NIVEL MESTRE:
    int atributo1, atributo2;
    int batalha1, batalha2;
    float batalhaTotal1, batalhaTotal2;
    
    

    printf("***BEM-VINDO AO JOGO***\n");
    printf("Você irá batalhar com dois atributos!\n");
    printf("COM QUAL ATRIBUTO QUER BATALHAR?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");

    printf("Escolha o 1º Atributo que irá batalhar:");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        printf("Você escolheu POPULAÇAO como 1º atributo.\n");
        batalha1 = populacao1 > populacao2 ? 1 : 0;
        
        break;
    case 2:
        printf("Você escolheu ÁREA como 1º atributo.\n");
        batalha1 = area1 > area2 ? 1:0;
        break;
    case 3:
        printf("Você escolheu PIB como 1º atributo.\n");
        batalha1 = pib1 > pib2 ? 1:0;    
        break;
    case 4:
        printf("Você escolheu NÚMERO DE PONTOS TURÍSTICOS como 1º atributo.\n");
        batalha1 = pontoturistico1 > pontoturistico2 ? 1:0;
        break;
    case 5:
        printf("Você escolheu DENSIDADE DEMOGRÁFICA como 1º atributo.\n");
        batalha1 = densidade1 < densidade2 ? 1:0;
        break;
    
    default:
        printf("Opção inválida! Escolha uma opção digitando um número de 1 a 5.\n");
        break;
    }


    printf("Agora escolha o 2º Atributo (diferente do primeiro) que irá batalhar:\n");
    printf("COM QUAL ATRIBUTO QUER BATALHAR?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
        printf("Você escolheu o mesmo atributo duas vezes.\n");
    }else {
        switch (atributo2)
        {
        case 1:
        printf("Você escolheu POPULAÇAO como 2º atributo.\n");
        batalha2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu ÁREA como 2º atributo.\n");
        batalha2 = area1 > area2 ? 1:0;
        break;
    case 3:
        printf("Você escolheu PIB como 2º atributo.\n");
        batalha2 = pib1 > pib2 ? 1:0;    
        break;
    case 4:
        printf("Você escolheu NÚMERO DE PONTOS TURÍSTICOS como 2º atributo.\n");
        batalha2 = pontoturistico1 > pontoturistico2 ? 1:0;
        break;
    case 5:
        printf("Você escolheu DENSIDADE DEMOGRÁFICA como 2º atributo.\n");
        batalha2 = densidade1 < densidade2 ? 1:0;
        break;
    
    default:
        printf("Opção inválida! Escolha uma opção digitando um número de 1 a 5.\n");
        break;
    }

        printf("*** Cidade %s vs Cidade %s ***\n", cidade1, cidade2);
        if (batalha1 ==1 && batalha2 ==1){//GANHA NOS DOIS ATRIBUTUOS 
            printf("A Carta 1 venceu nos 2 atributos escolhidos.\n");
                switch (atributo1){
                case 1: printf("POPULAÇÃO - Cidade 1: %d habitantes.\n", populacao1);
                        printf("POPULAÇÃO - Cidade 2: %d habitantes.\n", populacao2); break;
                        
                case 2: printf("ÁREA - Cidade 1: %.2f km².\n", area1); 
                        printf("ÁREA - Cidade 2: %.2f km².\n", area2); break;
                case 3: printf("PIB - Cidade 1: %.2f bilhões de reais.\n", pib1); 
                        printf("PIB - Cidade 2: %.2f bilhões de reais.\n", pib2); break;
                case 4: printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 1: %d pontos turísticos.\n", pontoturistico1); 
                        printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 2: %d pontos turísticos.\n", pontoturistico2); break;
                case 5: printf("DENSIDADE DEMOGRÁFICA - Cidade 1: %.2f hab./km².\n", densidade1); 
                        printf("DENSIDADE DEMOGRÁFICA - Cidade 2: %.2f hab./km².\n", densidade2); break;
                }

                switch (atributo2){
                case 1: printf("POPULAÇÃO - Cidade 1: %d habitantes.\n", populacao1); 
                        printf("POPULAÇÃO - Cidade 2: %d habitantes.\n", populacao2); break;
                case 2: printf("ÁREA - Cidade 1: %.2f km².\n", area1); 
                        printf("ÁREA - Cidade 2: %.2f km².\n", area2); break;
                case 3: printf("PIB - Cidade 1: %.2f bilhões de reais.\n", pib1); 
                        printf("PIB - Cidade 2: %.2f bilhões de reais.\n", pib2); break;
                case 4: printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 1: %d pontos turísticos.\n", pontoturistico1);
                        printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 2: %d pontos turísticos.\n", pontoturistico2); break;
                case 5: printf("DENSIDADE DEMOGRÁFICA - Cidade 1: %.2f hab./km².\n", densidade1); 
                        printf("DENSIDADE DEMOGRÁFICA - Cidade 2: %.2f hab./km².\n", densidade2); break;
                }
        }else if  (batalha1 =! batalha2){//PERDE EM UM E GANHA EM OUTRO
            printf("Jogo empatou! Cada carta venceu um  atributo.\n");
                switch (atributo1){
                case 1: printf("POPULAÇÃO - Cidade 1: %d habitantes.\n", populacao1);
                        printf("POPULAÇÃO - Cidade 2: %d habitantes.\n", populacao2); break;
                case 2: printf("ÁREA - Cidade 1: %.2f km².\n", area1); 
                        printf("ÁREA - Cidade 2: %.2f km².\n", area2); break;
                case 3: printf("PIB - Cidade 1: %.2f bilhões de reais.\n", pib1); 
                        printf("PIB - Cidade 2: %.2f bilhões de reais.\n", pib2); break;
                case 4: printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 1: %d pontos turísticos.\n", pontoturistico1); 
                        printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 2: %d pontos turísticos.\n", pontoturistico2); break;
                case 5: printf("DENSIDADE DEMOGRÁFICA - Cidade 1: %.2f hab./km².\n", densidade1); 
                        printf("DENSIDADE DEMOGRÁFICA - Cidade 2: %.2f hab./km².\n", densidade2); break;
                }

                switch (atributo2){
                case 1: printf("POPULAÇÃO - Cidade 1: %d habitantes.\n", populacao1); 
                        printf("POPULAÇÃO - Cidade 2: %d habitantes.\n", populacao2); break;
                case 2: printf("ÁREA - Cidade 1: %.2f km².\n", area1); 
                        printf("ÁREA - Cidade 2: %.2f km².\n", area2); break;
                case 3: printf("PIB - Cidade 1: %.2f bilhões de reais.\n", pib1); 
                        printf("PIB - Cidade 2: %.2f bilhões de reais.\n", pib2); break;
                case 4: printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 1: %d pontos turísticos.\n", pontoturistico1);
                        printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 2: %d pontos turísticos.\n", pontoturistico2); break;
                case 5: printf("DENSIDADE DEMOGRÁFICA - Cidade 1: %.2f hab./km².\n", densidade1); 
                        printf("DENSIDADE DEMOGRÁFICA - Cidade 2: %.2f hab./km².\n", densidade2); break;
                }
        }else{//PERDE NOS DOIS
            printf("A Carta 1 perdeu nos dois atributos escolhidos!\n");
                switch (atributo1){
                case 1: printf("POPULAÇÃO - Cidade 1: %d habitantes.\n", populacao1);
                        printf("POPULAÇÃO - Cidade 2: %d habitantes.\n", populacao2); break;
                case 2: printf("ÁREA - Cidade 1: %.2f km².\n", area1); 
                        printf("ÁREA - Cidade 2: %.2f km².\n", area2); break;
                case 3: printf("PIB - Cidade 1: %.2f bilhões de reais.\n", pib1); 
                        printf("PIB - Cidade 2: %.2f bilhões de reais.\n", pib2); break;
                case 4: printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 1: %d pontos turísticos.\n", pontoturistico1); 
                        printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 2: %d pontos turísticos.\n", pontoturistico2); break;
                case 5: printf("DENSIDADE DEMOGRÁFICA - Cidade 1: %.2f hab./km².\n", densidade1); 
                        printf("DENSIDADE DEMOGRÁFICA - Cidade 2: %.2f hab./km².\n", densidade2); break;
                }

                switch (atributo2){
                case 1: printf("POPULAÇÃO - Cidade 1: %d habitantes.\n", populacao1); 
                        printf("POPULAÇÃO - Cidade 2: %d habitantes.\n", populacao2); break;
                        
                case 2: printf("ÁREA - Cidade 1: %.2f km².\n", area1); 
                        printf("ÁREA - Cidade 2: %.2f km².\n", area2); break;
                case 3: printf("PIB - Cidade 1: %.2f bilhões de reais.\n", pib1); 
                        printf("PIB - Cidade 2: %.2f bilhões de reais.\n", pib2); break;
                case 4: printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 1: %d pontos turísticos.\n", pontoturistico1);
                        printf("NÚMERO DE PONTOS TURÍSTICOS - Cidade 2: %d pontos turísticos.\n", pontoturistico2); break;
                case 5: printf("DENSIDADE DEMOGRÁFICA - Cidade 1: %.2f hab./km².\n", densidade1); 
                        printf("DENSIDADE DEMOGRÁFICA - Cidade 2: %.2f hab./km².\n", densidade2); break;
                }
        }
    return 0;
}}
