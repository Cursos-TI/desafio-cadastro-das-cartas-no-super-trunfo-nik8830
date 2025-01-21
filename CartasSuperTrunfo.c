#include <stdio.h>

//Data for each card.
struct CartasSuperTrunfo
{
    char cardCode[3];
    int population;
    int area;
    int PIB;
    int touristAttractions;
    float populationDensity;
    float PIBPerCapta;
};
struct CartasSuperTrunfo Cards[9];
int maxCards = 0; //Stores the ammount of cards created.

//Comparison of each individual value of two cards.
void cardsComparison(int carta1, int carta2){
    carta1--;
    carta2--;
    if (Cards[carta1].population>Cards[carta2].population){
        printf("%s possui mais habitantes\n", Cards[carta1].cardCode);
    }
    else {
        printf("%s possui mais habitantes\n", Cards[carta2].cardCode);
    }
    if (Cards[carta1].area > Cards[carta2].area){
        printf("%s possui uma area maior.\n", Cards[carta1].cardCode);
    }
    else {
        printf("%s possui uma area maior.\n", Cards[carta2].cardCode);
    }

    if (Cards[carta1].PIB > Cards[carta2].PIB){
        printf("%s possui um PIB maior.\n", Cards[carta1].cardCode);
    }
    else {
        printf("%s possui um PIB maior.\n", Cards[carta2].cardCode);
    }

    if (Cards[carta1].touristAttractions > Cards[carta2].touristAttractions){
        printf("%s possui mais atracoes turisticas.\n", Cards[carta1].cardCode);
    }
    else {
        printf("%s possui mais atracoes turisticas.\n", Cards[carta2].cardCode);
    }
}

//Card selection menu for comparison.
void cardsComparisonMenu(){
    int cartaN1;
    int cartaN2;
    puts("Escolha duas cartas:");
    for (int i = 0; i<maxCards; i++){
        int index = i;
        printf("%d. %s\n", index+1, Cards[i].cardCode);
    }
    scanf("%d", &cartaN1);
    scanf("%d", &cartaN2);
    cardsComparison(cartaN1, cartaN2);
}

//Card creation menu.
void cardCreationMenu(){
    int i = maxCards;
    puts("\nDigite o codigo da carta: (Exemplo:A03)");
    scanf("%s", &Cards[i].cardCode);
    puts("\nDigite a populacao:\n");
    scanf("%d", &Cards[i].population);
    puts("\nDigite a área da cidade em Km quadrados:");
    scanf("%d", &Cards[i].area);
    puts("\nDigite o PIB da cidade:");
    scanf("%d", &Cards[i].PIB);
    puts("\nDigite o numero de atracoes turisticas da Cidade:");
    scanf("%d", &Cards[i].touristAttractions);     
    Cards[i].populationDensity = Cards[i].population/Cards[i].area; //Calculating population density.
    Cards[i].PIBPerCapta = Cards[i].PIB/Cards[i].population; //Calculating PIB per capta (sei lá como diabos escreve isso em inglês)
    maxCards++;
}

//Initial interaction menu.
void initialMenu() {
    int opcao;
    puts("\nJogo SuperTrunfo\nDigite o numero de uma opcao para continuar.");
    puts("1. Registrar nova carta.\n2. Comparar duas cartas.");
    scanf(" %d", &opcao);
    switch (opcao){
        case 1:
        cardCreationMenu();
        break;
        case 2:
        cardsComparisonMenu();
        break;
    }
}

int main(){
    while(1>0){initialMenu();};
};
