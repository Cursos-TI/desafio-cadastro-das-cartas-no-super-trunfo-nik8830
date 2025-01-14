#include <stdio.h>

int main(){
//Data for each card.
    struct CartasSuperTrunfo
    {
        char cardCode[3];
        int population;
        int area;
        int PIB;
        int touristAttractions;
        float populationDensity;
        float pibPerCapta;
    };
    struct CartasSuperTrunfo Cards[2];

//Data input to register each card.
    int i;
    for (i=0; i<2; i++){
        int numeroCarta = i+1;
        printf("\nDigite o codigo da carta %d: (Exemplo:A03)\n", numeroCarta);
        scanf("%s", &Cards[i].cardCode);

        printf("\nDigite a populacao:\n");
        scanf("%d", &Cards[i].population);

        printf("\nDigite a área da cidade em Km quadrados:\n");
        scanf("%d", &Cards[i].area);

        printf("\nDigite o PIB da cidade:\n");
        scanf("%d", &Cards[i].PIB);

        printf("\nDigite o numero de atracoes turisticas da Cidade:\n");
        scanf("%d", &Cards[i].touristAttractions);
        
        Cards[i].populationDensity = Cards[i].population/Cards[i].area; //Calculating population density.
        Cards[i].pibPerCapta = Cards[i].PIB/Cards[i].population; //Calculating PIB per capta (sei lá como diabos escreve isso em inglês)
    };
//Outputing the values of each card.
    for (i=0; i<2; i++){
        printf("\n\nCarta %s\n", Cards[i].cardCode);
        printf("Populacao de %d habitantes.\n", Cards[i].population);
        printf("Area de %d Km quadrados.\n", Cards[i].area);
        printf("PIB de %d Reais.\n", Cards[i].PIB);
        printf("Atracoes turisticas: %d.\n", Cards[i].touristAttractions);
        printf("Densidade populacional de %.2f por Km quadrado.\n", Cards[i].populationDensity);
        printf("PIB per capta de %.2f Reais por habitante.\n\n\n\n", Cards[i].pibPerCapta);


    }
}
