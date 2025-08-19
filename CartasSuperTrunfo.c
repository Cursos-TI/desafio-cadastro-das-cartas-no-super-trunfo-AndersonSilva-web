#include <stdio.h>

int main() {
    char estado1[10], estado2[10];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // == Entrada de Carta 1 ==

    printf("== Cadastro da Carta 1 ==\n");

    printf("Digite o estado:\n");
    scanf("%s", estado1);

    printf("Digite o codigo:\n");
    scanf("%s", codigo1);

    printf("Digite a cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

      printf("Digite a area:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite os numeros de Pontos Turisticos:\n");
    scanf("%d", &pontos1);

    // == Entrada da Carta 2 ==

    printf("== Cadastro da Carta 2 ==\n");

    printf("Digite o estado:\n");
    scanf("%s", estado2);

    printf("Digite o codigo:\n");
    scanf("%s", codigo2);
    
    printf("Digite a cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turisticos:\n");
    scanf("%d", &pontos2);

    // == Saida ===
    printf("\n-- Carta 1 --\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\n-- Carta 2 --\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    // Comparação das Cartas
    return 0;




}
