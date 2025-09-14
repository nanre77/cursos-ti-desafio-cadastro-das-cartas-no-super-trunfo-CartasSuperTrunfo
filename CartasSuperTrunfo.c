#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // PIB em reais
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // Comparação 
    printf("\n=== Comparação de cartas (Atributo: PIB per capita) ===\n");
    printf("Carta 1 - %s: R$ %.2f\n", cidade1, pibPerCapita1);
    printf("Carta 2 - %s: R$ %.2f\n", cidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
