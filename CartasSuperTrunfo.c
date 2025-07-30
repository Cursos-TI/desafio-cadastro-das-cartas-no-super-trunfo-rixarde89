#include <stdio.h>


int main() {
    printf("Desafio Super Trunfo!\n");

    char estado1, estado2;
    char codigo1, codigo2[10];
    char cidade1, cidade2[50];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;

   printf("--- Cadastro da primera carta ---\n");

   printf("Digite o estado da primera carta (apenas uma letra ):");
   scanf(" %c", &estado1);
   printf("A letra do Estado é: %c\n", estado1);
   
   printf("Digite o código da primeira carta (Ex:'A01'):");
   scanf("%s", codigo1);
   printf("Código da primera carta é: %s\n", codigo1);

   printf("Digite o nome da primeira cidade");
   scanf("%s", cidade1);
   printf("A primeira cidade é:");

  
    



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
