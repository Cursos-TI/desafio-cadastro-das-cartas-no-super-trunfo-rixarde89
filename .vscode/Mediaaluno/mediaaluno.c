#include <stdio.h>

/* Criar um programa para calcular a media de três notas do aluno */
// Calcular a soma das 3 notas e tirar a média do aluno//
/* pedir para digitar as 3 notas */

int main(){
    float nota1, nota2, nota3;
    float media;
    char aprovado[50], reprovado[50];
    
    printf("Informe sua primeira notas: \n");
    scanf("%f", &nota1);

    printf("Informe sua segunda notas: \n");
    scanf("%f", &nota2);

    printf("Informe sua terceira notas: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média é: %.1f", media);


    return 0;
}