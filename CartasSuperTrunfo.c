#include <stdio.h>
//Codigo Danilo Nascimento
int main(){
	//######################  Declara��o de variaveis  ######################
	
	char estado;                  // Letra do estado do primeiro card
	char nome_cidade[50];        // Nome da cidade do primeiro card
	int populacao, pontos_turisticos; // Popula��o e n�mero de pontos tur�sticos
	float area, pib, densidade_pol, pib_p_c, pib_calc;             // �rea e PIB da cidade

	char estado2;                // Letra do estado do segundo card
	char nome_cidade2[50];       // Nome da cidade do segundo card
	int populacao2, pontos_turisticos2; // Popula��o e pontos tur�sticos do segundo card
	float area2, pib2, densidade_pol2, pib_p_c2, pib_calc2;           // �rea e PIB da segunda cidade
	
	//######################  Input de dados card 1  ######################
	printf("Informacoes do primeiro Card \n");
	printf("Letra do estado: ");
	scanf(" %c", &estado);
	printf("Nome da cidade: ");
	scanf("%s", nome_cidade);	//Devido a uma limita��o do "scanf", apenas cidades com apenas um nome, nome composto vai bugar. 
	printf("Populacao: ");
	scanf("%d", &populacao);	
	printf("Area: ");
	scanf("%f", &area);	
	printf("PIB: ");
	scanf("%f", &pib);	
	printf("Pontos Turistico: ");
	scanf("%d", &pontos_turisticos);
	printf("\n");
	
	//######################  Input de dados card 2  ######################
	printf("Informacoes do segundo Card \n"); 
	printf("Letra do estado: ");
	scanf(" %c", &estado2);
	printf("Nome da cidade: ");
	scanf("%s", nome_cidade2);	//Devido a uma limita��o do "scanf", apenas cidades com apenas um nome, nome composto vai bugar. 
	printf("Populacao: ");
	scanf("%d", &populacao2);	
	printf("Area: ");
	scanf("%f", &area2);	
	printf("PIB: ");
	scanf("%f", &pib2);	
	printf("Pontos Turistico: ");
	scanf("%d", &pontos_turisticos2);

	//######################  Calculo de dados   #####################

	//Cidade 1
	densidade_pol = (float) populacao/area;
	pib_calc = (float) pib*1000000000;
	pib_p_c = (float) pib_calc/populacao;

	//Cidade 2
	densidade_pol2 = (float) populacao2/area2;
	pib_calc2 = (float) pib2*1000000000;
	pib_p_c2 = (float) pib_calc2/populacao2;
	
	//######################  Output de dados   ######################
	printf("\nCarta1\n");
	printf("Estado: %c \n", estado);
	printf("Codigo: %c01 \n", estado);
	printf("Nome da cidade: %s \n", nome_cidade);
	printf("Populacao: %d \n", populacao);
	printf("Area: %.2f Km \n", area);
	printf("PIB: %.2f Bilhoes de reais \n", pib);
	printf("Numero de pontos Turisticos: %d \n", pontos_turisticos);
	printf("Densidade Populacional: %.2f hab/km \n", densidade_pol);
	printf("PIB per Capita: %.2f reais\n", pib_p_c);
	
	printf("\nCarta2\n");
	printf("Estado: %c \n", estado2);
	printf("Codigo: %c02 \n", estado2);
	printf("Nome da cidade: %s \n", nome_cidade2);
	printf("Populacao: %d \n", populacao2);
	printf("Area: %.2f Km \n", area2);
	printf("PIB: %.2f Bilhoes de reais \n", pib2);
	printf("Numero de pontos Turisticos: %d \n", pontos_turisticos2);
	printf("Densidade Populacional: %.2f hab/km\n", densidade_pol2);
	printf("PIB per Capita: %.2f reais\n", pib_p_c2);

	return 0;
}
