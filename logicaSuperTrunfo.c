#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char estado[15];
    char codigo[15];
    char cidade[15];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float percapta;
    float superpoder;
    
    char estado2 [15];
    char codigo2 [15];
    char cidade2 [15];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float percapta2;
    float superpoder2;

    
    
    
    // Cadastro da Carta1:
    printf("## Insira os dados da Carta 1 ##\n\n");
    
    printf("Estado da carta: \n");
    scanf("%s",estado);
    
    printf("Codigo da carta: \n");
    scanf("%s",codigo);
    
    printf("Nome da cidade: \n");
    scanf("%s",cidade);
    
    printf("Populacao da cidade: \n");
    scanf("%d",&populacao);
    
    printf("Area da cidade: \n");
    scanf("%f",&area);
    
    printf("PIB da cidade: \n");
    scanf("%f",&pib);
    
    printf("Pontos turisticos: \n");
    scanf("%d",&pontos);

    // Calculo densidade populacional e percapta carta 1

    densidade = populacao / area;
    percapta = pib / populacao;

    // Calculo superpoder carta 1

    superpoder = (populacao + area + pib + percapta + (float)pontos) - densidade;

    // Exibição dos Dados das Carta2:
    printf("\nObrigado pelo cadastro. Esses sao os dados da Carta 1:\n\n Estado: %s\n Codigo: %s\n Cidade: %s\n Populacao: %d\n Area: %.0f Km²\n PIB: %.2f Bilhoes de reais\n Pontos Turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: R$ %.2f \n Super Poder: %.0f Pontos", estado , codigo , cidade , populacao , area , pib , pontos , densidade , percapta, superpoder);
    
    // Cadastro da Carta2:
    printf("\n\n## Insira agora os dados da carta 2 ##\n\n");
    
    
    printf("Estado da carta: \n");
    scanf("%s",estado2);
    
    printf("Codigo da carta: \n");
    scanf("%s",codigo2);
    
    printf("Nome da cidade: \n");
    scanf("%s",cidade2);
    
    printf("Populacao da cidade: \n");
    scanf("%d",&populacao2);
    
    printf("Area da cidade: \n");
    scanf("%f",&area2);
    
    printf("PIB da cidade: \n");
    scanf("%f",&pib2);
    
    printf("Pontos turisticos: \n");
    scanf("%d",&pontos2);

    // Calculo densidade populacional e percapta carta2
    densidade2 = populacao2 / area2;
    percapta2 = pib2 / populacao2;
    
    // Calculo superpoder carta 2

    superpoder2 = (populacao2 + area2 + pib2 + percapta2 + (float)pontos2) - densidade2;

    // Exibição dos Dados das Carta2:

    printf("\nObrigado pelo cadastro.Esses sao os dados da Carta 2:\n\n Estado: %s\n Codigo: %s\n Cidade: %s\n Populacao: %d\n Area: %.0f Km²\n PIB: %.2f Bilhoes de reais\n Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km²\n PIB per Capta: R$ %.2f \n Super Poder: %.0f Pontos", estado2 , codigo2 , cidade2 , populacao2 , area2 , pib2 , pontos2 , densidade2 , percapta2, superpoder2);

    
    // comparacao das cartas com estruturas de decisao//
     
    printf("\n\n##Comparacao final entre as cartas##\n\n");
    
     // pontos populacao
     
     printf("Pontos População: ");
     if (populacao > populacao2){
         printf("Carta1 Venceu!\n");
     }
     else {printf("Carta2 Venceu!\n");
     
     }
     
    // pontos area
     
     printf("Pontos Área: ");
     if (area > area2){
         printf("Carta1 Venceu!\n");
     }
     else {printf("Carta2 Venceu!\n");
     
     }
     
    // pontos PIB
     
     printf("Pontos PIB: ");
     if (pib > pib2){
         printf("Carta1 Venceu!\n");
     }
     else {printf("Carta2 Venceu!\n");
     
     }
     
     
    // pontos PIB Per capta
     
     printf("Pontos PIB Per capta: ");
     if (percapta > percapta2){
         printf("Carta1 Venceu!\n");
     }
     else {printf("Carta2 Venceu!\n");
     
     }
     
    
    // pontos Densidade Populacional
     
     printf("Pontos Densidade Populacional: ");
     if (densidade < densidade2){
         printf("Carta1 Venceu!\n");
     }
     else {printf("Carta2 Venceu!\n");
     
     }
     
     
    // pontos Pontos Turisticos
     
     printf("Pontos Pontos Turisticos: ");
     if (pontos > pontos2){
         printf("Carta1 Venceu!\n");
     }
     else {printf("Carta2 Venceu!\n");
     
     }
     
     
    // pontos Super Poder
     
     printf("Pontos Super Poder: ");
     if (superpoder > superpoder2){
         printf("Carta1 Venceu!\n");
     }
     else {printf("Carta2 Venceu!\n\n");
     
     }
     
    // Calculo total
     
     printf("A Vencedora da rodada foi: ");
     if (superpoder > superpoder2){
         printf("Carta1!\n");
     }
     else {printf("Carta2!\n");
     
     }

    return 0;
}
