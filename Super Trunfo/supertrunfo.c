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
    int resultadocarta1, resultadocarta2;
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

// Calculando a Densidade Populacional e Pib Per Capita da Carta 1 e 2.
densidadepopulacional_1 = (float) populacao_1 / area_1;
pibpercapita_1 = (float) (pib_1 * 1000000000.0f) / populacao_1;
densidadepopulacional_2 = (float) populacao_2 / area_2;
pibpercapita_2 = (float) (pib_2 * 1000000000.0f) / populacao_2;

/*Calcular o Super Poder:Para cada carta, calcule o "Super Poder"
  somando todos os atributos numéricos população, área, PIB, 
  número de pontos turísticos, PIB per capita e o inverso da densidade 
  populacional – quanto menor a densidade, maior o poder:*/

superpoder_1 = (float) populacao_1 + area_1 + pib_1 + pontosturisticos_1 + pibpercapita_1 + (1 / densidadepopulacional_1);
superpoder_2 = (float) populacao_2 + area_2 + pib_2 + pontosturisticos_2 + pibpercapita_2 + (1 / densidadepopulacional_2);

//Comparação das Cartas 1 e 2
resultadocarta1 = populacao_1 > populacao_2;
resultadocarta1 = area_1 > area_2;
resultadocarta1 = pib_1 > pib_2;
resultadocarta1 = pontosturisticos_1 > pontosturisticos_2;
resultadocarta1 = densidadepopulacional_1 < densidadepopulacional_2; // Vence o menor valor.
resultadocarta1 = pibpercapita_1 > pibpercapita_2;
resultadocarta1 = superpoder_1 > superpoder_2;

resultadocarta2 = populacao_2 > populacao_1;
resultadocarta2 = area_2 > area_1;
resultadocarta2 = pib_2 > pib_1;
resultadocarta2 = pontosturisticos_2 > pontosturisticos_1;
resultadocarta2 = densidadepopulacional_2 < densidadepopulacional_1; // Vence o menor valor.
resultadocarta2 = pibpercapita_2 > pibpercapita_1;
resultadocarta2 = superpoder_2 > superpoder_1;

// Resultado da comparação
    printf("\n--- Resultados Do Jogo ---\n");
    printf("\n---- Carta 1 ----\n");
    printf("Estado: %c\n", estado_1);
    printf("Código da Carta: %s\n", cod_carta_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %lu: (%d)\n", populacao_1, resultadocarta1);
    printf("Área: %.2f km²: (%d)\n", area_1, resultadocarta1);
    printf("PIB: %.2f Bilhões de reais: (%d)\n", pib_1, resultadocarta1);
    printf("Pontos Turísticos: %d: (%d)\n", pontosturisticos_1, resultadocarta1);
    printf("Densidade Populacional: %.2f hab/km²: (%d)\n", densidadepopulacional_1, resultadocarta1);
    printf("PIB per Capita: %.2f: (%d)\n", pibpercapita_1, resultadocarta1);
    printf("Super Poder: %.2f: (%d)\n", superpoder_1, resultadocarta1);

    printf("\n---- Carta 2 ----\n");
    printf("Estado: %c\n", estado_2);
    printf("Código da Carta: %s\n", cod_carta_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %lu: (%d)\n", populacao_2, resultadocarta2);
    printf("Área: %.2f km²: (%d)\n", area_2, resultadocarta2);
    printf("PIB: %.2f Bilhões de reais: (%d)\n", pib_2, resultadocarta2);
    printf("Pontos Turísticos: %d: (%d)\n", pontosturisticos_2, resultadocarta2);
    printf("Densidade Populacional: %.2f hab/km²: (%d)\n", densidadepopulacional_2, resultadocarta2);
    printf("PIB per Capita: %.2f: (%d)\n", pibpercapita_2, resultadocarta2);
    printf("Super Poder: %.2f: (%d)\n", superpoder_2, resultadocarta2);

    return 0;

}