#include <stdio.h>
#include <string.h>

int main() {

    // Dados da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1;

    // Dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superpoder1,superpoder2;

    // Entrada da primeira carta
    printf("---- Carta 1 ----\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar();

    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';


    printf("População: ");

    
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    //Saida de resultado da Primeira carta
    printf("\n---- Carta 1 ----\n");
    printf("Estado: %c \n", estado1);
    printf("Código da carta: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos Turísticos: %d \n", pontos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f \n", pibPerCapita1);

    
    // Entrada da segunda carta
    
    printf("\n---- Carta 2 ----\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    getchar();

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';


    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    //Saida de resultado da segunda carta

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f \n", pibPerCapita2);


    //calculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    superpoder1 = (float)(populacao1+area1+pib1+pontos1+pibPerCapita1-densidade1);
    superpoder2 = (float)(populacao2+area2+pib2+pontos2+pibPerCapita2-densidade2);


    // Resultados das comparações
    printf("\n---- Comparações ----\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu  (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}