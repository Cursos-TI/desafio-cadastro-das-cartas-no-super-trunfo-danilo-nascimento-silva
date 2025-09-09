#include <stdio.h>   // Biblioteca padrão para entrada e saída (printf, scanf)
#include <string.h>  // Biblioteca para manipulação de strings (strcspn)

// Código desenvolvido por Danilo Nascimento
int main(){
    //######################  Declaração de variáveis  ######################
	
    // Variáveis da primeira carta
    char estado;                   // Letra do estado (ex.: 'A', 'B', etc.)
    char nome_cidade[50];          // Nome da cidade
    char codigo_carta[40];         // Código da carta
    unsigned long int populacao;   // População da cidade
    int pontos_turisticos;         // Número de pontos turísticos
    float area, pib;               // Área (Km²) e PIB (em bilhões)
    float densidade_pol, pib_p_c;  // Densidade populacional e PIB per capita
    float pib_calc;                // PIB convertido em reais (multiplicado por 1 bilhão)
    float super_poder;             // Atributo somando todos para comparação
    float inv_densidade_pol;       // Inverso da densidade populacional

    // Variáveis da segunda carta
    char estado2;
    char nome_cidade2[50];
    char codigo_carta2[40];
    int pontos_turisticos2;
    unsigned long int populacao2;
    float area2, pib2, densidade_pol2, pib_p_c2, pib_calc2, super_poder2, inv_densidade_pol2;    
	
    //######################  Input de dados da carta 1  ######################

    printf("Informacoes do primeiro Card \n");
    printf("Letra do estado: ");
    scanf(" %c", &estado);   // Lê um único caractere, o espaço ignora '\n' no buffer

    printf("Codigo: ");
    scanf("%s", codigo_carta);  // Lê o código sem espaços

    printf("Nome da cidade: ");
    while (getchar() != '\n');  // Limpa o buffer antes de ler string com espaços
    fgets(nome_cidade, sizeof(nome_cidade), stdin);     // Lê string com espaços
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';     // Remove o '\n' do final

    printf("Populacao: ");
    scanf("%lu", &populacao);	

    printf("Area: ");
    scanf("%f", &area);	

    printf("PIB: ");
    scanf("%f", &pib);	

    printf("Pontos Turistico: ");
    scanf("%d", &pontos_turisticos);
    printf("\n");
	
    //######################  Input de dados da carta 2  ######################

    printf("Informacoes do segundo Card \n"); 

    printf("Letra do estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo_carta2);

    printf("Nome da cidade: ");
    while (getchar() != '\n');  // Limpa buffer
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';   // Remove o '\n' final

    printf("Populacao: ");
    scanf("%lu", &populacao2);	

    printf("Area: ");
    scanf("%f", &area2);	

    printf("PIB: ");
    scanf("%f", &pib2);	

    printf("Pontos Turistico: ");
    scanf("%d", &pontos_turisticos2);

    //######################  Cálculos dos atributos   #####################

    // Carta 1
    densidade_pol = (float) populacao / area;            // População por km²
    inv_densidade_pol = 1.0 / densidade_pol;             // Inverso para comparação
    pib_calc = (float) pib * 1000000000;                 // Converte PIB de bilhões para reais
    pib_p_c = (float) pib_calc / populacao;              // PIB per capita
    super_poder = (float) populacao + area + pib + (float) pontos_turisticos + pib_p_c + inv_densidade_pol + densidade_pol; // Soma de todos atributos para comparar

    // Carta 2
    densidade_pol2 = (float) populacao2 / area2;
    inv_densidade_pol2 = 1.0 / densidade_pol2;
    pib_calc2 = (float) pib2 * 1000000000;
    pib_p_c2 = (float) pib_calc2 / populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_p_c2 + inv_densidade_pol2 + densidade_pol2; 
	
    //######################  Saída de dados das cartas   ######################

    // Exibe carta 1
    printf("\nCarta1\n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo_carta);
    printf("Nome da cidade: %s \n", nome_cidade);
    printf("Populacao: %lu km² \n", populacao);
    printf("Area: %.2f Km \n", area);
    printf("PIB: %.2f Bilhoes de reais \n", pib);
    printf("Numero de pontos Turisticos: %d \n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km \n", densidade_pol);
    printf("PIB per Capita: %.2f reais\n", pib_p_c);
	
    // Exibe carta 2
    printf("\nCarta2\n"); 
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo_carta2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("Populacao: %lu km² \n", populacao2);
    printf("Area: %.2f Km \n", area2);
    printf("PIB: %.2f Bilhoes de reais \n", pib2);
    printf("Numero de pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade_pol2);
    printf("PIB per Capita: %.2f reais\n", pib_p_c2);

    //######################  Comparação entre cartas   ######################

    // Compara cada atributo e indica qual carta venceu
    printf("\nComparacao de cartas \n");
    printf("Populacao: Carta %d venceu \n", (populacao > populacao2) ? 1 : 2);
    printf("Area: Carta %d venceu \n", (area > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu \n", (pib > pib2) ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu \n", (pontos_turisticos > pontos_turisticos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu \n", (densidade_pol < densidade_pol2) ? 1 : 2); // Menor densidade vence
    printf("PIB per Capita: Carta %d venceu \n", (pib_p_c > pib_p_c2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu \n", (super_poder > super_poder2) ? 1 : 2);
	
    return 0;  // Indica que o programa terminou sem erros
}

/*
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais
*/