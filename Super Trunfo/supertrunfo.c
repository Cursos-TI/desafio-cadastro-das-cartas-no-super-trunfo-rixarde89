#include <stdio.h>

//Tema 2 Nivel Mestre!

int main() {
//Abaixo serão declaradas as variaveis para as duas cartas.

    char estado_1, estado_2, cidade_1[50], cidade_2[50];
    char cod_carta_1[50], cod_carta_2[50]; 
    unsigned long int populacao_1, populacao_2;
    int pontosturisticos_1, pontosturisticos_2;
    float area_1, area_2, pib_1, pib_2;
    float densidadepopulacional_1, densidadepopulacional_2, pibpercapita_1, pibpercapita_2;
    int resultado;
    float superpoder1, superpoder2;
   

    
//Abaixo iniciaremos a coleta de dados para a carta 1.

    printf("*** DESAFIO SUPER TRUNFO DE PAÍSES! ***\n\n"); 
    /*printf("--- CADASTRO DA PRIMEIRA CARTA ---\n\n");
    printf("Digite a letra do estado (apenas uma letra de A até H) :");
    scanf(" %c", &estado_1);
    printf("Digite a letra do estado com o número entre 01 a 04 para gerar o código (Ex:'A01') :");
    scanf("%s", cod_carta_1);
    printf("Digite o nome da cidade :");
    scanf("%s", cidade_1);*/
    printf("Digite o número de habitantes :");
    scanf("%d", &populacao_1);
    printf("Digite a área territorial em quilometros quadrados :");
    scanf("%f", &area_1);
    printf("Digite o PIB :");
    scanf("%f", &pib_1);
    printf("Digite a quantidade de pontos turísticos :");
    scanf("%d", &pontosturisticos_1);
    
//Abaixo iniciaremos a coleta de dados para a carta 2.
    
    printf("--- CADASTRO DA SEGUNDA CARTA ---\n\n");
    /*printf("Digite a letra do estado (apenas uma letra de A até H) :");
    scanf(" %c", &estado_2);
    printf("Digite a letra do estado com o número entre 01 a 04 para gerar o código (Ex:'A01') :");
    scanf("%s", cod_carta_2);
    printf("Digite o nome da cidade :");
    scanf("%s", cidade_2);*/
    printf("Digite o número de habitantes :");
    scanf("%d", &populacao_2);
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
    /*printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", cod_carta_1);
    printf("O nome da cidade: %s\n", cidade_1);*/
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
    /*printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", cod_carta_2);
    printf("O nome da cidade: %s\n", cidade_2);*/
    printf("A população da cidade: %lu\n", populacao_2);
    printf("A área da cidade: %.2f Km²\n", area_2);
    printf("O PIB da cidade: %.2f Bilhões de reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional_2);
    printf("PIB per capita: %.2f Reais\n\n ", pibpercapita_2);

superpoder1 = (float) populacao_1 + area_1 + pib_1 + pontosturisticos_1 + pibpercapita_1 + (1 / densidadepopulacional_1);
superpoder2 = (float) populacao_2 + area_2 + pib_2 + pontosturisticos_2 + pibpercapita_2 + (1 / densidadepopulacional_2);

// Resultado da comparação
    printf("--- Resultados Do Jogo ---\n");
    printf("'1' Carta 1 vence, 0 Carta '2' vence\n");
    printf("População: %d\n", populacao_1 > populacao_2);
    printf("Área: %d\n", area_1 > area_2);
    printf("PIB: %d\n", pib_1 > pib_2);
    printf("Pontos Turísticos: %d\n", pontosturisticos_1 > pontosturisticos_2);
    printf("Densidade Populacional (vence o menor): %d\n", densidadepopulacional_1 < densidadepopulacional_2);
    printf("PIB per Capita: %d\n", pibpercapita_1 > pibpercapita_2);
    printf("Super Poder (Vence a carta de maior valor): %d\n", superpoder1 > superpoder2);


    return 0;

}