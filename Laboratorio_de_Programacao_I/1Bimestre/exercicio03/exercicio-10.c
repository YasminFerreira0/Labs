#include <stdio.h>
#include <conio.h>
void main()
{
    //Leia o sexo (‘h’ para homem e ‘m’ para mulher) e a altura de uma pessoa, e que calcula e mostra o seu peso ideal baseado na altura. Sabe-se que:
        //a. Para homens: peso ideal = (72.7 * altura) - 58
        //b. Para mulheres: peso ideal = (62.1 * altura) - 44.7
    float sexo, altura, pesoH, pesoM;
    printf("\nInforme o sexo: 1 = homem, 2 = mulher: ");
    scanf("%f", &sexo);
    printf("\nInforme a altura: ");
    scanf("%f", &altura);
    pesoH = (72.7 * altura) - 58;
    pesoM = (62.1 * altura)-44.7;

    if (sexo == 1)
        printf("\nO peso ideal e %.2f", pesoH);
    else
        printf("\nO peso ideal e %.2f", pesoM);



}
