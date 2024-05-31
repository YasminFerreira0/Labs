#include <stdio.h>
void main()
{
    //leia o raio de um circulo e calcule e mostre a sua area
    float raio, area;
    printf("\nInforme o raio de um circulo: ");
    scanf("%f", &raio);
    area = 3.14 * (raio*raio);
    printf("\nA area do circulo e %f", area);
}
