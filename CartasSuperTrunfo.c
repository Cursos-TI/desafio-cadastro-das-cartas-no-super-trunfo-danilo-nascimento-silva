#include <stdio.h>
#include <string.h>
//Codigo Danilo Nascimento
int main(){
	//######################  Declaracao de variaveis  ######################
	
	char estado;                  
	char nome_cidade[50];
	char codigo_carta[40];       
	unsigned long int populacao;  
	int pontos_turisticos; 
	float area, pib, densidade_pol, pib_p_c, pib_calc, super_poder,inv_densidade_pol;    

	char estado2;               
	char nome_cidade2[50];       
	char codigo_carta2[40];
	int pontos_turisticos2; 
	unsigned long int populacao2;
	float area2, pib2, densidade_pol2, pib_p_c2, pib_calc2, super_poder2,inv_densidade_pol2;           
	
	//######################  Input de dados card 1  ######################

	printf("Informacoes do primeiro Card \n");
	printf("Letra do estado: ");
	scanf(" %c", &estado);
	printf("Codigo: ");
	scanf("%s", codigo_carta);
	printf("Nome da cidade: ");
	while (getchar() != '\n');
	fgets(nome_cidade, sizeof(nome_cidade), stdin);
	nome_cidade[strcspn(nome_cidade, "\n")] = '\0'; 
	printf("Populacao: ");
	scanf("%lu", &populacao);	
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
	printf("Codigo: ");
	scanf("%s", codigo_carta2);
	printf("Nome da cidade: ");
	while (getchar() != '\n');
	fgets(nome_cidade2, sizeof(nome_cidade2), stdin); 
	nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';
	printf("Populacao: ");
	scanf("%lu", &populacao2);	
	printf("Area: ");
	scanf("%f", &area2);	
	printf("PIB: ");
	scanf("%f", &pib2);	
	printf("Pontos Turistico: ");
	scanf("%d", &pontos_turisticos2);

	//######################  Calculo de dados   #####################

	//Cidade 1
	densidade_pol = (float) populacao/area;
	inv_densidade_pol = 1.0/densidade_pol;
	pib_calc = (float) pib*1000000000;
	pib_p_c = (float) pib_calc/populacao;
	super_poder = (float)populacao + area + pib + (float)pontos_turisticos + pib_p_c + inv_densidade_pol;

	//Cidade 2
	densidade_pol2 = (float) populacao2/area2;
	inv_densidade_pol2 = 1.0/densidade_pol2;
	pib_calc2 = (float) pib2*1000000000;
	pib_p_c2 = (float) pib_calc2/populacao2;
	super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_p_c2 + inv_densidade_pol2;
	
	//######################  Output de dados   ######################

	printf("\nComparacao de cartas \n");
	printf("Populacao: Carta %d venceu \n", (populacao > populacao2));
	printf("Area: Carta %d venceu \n", (area > area2));
	printf("PIB: Carta %d venceu \n", (pib > pib2));
	printf("Pontos Turisticos: Carta %d venceu \n", (pontos_turisticos > pontos_turisticos2));
	printf("Densidade Populacional:: Carta %d venceu \n", (densidade_pol > densidade_pol2));
	printf("PIB per Capita: Carta %d venceu \n", (pib_p_c > pib_p_c2));
	printf("Super Poder: Carta %d venceu \n", (super_poder > super_poder2));
	
	return 0;
}
