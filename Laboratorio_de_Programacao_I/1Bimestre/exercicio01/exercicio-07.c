#include <stdio.h>
void main()
{
    //leia a temperatura em fahrenheit e calcule e mostre o valor correspondente em celcius
    float F, C;
    printf("\nInforme uma temperatura em fahrenheit: ");
    scanf("%f", &F);
    C = (F - 32)/1.8;
    printf("\nA conversao de %f fahrenheit em celcius e %f", F, C);
}
