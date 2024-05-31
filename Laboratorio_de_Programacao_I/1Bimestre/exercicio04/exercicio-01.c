#include <stdio.h>
void main()
{
    float n1, n2, n3, n4, media;

    printf("Infoeme a primeira nota: ");
    scanf("%f", &n1);

    printf("Infoeme a segunda nota: ");
    scanf("%f", &n2);

    printf("Infoeme a terceira nota: ");
    scanf("%f", &n3);

    printf("Infoeme a quarta nota: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4.0;

    if (media >= 6.0)
        printf("\nAluno aprovado");
    else {
        if (media >= 3.0)
            printf("\nAluno de exame");
        else
            printf("\nAluno reprovado");
    }
}
