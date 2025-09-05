#include <stdio.h>
#include <string.h>

// Codigo Danilo Nascimento
int main() {
    //######################  Declaracao de variaveis  ######################

    int escolha; // Variável para guardar a opção escolhida no menu

    // Carta 1
    char estado = 'A';                  
    char nome_cidade[50] = "Sao Paulo";
    char codigo_carta[40] = "A01";       
    unsigned long int populacao = 12325000;  
    int pontos_turisticos = 50; 
    float area = 1521.11, pib = 699.28;   
    float densidade_pol, pib_p_c, pib_calc, inv_densidade_pol;   

    // Carta 2
    char estado2 = 'B';               
    char nome_cidade2[50] = "Rio de Janeiro";       
    char codigo_carta2[40] = "B02";
    unsigned long int populacao2 = 6748000;
    int pontos_turisticos2 = 30; 
    float area2 = 1200.25, pib2 = 300.50;   
    float densidade_pol2, pib_p_c2, pib_calc2, inv_densidade_pol2;           

    //######################  Calculo de dados   #####################

    // Calcular densidade populacional e inverso (cidade 1)
    if (populacao == 0) {
        densidade_pol = 0; // Evita divisão por zero
        inv_densidade_pol = 0;
    } else {
        densidade_pol = (float) populacao / area;       // pessoas por km²
        inv_densidade_pol = 1.0 / densidade_pol;        // inverso da densidade
    }

    // Calcular PIB per capita (cidade 1)
    if (pib == 0) {
        pib_calc = 0;
        pib_p_c = 0;
    } else {
        pib_calc = pib * 1000000000;    // converte PIB de bilhões para unidade normal
        pib_p_c = pib_calc / populacao; // PIB per capita
    }

    // Calcular densidade populacional e inverso (cidade 2)
    if (populacao2 == 0) {
        densidade_pol2 = 0;
        inv_densidade_pol2 = 0;
    } else {
        densidade_pol2 = (float) populacao2 / area2;
        inv_densidade_pol2 = 1.0 / densidade_pol2;
    }

    // Calcular PIB per capita (cidade 2)
    if (pib2 == 0) {
        pib_calc2 = 0;
        pib_p_c2 = 0;
    } else {
        pib_calc2 = pib2 * 1000000000;
        pib_p_c2 = pib_calc2 / populacao2;
    }

    //######################  Menu para escolher comparação   ######################

    printf("\nEscolha o atributo para comparar:\n");
    printf("|----------------------------|\n");
    printf("| 1 - População              |\n");
    printf("| 2 - Área                   |\n");
    printf("| 3 - PIB                    |\n");
    printf("| 4 - PIB per capita         |\n");
    printf("| 5 - Pontos turísticos      |\n");
    printf("| 6 - Densidade populacional |\n");
    printf("|----------------------------|\n");
    printf("\nDigite o número da opção: "); 
    scanf("%d", &escolha); // Lê a escolha do usuário

    //######################  Switch para tratar a escolha do usuário  ######################

    switch (escolha) {
        case 1: // Comparar População
            printf("%s x %s\n", nome_cidade, nome_cidade2);
            printf("População\n");
            printf("%lu x %lu\n", populacao, populacao2);
            if (populacao > populacao2) {
                printf("O vencedor foi %s\n", nome_cidade);
            } else if (populacao2 > populacao) {
                printf("O vencedor foi %s\n", nome_cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        case 2: // Comparar Área
            printf("%s x %s\n", nome_cidade, nome_cidade2);
            printf("Área\n");
            printf("%.2f x %.2f\n", area, area2);
            if (area > area2) {
                printf("O vencedor foi %s\n", nome_cidade);
            } else if (area2 > area) {
                printf("O vencedor foi %s\n", nome_cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        case 3: // Comparar PIB
            printf("%s x %s\n", nome_cidade, nome_cidade2);
            printf("PIB\n");
            printf("%.2f x %.2f\n", pib, pib2);
            if (pib > pib2) {
                printf("O vencedor foi %s\n", nome_cidade);
            } else if (pib2 > pib) {
                printf("O vencedor foi %s\n", nome_cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        case 4: // Comparar PIB per capita
            printf("%s x %s\n", nome_cidade, nome_cidade2);
            printf("PIB per capita\n");
            printf("%.2f x %.2f\n", pib_p_c, pib_p_c2);
            if (pib_p_c > pib_p_c2) {
                printf("O vencedor foi %s\n", nome_cidade);
            } else if (pib_p_c2 > pib_p_c) {
                printf("O vencedor foi %s\n", nome_cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        case 5: // Comparar Pontos turísticos
            printf("%s x %s\n", nome_cidade, nome_cidade2);
            printf("Pontos turísticos\n");
            printf("%d x %d\n", pontos_turisticos, pontos_turisticos2);
            if (pontos_turisticos > pontos_turisticos2) {
                printf("O vencedor foi %s\n", nome_cidade);
            } else if (pontos_turisticos2 > pontos_turisticos) {
                printf("O vencedor foi %s\n", nome_cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        case 6: // Comparar Densidade populacional
            printf("%s x %s\n", nome_cidade, nome_cidade2);
            printf("Densidade populacional\n");
            printf("%.2f x %.2f\n", densidade_pol, densidade_pol2);
            // IMPORTANTE: para densidade, quanto MENOR, MELHOR (mais "super trunfo")
            if (densidade_pol < densidade_pol2) {
                printf("O vencedor foi %s\n", nome_cidade);
            } else if (densidade_pol2 < densidade_pol) {
                printf("O vencedor foi %s\n", nome_cidade2);
            } else {
                printf("Empate\n");
            }
            break;

        default: // Caso o usuário digite uma opcao invalida
            printf("Opcao Invalida\n");
            break;
    }

    return 0;
}
