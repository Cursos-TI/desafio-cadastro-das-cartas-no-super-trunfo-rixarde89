#include <stdio.h>

//Tema 2 Super Trunfo de Países!

int main() {
//Abaixo serão declaradas as variaveis para as duas cartas.

    char estado_1, estado_2, cidade_1[50], cidade_2[50];
    char cod_carta_1[50], cod_carta_2[50]; 
    unsigned long int populacao_1, populacao_2;
    int pontosturisticos_1, pontosturisticos_2;
    float area_1, area_2, pib_1, pib_2;
    float densidadepopulacional_1, densidadepopulacional_2, pibpercapita_1, pibpercapita_2;
    int resultado_pop, resultado_area, resultado_pib, resultado_pt, resultado_dp, resultado_pibpc, resultadosuperpoder;
    float superpoder_1, superpoder_2;
   
//Abaixo iniciaremos a coleta de dados para a carta 1.
    printf("*** DESAFIO SUPER TRUNFO DE PAÍSES! ***\n\n");
   
    printf("--- CADASTRO DA PRIMEIRA CARTA ---\n\n");
    printf("Digite a letra do estado (apenas uma letra de A até H) :");
    scanf(" %c", &estado_1);
    printf("Digite a letra do estado com o número entre 01 a 04 para gerar o código (Ex:'A01') :");
    scanf("%s", cod_carta_1);
    printf("Digite o nome da cidade :");
    scanf("%s", cidade_1);
    printf("Digite o número de habitantes :");
    scanf("%lu", &populacao_1);
    printf("Digite a área territorial em quilometros quadrados :");
    scanf("%f", &area_1);
    printf("Digite o PIB :");
    scanf("%f", &pib_1);
    printf("Digite a quantidade de pontos turísticos :");
    scanf("%d", &pontosturisticos_1);
    
//Abaixo iniciaremos a coleta de dados para a carta 2.
    
    printf("--- CADASTRO DA SEGUNDA CARTA ---\n\n");
    printf("Digite a letra do estado (apenas uma letra de A até H) :");
    scanf(" %c", &estado_2);
    printf("Digite a letra do estado com o número entre 01 a 04 para gerar o código (Ex:'A01') :");
    scanf("%s", cod_carta_2);
    printf("Digite o nome da cidade :");
    scanf("%s", cidade_2);
    printf("Digite o número de habitantes :");
    scanf("%lu", &populacao_2);
    printf("Digite a área territorial em quilometros quadrados :");
    scanf("%f", &area_2);  
    printf("Digite o PIB :");
    scanf("%f", &pib_2);
    printf("Digite a quantidade de pontos turísticos :");
    scanf("%d", &pontosturisticos_2);

// Calculos para saber a Densidade Populacional e Pib Per Capita da Carta 1
densidadepopulacional_1 = (float) populacao_1 / area_1;
pibpercapita_1 = (float) (pib_1 * 1000000000.0f) / populacao_1;

//A informações logo abaixo é do recebimentos dos dados da carta 1.
    printf("\n---CARTA 1---\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", cod_carta_1);
    printf("O nome da cidade: %s\n", cidade_1);
    printf("A população da cidade: %lu\n", populacao_1);
    printf("A área da cidade: %.2f Km²\n", area_1);
    printf("O PIB da cidade: %.2f Bilhões de reais\n", pib_1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos_1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional_1);
    printf("PIB per capita: %.2f Reais\n\n ", pibpercapita_1);


// Calculos para saber a Densidade Populacional e Pib Per Capita da Carta 2
densidadepopulacional_2 = (float) populacao_2 / area_2;
pibpercapita_2 = (float) (pib_2 * 1000000000.0f) / populacao_2;

//A informações logo abaixo é do recebimentos dos dados da carta 2.
    printf("---CARTA 2---\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", cod_carta_2);
    printf("O nome da cidade: %s\n", cidade_2);
    printf("A população da cidade: %lu\n", populacao_2);
    printf("A área da cidade: %.2f Km²\n", area_2);
    printf("O PIB da cidade: %.2f Bilhões de reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional_2);
    printf("PIB per capita: %.2f Reais\n\n ", pibpercapita_2);

/*Calcular o Super Poder:Para cada carta, calcule o "Super Poder"
  somando todos os atributos numéricos população, área, PIB, 
  número de pontos turísticos, PIB per capita e o inverso da densidade 
  populacional – quanto menor a densidade, maior o poder:*/

superpoder_1 = (float) populacao_1 + area_1 + pib_1 + pontosturisticos_1 + pibpercapita_1 + (1 / densidadepopulacional_1);
superpoder_2 = (float) populacao_2 + area_2 + pib_2 + pontosturisticos_2 + pibpercapita_2 + (1 / densidadepopulacional_2);


//Comparação das Cartas 
resultado_pop = populacao_1 > populacao_2;
resultado_area = area_1 > area_2;
resultado_pib = pib_1 > pib_2;
resultado_pt = pontosturisticos_1 > pontosturisticos_2;
resultado_dp = densidadepopulacional_1 < densidadepopulacional_2; // Vence o menor valor.
resultado_pibpc = pibpercapita_1 > pibpercapita_2;
resultadosuperpoder = superpoder_1 > superpoder_2;

/*resultadocarta2 = populacao_2 > populacao_1;
resultadocarta2 = area_2 > area_1;
resultadocarta2 = pib_2 > pib_1;
resultadocarta2 = pontosturisticos_2 > pontosturisticos_1;
resultadocarta2 = densidadepopulacional_2 < densidadepopulacional_1; // Vence o menor valor.
resultadocarta2 = pibpercapita_2 > pibpercapita_1;
resultadocarta2 = superpoder_2 > superpoder_1;*/

// Resultado da comparação
    printf("--- Resultados Do Jogo ---\n\n");
    printf("População:(%d)\n", resultado_pop);
    printf("Área: (%d)\n", resultado_area);
    printf("PIB: (%d)\n", resultado_pib);
    printf("Pontos Turísticos: (%d)\n", resultado_pt);
    printf("Densidade Populacional: (%d)\n", resultado_dp);
    printf("PIB per Capita:(%d)\n", resultado_pibpc);
    printf("Super Poder: (%d)\n\n", resultadosuperpoder);

    return 0;
}

