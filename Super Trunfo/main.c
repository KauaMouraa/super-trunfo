#include <stdio.h>

int main() {

    // Dados da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada da primeira carta
    printf("---- Carta 1 ----\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("---- Nome da cidade ----\n");
    printf("Se houver espaço entre o nome da cidade, coloque um ''_'' ao inves de espaço \n");
    printf("Exemplo: Rio_de_Janeiro \n");
    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);


    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada da segunda carta
    
    printf("\n---- Carta 2 ----\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("---- Nome da cidade ----\n");
    printf("Se houver espaço entre o nome da cidade, coloque um ''_'' ao inves de espaço \n");
    printf("Exemplo: Rio_de_Janeiro \n");
    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);


    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    return 0;
}