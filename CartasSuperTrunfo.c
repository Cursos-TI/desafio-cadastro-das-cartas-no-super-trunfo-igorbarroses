#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int caractere;
    while ((caractere = getchar()) != '\n' && caractere != EOF); // Consome caracteres até encontrar \n ou EOF
}

int main() {
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2;
    char cidade1[80], cidade2[80];
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

    printf("Desáfio Super Trunfo. Aperte a tecla enter para cadastrar as cartas.\n");

    // Leitura dos dados da Carta 1
    printf("\nCarta 1:\n");

    // Leitura do nome da cidade
    printf("Insira a Cidade:\n");
    if (fgets(cidade1, sizeof(cidade1), stdin) != NULL) {
        cidade1[strcspn(cidade1, "\n")] = 0; // Remove o \n do final
    } else {
        printf("Erro ao ler o nome da cidade.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Leitura da população
    printf("Insira a população da cidade:\n");
    if (scanf("%lu", &populacao1) != 1) {
        printf("Entrada inválida para população.\n");
        return 1; // Encerra o programa com código de erro
    }
    limparBuffer(); // Limpa o buffer após o scanf

    // Leitura da área
    printf("Insira a Área da cidade:\n");
    if (scanf("%f", &area1) != 1) {
        printf("Entrada inválida para área.\n");
        return 1; // Encerra o programa com código de erro
    }
    limparBuffer(); // Limpa o buffer após o scanf

    // Leitura do PIB
    printf("Insira o PIB da cidade:\n");
    if (scanf("%f", &pib1) != 1) {
        printf("Entrada inválida para PIB.\n");
        return 1; // Encerra o programa com código de erro
    }
    limparBuffer(); // Limpa o buffer após o scanf

    // Leitura dos pontos turísticos
    printf("Insira o número de pontos turísticos:\n");
    if (scanf("%d", &pontos1) != 1) {
        printf("Entrada inválida para pontos turísticos.\n");
        return 1; // Encerra o programa com código de erro
    }
    limparBuffer(); // Limpa o buffer após o scanf

    // Leitura dos dados da Carta 2
    printf("\nCarta 2:\n");

    // Leitura do nome da cidade
    printf("Insira a Cidade:\n");
    if (fgets(cidade2, sizeof(cidade2), stdin) != NULL) {
        cidade2[strcspn(cidade2, "\n")] = 0; // Remove o \n do final
    } else {
        printf("Erro ao ler o nome da cidade.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Leitura da população
    printf("Insira a população da cidade:\n");
    if (scanf("%lu", &populacao2) != 1) {
        printf("Entrada inválida para população.\n");
        return 1; // Encerra o programa com código de erro
    }
    limparBuffer(); // Limpa o buffer após o scanf

    // Leitura da área
    printf("Insira a Área da cidade:\n");
    if (scanf("%f", &area2) != 1) {
        printf("Entrada inválida para área.\n");
        return 1; // Encerra o programa com código de erro
    }
    limparBuffer(); // Limpa o buffer após o scanf

    // Leitura do PIB
    printf("Insira o PIB da cidade:\n");
    if (scanf("%f", &pib2) != 1) {
        printf("Entrada inválida para PIB.\n");
        return 1; // Encerra o programa com código de erro
    }
    limparBuffer(); // Limpa o buffer após o scanf

    // Leitura dos pontos turísticos
    printf("Insira o número de pontos turísticos:\n");
    if (scanf("%d", &pontos2) != 1) {
        printf("Entrada inválida para pontos turísticos.\n");
        return 1; // Encerra o programa com código de erro
    }
    limparBuffer(); // Limpa o buffer após o scanf

    // Cálculos para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);

    // Cálculos para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, (pontos1 > pontos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}