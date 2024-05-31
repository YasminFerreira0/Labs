#include <stdio.h>
void main ()
{
    /*Faça um programa que leia o número de identificação de um aluno, as 03 notas obtidas pelo aluno e a média dos exercícios que fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula:
        MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME ) / 7
        A atribuição de conceitos obedece a tabela abaixo:

            Média de Aproveitamento Conceito
            ≥ 9,0 A
            < 9,0 e ≥ 7,5 B
            < 7,5 e ≥ 6,0 C
            < 6,0 e ≥ 4,0 D
            < 4,0 E

        O programa deve escrever o número de identificação do aluno e o conceito obtido.*/
    int id;

    float n1, n2, n3, MA, ME;

    printf("Informe o numero de identoficacao doo aluno: ");
    scanf("%d", &id);

    printf("\nInforme a primeira nota: ");
    scanf("%f", &n1);

    printf("\nInforme a segundaa nota: ");
    scanf("%f", &n2);

    printf("\nInforme a terceira nota: ");
    scanf("%f", &n3);

    printf("\ninforme a media dos exercicios que faze parte da avaliacao: ");
    scanf("%f", &ME);

    MA = (n1 + (n2 * 2) + (n3 * 3) + ME ) / 7;

    if (MA>=9.0)
        printf("\nId aluno: %d, Nota: A", id);
    else {
        if (MA<9.0 && MA>=7.5)
            printf("\nid a luno: %d, Nota: B", id);
        else {
            if (MA<7.5 && MA>=6.0)
                printf("\nid aluno: %d, Nota: C", id);
            else{
                if(MA<6.0 && MA>=4.0)
                    printf("\nId aluno: %d, Nota: D", id);
                else
                    printf("\nId aluno: %d; Nota: E", id);
            }

        }
    }
}
