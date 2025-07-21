#include <stdio.h>
//Codigo Danilo Nascimento
int main() {
	//######################  Declaração de variaveis  ######################
	char estado;                  // Letra do estado do primeiro card
	char nome_cidade[50];        // Nome da cidade do primeiro card
	int populacao, pontos_turisticos; // População e número de pontos turísticos
	float area, pib;             // Área e PIB da cidade

	char estado2;                // Letra do estado do segundo card
	char nome_cidade2[50];       // Nome da cidade do segundo card
	int populacao2, pontos_turisticos2; // População e pontos turísticos do segundo card
	float area2, pib2;           // Área e PIB da segunda cidade

    //######################  Input de dados card 1  ######################
	printf("Informacoes do primeiro Card \n");
	printf("Letra do estado: \n");
	scanf(" %c", &estado);
	printf("Nome da cidade: \n");
	scanf("%s", nome_cidade);	//Devido a uma limitação do "scanf", apenas cidades com apenas um nome, nome composto vai bugar. 
	printf("Populacao: \n");
	scanf("%d", &populacao);	
	printf("Area: \n");
	scanf("%f", &area);	
	printf("PIB: \n");
	scanf("%f", &pib);	
	printf("Pontos Turistico: \n");
	scanf("%d", &pontos_turisticos);

    //######################  Input de dados card 2  ######################
	printf("Informacoes do segundo Card \n"); 
	printf("Letra do estado: \n");
	scanf(" %c", &estado2);
	printf("Nome da cidade: \n");
	scanf("%s", nome_cidade2);	//Devido a uma limitação do "scanf", apenas cidades com apenas um nome, nome composto vai bugar. 
	printf("Populacao: \n");
	scanf("%d", &populacao2);	
	printf("Area: \n");
	scanf("%f", &area2);	
	printf("PIB: \n");
	scanf("%f", &pib2);	
	printf("Pontos Turistico: \n");
	scanf("%d", &pontos_turisticos2);
	
	//######################  Output de dados   ######################
	printf("\nCarta 1:\n");
	printf("Estado: %c \n", estado);
	printf("Codigo: %c01 \n", estado);
	printf("Nome da cidade: %s \n", nome_cidade);
	printf("Populacao: %d \n", populacao);
	printf("Area: %.2f Km \n", area);
	printf("PIB: %.2f Bilhoes de reais \n", pib);
	printf("Numero de pontos Turisticos: %d \n", pontos_turisticos);
	
	printf("\nCarta 2:\n");
	printf("Estado: %c \n", estado2);
	printf("Codigo: %c02 \n", estado2);
	printf("Nome da cidade: %s \n", nome_cidade2);
	printf("Populacao: %d \n", populacao2);
	printf("Area: %.2f Km \n", area2);
	printf("PIB: %.2f Bilhoes de reais \n", pib2);
	printf("Numero de pontos Turisticos: %d \n", pontos_turisticos2);

    return 0;
}
