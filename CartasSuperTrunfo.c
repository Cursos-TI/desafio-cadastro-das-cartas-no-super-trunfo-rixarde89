#include <stdio.h>

//Tema 2 Nivel novato

int main() {
    printf("---Desafio Super Trunfo Países!---\n");
    

    char estado_1, estado_2;
    char cod_codigo_1[50], cod_codigo_2[50];
    char cidade_1[50], cidade_2[50];
    int populacao_1, populacao_2;
    int pontosturisticos_1, pontosturisticos_2;
    float area_1, area_2;
    float pib_1, pib_2;

   printf("--- Cadastro da primera carta ---\n");

   printf("Digite o estado da primera carta (apenas uma letra):");
   scanf(" %c", &estado_1);
   printf("A letra do Estado é: %c\n", estado_1);
   
   printf("Digite o código da primeira carta (Ex:'A01'):");
   scanf("%s", cod_codigo_1);
   printf("Código da primera carta é: %s\n", cod_codigo_1);

   printf("Digite o nome da primeira cidade:");
   scanf("%s", cidade_1);
   printf("A primeira cidade é: %s\n", cidade_1);

   printf("Digite a população da primera carta:");
   scanf("%d", &populacao_1);
   printf("A população da primeira carta é: %d\n", populacao_1);

   printf("Digite quantos pontos turisticos existe na primeira cidade:");
   scanf("%d", &pontosturisticos_1);
   printf("A quantidade de pontos turisticos da primeira cidade é: %d\n", pontosturisticos_1);

   printf("Digite a área territorial da primeira cidade:");
   scanf("%f", &area_1);
   printf("A área territorial da primeira cidade é: %.3f Km²\n", area_1);

   printf("Digite o PIB da primeira cidade:");
   scanf("%f", &pib_1);
   printf("O PIB da primeira carta é: %.3f Bilhões de reais\n", pib_1);



   

   


    return 0;

}

  
    



  

