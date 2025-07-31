#include <stdio.h>

//Tema 2 Nivel novato

int main() {
    printf("--- DESAFIO SUPER TRUNFO DE PAÍSES! ---\n\n");
    

    char estado_1, estado_2;
    char cod_carta_1[50], cod_carta_2[50];
    char cidade_1[50], cidade_2[50];
    int populacao_1, populacao_2;
    int pontosturisticos_1, pontosturisticos_2;
    float area_1, area_2;
    float pib_1, pib_2;

   printf("--- CADASTRO DA PRIMEIRA CARTA ---\n\n");

   printf("Digite o estado da primera carta (apenas uma letra):");
   scanf(" %c", &estado_1);
   
   printf("Digite o código da primeira carta (Ex:'A01'):");
   scanf("%s", cod_carta_1);
   
   printf("Digite a cidade da primeira carta:");
   scanf("%s", cidade_1);
   
   printf("Digite a população da primera carta:");
   scanf("%d", &populacao_1);
   
   printf("Digite quantos pontos turisticos existe na primeira carta:");
   scanf("%d", &pontosturisticos_1);
  
   printf("Digite a área territorial da primeira cidade:");
   scanf("%f", &area_1);
  
   printf("Digite o PIB da primeira cidade:");
   scanf("%f", &pib_1);
 
   printf("--- CADASTRO DA SEGUNDA CARTA ---\n\n");

   printf("Digite o estado da segunda carta (apenas uma letra):");
   scanf(" %c", &estado_2);
  
   printf("Digite o código da segunda carta (Ex:'A01'):");
   scanf("%s", cod_carta_2);

   printf("Digite a cidade da segunda carta :");
   scanf("%s", cidade_2);

   printf("Digite a população da segunda carta:");
   scanf("%d", &populacao_2);

   printf("Digite quantos pontos turisticos existe na segunda carta:");
   scanf("%d", &pontosturisticos_2);
  
   printf("Digite a área territorial da segunda carta:");
   scanf("%f", &area_2);
  
   printf("Digite o PIB da segunda carta:");
   scanf("%f", &pib_2);


    printf("----DADOS DA CARTA 1----\n\n");

    printf("A letra do estado da carta é: %c\n", estado_1);
    printf("Código da carta é: %s\n", cod_carta_1);
    printf("O nome da cidade da carta é: %s\n", cidade_1);
    printf("A população da carta é: %d\n", populacao_1);
    printf("A quantidade de pontos turisticos da primeira carta é: %d\n", pontosturisticos_1);
    printf("A área da cidade é: %.2f Km²\n", area_1);
    printf("O PIB da carta é: %.2f Bilhões de reais\n\n", pib_1);

    printf("----DADOS DA CARTA 2----\n\n");
    
    printf("A letra do estado da carta é: %c\n", estado_2);
    printf("Código da  carta é: %s\n", cod_carta_2);
    printf("O nome da cidade da carta é: %s\n", cidade_2);
    printf("A população da carta é: %d\n", populacao_2);
    printf("A quantidade de pontos turisticos da  carta é: %d\n", pontosturisticos_2);
    printf("A área da cidade é: %.2f Km²\n", area_2);
    printf("O PIB da carta é: %.2f Bilhões de reais", pib_2);

   




    return 0;

}