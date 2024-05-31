#include <stdio.h>
void main()
{
    int codigo;
    float Vp, Vd;

    printf("\nInforme o codigo do produto: ");
    scanf("%d", &codigo);

    printf("\nInforme o valor do produto: ");
    scanf("%f", &Vp);

    switch (codigo)
    {
    case 1001:
        Vd = Vp - (Vp * 0.22) ;
    break;
    case 1254:
        Vd = Vp - (Vp * 0.30);
    break;
    case 1548:
        Vd = Vp -(Vp * 0.32);
    break;
    case 1687:
        Vd = Vp -(Vp * 0.37) ;
    break;
    case 1923:
        Vd = Vp - (Vp * 0.40) ;
    break;
    default:
        printf("\nCodigo incorreto");
    }

    printf("\nO valor do produto com desconto e %.2f", Vd);
}
