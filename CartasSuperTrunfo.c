#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int caractere;
    while ((caractere = getchar()) != '\n' && caractere != EOF); // Consome caracteres até encontrar \n ou EOF
}

void exibirMenuAtributos(int atributoEscolhido) {
    printf("\nEscolha o %dº atributo para comparação:\n", atributoEscolhido);
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
}

int main() {
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2;
    char cidade1[80], cidade2[80];
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;
    int atributo1, atributo2;
    float valorAtributo1Carta1, valorAtributo1Carta2, valorAtributo2Carta1, valorAtributo2Carta2;
    float somaCarta1, somaCarta2;

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

    // Escolha dos atributos
    exibirMenuAtributos(1);
    scanf("%d", &atributo1);
    limparBuffer();

    exibirMenuAtributos(2);
    scanf("%d", &atributo2);
    limparBuffer();

    // Verifica se os atributos são iguais
    while (atributo2 == atributo1) {
        printf("Você não pode escolher o mesmo atributo duas vezes. Escolha outro atributo:\n");
        scanf("%d", &atributo2);
        limparBuffer();
    }

    // Atribuição dos valores dos atributos escolhidos
    switch (atributo1) {
        case 1:
            valorAtributo1Carta1 = populacao1;
            valorAtributo1Carta2 = populacao2;
            break;
        case 2:
            valorAtributo1Carta1 = area1;
            valorAtributo1Carta2 = area2;
            break;
        case 3:
            valorAtributo1Carta1 = pib1;
            valorAtributo1Carta2 = pib2;
            break;
        case 4:
            valorAtributo1Carta1 = pontos1;
            valorAtributo1Carta2 = pontos2;
            break;
        case 5:
            valorAtributo1Carta1 = densidade1;
            valorAtributo1Carta2 = densidade2;
            break;
        case 6:
            valorAtributo1Carta1 = pibPerCapita1;
            valorAtributo1Carta2 = pibPerCapita2;
            break;
        case 7:
            valorAtributo1Carta1 = superPoder1;
            valorAtributo1Carta2 = superPoder2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    switch (atributo2) {
        case 1:
            valorAtributo2Carta1 = populacao1;
            valorAtributo2Carta2 = populacao2;
            break;
        case 2:
            valorAtributo2Carta1 = area1;
            valorAtributo2Carta2 = area2;
            break;
        case 3:
            valorAtributo2Carta1 = pib1;
            valorAtributo2Carta2 = pib2;
            break;
        case 4:
            valorAtributo2Carta1 = pontos1;
            valorAtributo2Carta2 = pontos2;
            break;
        case 5:
            valorAtributo2Carta1 = densidade1;
            valorAtributo2Carta2 = densidade2;
            break;
        case 6:
            valorAtributo2Carta1 = pibPerCapita1;
            valorAtributo2Carta2 = pibPerCapita2;
            break;
        case 7:
            valorAtributo2Carta1 = superPoder1;
            valorAtributo2Carta2 = superPoder2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    printf("\nAtributo 1:\n");
    if (atributo1 == 5) {
        printf("Densidade Populacional: Carta %d venceu (%d)\n", (valorAtributo1Carta1 < valorAtributo1Carta2) ? 1 : 2, (valorAtributo1Carta1 < valorAtributo1Carta2) ? 1 : 0);
    } else {
        printf("Atributo %d: Carta %d venceu (%d)\n", atributo1, (valorAtributo1Carta1 > valorAtributo1Carta2) ? 1 : 2, (valorAtributo1Carta1 > valorAtributo1Carta2) ? 1 : 0);
    }

    printf("\nAtributo 2:\n");
    if (atributo2 == 5) {
        printf("Densidade Populacional: Carta %d venceu (%d)\n", (valorAtributo2Carta1 < valorAtributo2Carta2) ? 1 : 2, (valorAtributo2Carta1 < valorAtributo2Carta2) ? 1 : 0);
    } else {
        printf("Atributo %d: Carta %d venceu (%d)\n", atributo2, (valorAtributo2Carta1 > valorAtributo2Carta2) ? 1 : 2, (valorAtributo2Carta1 > valorAtributo2Carta2) ? 1 : 0);
    }

    // Soma dos atributos
    somaCarta1 = valorAtributo1Carta1 + valorAtributo2Carta1;
    somaCarta2 = valorAtributo1Carta2 + valorAtributo2Carta2;

    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f\n", somaCarta1);
    printf("Carta 2: %.2f\n", somaCarta2);

    // Determinar o vencedor
    if (somaCarta1 > somaCarta2) {
        printf("\nCarta 1 venceu!\n");
    } else if (somaCarta2 > somaCarta1) {
        printf("\nCarta 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}