#include <stdio.h>

/* Criar um programa para calcular a media de três notas do aluno */
/* pedir para digitar as 3 notas */
/* Ao final exibir se o aluno foi reprovado ou aprovado */

int main(){
    float nota1, nota2, nota3;
    float media;
    
    /* Solicitando as notas */

    printf("Informe sua primeira notas: \n");
    scanf("%f", &nota1);
    printf("Informe sua segunda notas: \n");
    scanf("%f", &nota2);
    printf("Informe sua terceira notas: \n");
    scanf("%f", &nota3);

    /* Calculando a média */

    media = (nota1 + nota2 + nota3) / 3;

    /* Exibir a média */

    printf("A média é: %.1f", media);

    /* Verificar se o aluno foi aprovado*/

    if (media >= 7) {
        printf("\nAprovado\n");
    } else {
        printf("\nReprovado\n");
    }
    

    return 0;
}