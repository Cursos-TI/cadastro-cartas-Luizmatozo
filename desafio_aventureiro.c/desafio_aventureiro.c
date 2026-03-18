#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1, pib1, densidade1, pib_capita1;
    int pontos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2, pib2, densidade2, pib_capita2;
    int pontos2;

    // --- LEITURA DA CARTA 1 ---
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo: ");
    scanf(" %s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome1);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a Area: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite os Pontos Turisticos: ");
    scanf(" %d", &pontos1);

    // O PROGRAMA CALCULA ESTES DOIS ABAIXO:
    densidade1 = populacao1 / area1;
    pib_capita1 = (pib1 * 1000000000) / populacao1;

    // --- LEITURA DA CARTA 2 ---
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo: ");
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome2);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a Area: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite os Pontos Turisticos: ");
    scanf(" %d", &pontos2);

    // O PROGRAMA CALCULA ESTES DOIS ABAIXO:
    densidade2 = populacao2 / area2;
    pib_capita2 = (pib2 * 1000000000) / populacao2;

    // --- EXIBIÇÃO FINAL ---
    printf("\n--- CARTA 1 ---\n");
    printf("Cidade: %s\n", nome1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);

    printf("\n--- CARTA 2 ---\n");
    printf("Cidade: %s\n", nome2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

    return 0;
}