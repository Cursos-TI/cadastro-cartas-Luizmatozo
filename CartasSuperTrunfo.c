#include <stdio.h>

int main(){
    // Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //entrada de dados Carta 1: 
    printf("Cadrastro da Carta 1\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Código da Carta: (Ex: A01) ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (Em Bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de Dados Carta 2:

    printf("\nCadastro da Carta 2\n: ");

    printf("Estado (A-H): ");
    scanf("%c", estado2);

    printf("Código da Carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (Em Bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos turisticos; ");
    scanf("%d", &pontos_turisticos2);

    // Exibição da Carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("Area %2.f km2\n", area1);
    printf("PIB %2.f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1); 

    // Exibição da Carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Area %2.f km2\n", area2);
    printf("PIB %2.f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
    



 
















}
