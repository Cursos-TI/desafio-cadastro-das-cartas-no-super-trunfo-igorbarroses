#include <stdio.h>

int main () {

   
    int populacao;
    int pontos;
    float area, pib;
    char cidade [80];

     printf ("Desáfio Super Trunfo.\n")

        printf ("Insira a Cidade:\n");
        scanf ("%s", &cidade)

        printf ("Insira a população da cidade:\n");
        scanf ("%d", &populacao);

        printf ("Insira a Área da cidade:\n")
        scanf ("%f", &area);

        printf ("Insira o PIB da cidade:\n");
        scanf ("%f", &pib);

        printf ("Insira o número de pontos turísticos:\n");
        scanf ("%d", &pontos);

        printf ("Cidade: %s \n", cidade);
        printf ("População: %d \n", populacao);
        printf ("Área: %f \n", area);
        printf ("PIB: %f \n", pib);
        printf ("Pontos turísticos: %d \n", pontos);


        return 0;
    
}
