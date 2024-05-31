#include <stdio.h>
void main ()
{
    //Leia três notas de um aluno e calcule e mostre a média final deste aluno. Considere que a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente.
    float nota1, nota2, nota3, mediaP;
    printf("\nInforme a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &nota2);
    printf("\nInforme a terceira nota: ");
    scanf("%f", &nota3);
    mediaP = ((nota1*2) + (nota2*3) + (nota3*5)) / 2 + 3 + 5;

    printf("\nA media das notas e:%f", mediaP);
}