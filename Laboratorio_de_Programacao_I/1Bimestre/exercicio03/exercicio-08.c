#include <stdio.h>
#include <conio.h>
void main()
{
    //Leia quatro notas de um aluno e que calcula e mostra a sua média e diga se o aluno foi aprovado ou reprovado na disciplina. Obs. Para ser aprovado aluno deve obter média maior ou igual a 6.0.
    float nota1, nota2, nota3, nota4, media;
    printf("\nInforme a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nInforme a segunda nota: ");
    scanf("%f", &nota2);

    printf("\nInforme a terceira nota: ");
    scanf("%f", &nota3);

    printf("\nInforme a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if (media >= 6.0)
        printf("\nAluno aprovado");
    else    
        printf("\nAluno reprovado");
}