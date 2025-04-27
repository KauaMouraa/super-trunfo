#include <stdio.h>
#include <string.h>

int main() {
    int escolha;

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
        scanf("%d", &escolha);
    
        printf("\n");
    
        switch (escolha) {
            case 1:
                if (populacao1 > populacao2)
                    printf("Resultado: Carta 1 venceu!\n");
                else
                    printf("Resultado: Carta 2 venceu!\n");
                break;
            case 2:
                if (area1 > area2)
                    printf("Resultado: Carta 1 venceu!\n");
                else
                    printf("Resultado: Carta 2 venceu!\n");
                break;
            case 3:
                if (pontos1 > pontos2)
                    printf("Resultado: Carta 1 venceu!\n");
                else
                    printf("Resultado: Carta 2 venceu!\n");
                break;
            case 4:
                if (densidade1 > densidade2)
                    printf("Resultado: Carta 1 venceu!\n");
                else
                    printf("Resultado: Carta 2 venceu!\n");
                break;
            case 5:
                if (pibPerCapita1 > pibPerCapita2)
                    printf("Resultado: Carta 1 venceu!\n");
                else
                    printf("Resultado: Carta 2 venceu!\n");
                break;
            default:
                printf("Opção inválida! Por favor, escolha um número de 1 a 5.\n");
                break;
        }
    
        return 0;
    }
    