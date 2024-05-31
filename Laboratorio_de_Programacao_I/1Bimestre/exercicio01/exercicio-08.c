#include <stdio.h>
void main()
{
    //leia a temperatura em celcius e calcule e mostre o valor correspondente em fahrenheit
    float F, C;
    printf("\nInforme uma temperatura em celcius: ");
    scanf("%f", &C);
    F = C * 1.8 + 32;
    printf("\nA conversao de %f celcius em fahrenheit e %f", C, F);

}
