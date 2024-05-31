#include <stdio.h>
void main()
{
    float R, A, V;
    printf("\nInforme o raio da lata: ");
    scanf("%f", &R);
    printf("\nInforme a altura da lata: ");
    scanf("%f", &A);

    V = 3.14159 * (R*R) * A;
    printf("\nO volume da lata e: %f", V);
}
