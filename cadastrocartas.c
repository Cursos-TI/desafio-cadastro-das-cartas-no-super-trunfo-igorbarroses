#include <stdio.h>

int main() {
    int populacao;
    int pontos;
    float area, pib;
    char cidade[80];

    printf("Desáfio Super Trunfo.\n");

    printf("Insira a Cidade:\n");
    scanf(" %79[^\n]", cidade);  // Lê até 79 caracteres até encontrar nova linha

    printf("Insira a população da cidade:\n");
    scanf("%d", &populacao);
    while(getchar() != '\n');  // Limpa o buffer do teclado

    printf("Insira a Área da cidade:\n");
    scanf("%f", &area);
    while(getchar() != '\n');

    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib);
    while(getchar() != '\n');

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontos);
    while(getchar() != '\n');

    printf("\nInformações da Cidade:\n");
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d \n", pontos);

    return 0;
}