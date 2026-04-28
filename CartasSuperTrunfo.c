#include <stdio.h>

int main() {
 // Variáveis para as cartas
    // ===== CARTA 1 =====
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float pibPerCapita1;
    float densidadePopulacional1;
    float SuperPoder1;

//// saudação inicial ao usuario
   printf("Bem Vindo ao Super Trunfo de Cidades Brasileiras! \n");
   printf(" \n");
   printf("Eu serei seu guia nessa aventura! \n");
   printf(" \n");
   printf("Vamos começar com a Carta 1! \n");


    // Entrada de dados da Carta 1

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);
    

    printf("Informe o Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a Area (km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("A densidade populacional da cidade é: %.2f habitantes/km²\n", (float)populacao1 / area1);
    printf("O PIB per capita da cidade é: %.2f reais\n", (pib1 * 1000000000) / populacao1); 

    // ===== CÁLCULOS CARTA 1 =====
    pibPerCapita1 = pib1 / populacao1;
    densidadePopulacional1 = populacao1 / area1;
    SuperPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

   printf("O Super Poder da Carta 1 é: %.2f\n", SuperPoder1);

   printf("\n=== -------- ===\n");

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
    float pibPerCapita2;
    float SuperPoder2;

    // Entrada de dados da Carta 2
    
    printf("\n=== -------- ===\n");

    printf(" Agora vamos para a Carta 2! \n");

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Codigo da Carta:");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a Area (km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("A densidade populacional da cidade é: %.2f habitantes/km²\n", (float)populacao2 / area2);
    printf("O PIB per capita da cidade é: %.2f reais\n", (pib2 * 1000000000) / populacao2);

    // ===== CÁLCULOS CARTA 2 =====
    pibPerCapita2 = pib2 / populacao2;
    densidadePopulacional2 = populacao2 / area2;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

   printf("O Super Poder da Carta 2 é: %.2f\n", SuperPoder2);

    // ===== EXIBIÇÃO =====
         printf("\n=== -------- ===\n");

    printf(" Perfeito!! Voce cadastrou as duas cartas!  \n");

    printf("\n=== ===\n");

    printf(" Agora vamos comparar as cartas e descobrir qual é a melhor! \n");

    // ===== COMPARAÇÕES =====
    printf("\n=== COMPARACAO DAS CARTAS ===\n");


// População
printf("Populacao: Carta %d venceu (%d)\n",
       populacao1 > populacao2 ? 1 : 2,
       populacao1 > populacao2);

// Área
printf("Area: Carta %d venceu (%d)\n",
       area1 > area2 ? 1 : 2,
       area1 > area2);

// PIB
printf("PIB: Carta %d venceu (%d)\n",
       pib1 > pib2 ? 1 : 2,
       pib1 > pib2);

// Pontos Turísticos
printf("Pontos Turisticos: Carta %d venceu (%d)\n",
       pontosTuristicos1 > pontosTuristicos2 ? 1 : 2,
       pontosTuristicos1 > pontosTuristicos2);

// Densidade Populacional (MENOR vence)
printf("Densidade Populacional: Carta %d venceu (%d)\n",
       densidadePopulacional1 < densidadePopulacional2 ? 1 : 2,
       densidadePopulacional1 < densidadePopulacional2);

// PIB per Capita
printf("PIB per Capita: Carta %d venceu (%d)\n",
       pibPerCapita1 > pibPerCapita2 ? 1 : 2,
       pibPerCapita1 > pibPerCapita2);

// Super Poder
printf("Super Poder: Carta %d venceu (%d)\n",
       SuperPoder1 > SuperPoder2 ? 1 : 2,
       SuperPoder1 > SuperPoder2);

  printf("\n=== ===\n");


   
    return 0;
}