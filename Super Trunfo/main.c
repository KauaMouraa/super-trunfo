#include <stdio.h>
#include <string.h>

int main() {
    int escolha1, escolha2;
    float somaCarta1, somaCarta2;

    // Dados da primeira carta
    char estado1, codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1, superpoder1;
    int pontos1;

    // Dados da segunda carta
    char estado2, codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2, superpoder2;
    int pontos2;

    // Entrada da primeira carta
    printf("---- Carta 1 ----\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", &codigo1);

    getchar();

    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontos1);
    
    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 - densidade1;
    
    // Saída da primeira carta
    printf("\n---- Carta 1 ----\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    
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
    scanf("%lu", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    
    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 - densidade2;
    
    // Saída da segunda carta
    printf("\n---- Carta 2 ----\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    
    // Escolha de atributo para comparação
    printf("\nEscolha qual atributo você deseja comparar:\n");
    printf("[1] População\n[2] Área\n[3] Pontos Turísticos\n[4] Densidade Demográfica\n[5] PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    if (escolha1 == 1) {
        printf("[2] Área\n[3] PIB\n[4] Pontos Turísticos\n[5] Densidade Populacional\n[6] PIB per Capita\n");
        scanf("%d", &escolha2);
    } else if (escolha1 == 2) {
        printf("[1] População\n[3] PIB\n[4] Pontos Turísticos\n[5] Densidade Populacional\n[6] PIB per Capita\n");
        scanf("%d", &escolha2);
    } else if (escolha1 == 3) {
        printf("[1] População\n[2] Área\n[4] Pontos Turísticos\n[5] Densidade Populacional\n[6] PIB per Capita\n");
        scanf("%d", &escolha2);
    } else if (escolha1 == 4) {
        printf("[1] População\n[2] Área\n[3] PIB\n[5] Densidade Populacional\n[6] PIB per Capita\n");
        scanf("%d", &escolha2);
    } else if (escolha1 == 5) {
        printf("[1] População\n[2] Área\n[3] PIB\n[4] Pontos Turísticos\n[6] PIB per Capita\n");
        scanf("%d", &escolha2);
    } else if (escolha1 == 6) {
        printf("[1] População\n[2] Área\n[3] PIB\n[4] Pontos Turísticos\n[5] Densidade Populacional\n");
        scanf("%d", &escolha2);
    }

    float valor1 = (escolha1 == 1) ? populacao1 :
                   (escolha1 == 2) ? area1 :
                   (escolha1 == 3) ? pib1 :
                   (escolha1 == 4) ? pontos1 :
                   (escolha1 == 5) ? densidade1 : pibPerCapita1;

    float valor2 = (escolha2 == 1) ? populacao2 :
                   (escolha2 == 2) ? area2 :
                   (escolha2 == 3) ? pib2 :
                   (escolha2 == 4) ? pontos2 :
                   (escolha2 == 5) ? densidade2 : pibPerCapita2;

    // Comparação e exibição dos resultados dos atributos
    printf("\nComparação entre os atributos selecionados:\n");
    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, valor2);
    printf("Resultado do primeiro atributo: %s\n", (valor1 > valor2) ? "Carta 1 Venceu!" : (valor1 < valor2) ? "Carta 2 Venceu!" : "Empate!");

    // Soma dos atributos para as cartas
    somaCarta1 = valor1 + valor2;
    somaCarta2 = valor1 + valor2;

    // Comparação final (soma dos atributos)
    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f\n", somaCarta1);
    printf("Carta 2: %.2f\n", somaCarta2);

    // Resultado final
    printf("Resultado final: %s\n", (somaCarta1 > somaCarta2) ? "Carta 1 Venceu a rodada!" : (somaCarta1 < somaCarta2) ? "Carta 2 Venceu a rodada!" : "Empate na rodada!");


return 0;
}
    