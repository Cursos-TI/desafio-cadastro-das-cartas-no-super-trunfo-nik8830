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

//Comparison Menu.
void compareCards(int card1, int card2){

}
//Card inspection.
void cardInspection(int cartaEscolhida){
    printf("\n\nCarta %s\n", Cards[cartaEscolhida-1].cardCode);
    printf("Populacao de %d habitantes.\n", Cards[cartaEscolhida-1].population);
    printf("Area de %d Km quadrados.\n", Cards[cartaEscolhida-1].area);
    printf("PIB de %d Reais.\n", Cards[cartaEscolhida-1].PIB);
    printf("Atracoes turisticas: %d.\n", Cards[cartaEscolhida-1].touristAttractions);
    printf("Densidade populacional de %.2f por Km quadrado.\n", Cards[cartaEscolhida-1].populationDensity);
    printf("PIB per capta de %.2f Reais por habitante.\n\n\n\n", Cards[cartaEscolhida-1].PIBPerCapta);
}

//Card selection menu.
void cardsMenu(){
    int carta;
    puts("Escolha uma carta:");
    for (int i = 0; i<maxCards; i++){
        printf("%d. %s\n", i+1, Cards[i].cardCode);
    }
    scanf("%d", &carta);
    cardInspection(carta);
}
//Card creation menu.
void cardCreationMenu(){
    int i=0;
    printf("\nDigite o codigo da carta: (Exemplo:A03)\n");
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
    Cards[i].PIBPerCapta = Cards[i].PIB/Cards[i].population; //Calculating PIB per capta (sei lá como diabos escreve isso em inglês)
    i++;
    maxCards++;
}

//Initial interaction menu.
void initialMenu() {
    int opcao;
    puts("\nJogo SuperTrunfo\nDigite o numero de uma opcao para continuar.");
    puts("1. Registrar nova carta.\n2. Visualizar carta.\n3. Comparar duas cartas.");
    scanf(" %d", &opcao);
    switch (opcao){
        case 1:
        cardCreationMenu();
        case 2:
        cardsMenu();
        case 3:
        compareCards(1, 2);
    }
}

int main(){
    while(1>0){initialMenu();};
};
