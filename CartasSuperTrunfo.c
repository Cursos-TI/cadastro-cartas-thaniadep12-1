#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float PibPerCapita1;

//// saudação inicial ao usuario
   printf("Bem Vindo ao Super Trunfo de Cidades Brasileiras! \n");
   printf(" \n");
   printf("Eu serei seu guia nessa aventura! \n");
   printf(" \n");
   printf("Vamos começar com a Carta 1! \n");


    // Entrada de dados da Carta 1

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    

    printf("Codigo da Carta:  ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("A densidade populacional da cidade é: %.2f habitantes/km²\n", (float)populacao1 / area1);
    printf("O PIB per capita da cidade é: %.2f reais\n", (pib1 * 1000000000) / populacao1); 

    printf(" Perfeito!! Voce cadastrou a Carta 1! \n");

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float PibPerCapita2;

    // Entrada de dados da Carta 2
    
    
    printf(" Agora vamos para a Carta 2! \n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf(" Codigo da Carta  :  ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("A densidade populacional da cidade é: %.2f habitantes/km²\n", (float)populacao2 / area2);
    printf("O PIB per capita da cidade é: %.2f reais\n", (pib2 * 1000000000) / populacao2);
    // ===== EXIBIÇÃO =====

    printf(" Perfeito!! Voce cadastrou as duas cartas!  \n");



    return 0;
}