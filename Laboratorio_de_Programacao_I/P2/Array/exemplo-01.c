#include <stdio.h>
void main()
{
    float notas[10], soma = 0, media;
    int i;
    for(i = 0; i < 10; i++){
        printf("\nDigite a nota do aluno: ");
        scanf("%f", &notas);
        soma += notas[i];
    }
    media = soma/10;
    printf("\nA media dos alunos e: %g", media);
}
