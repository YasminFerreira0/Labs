#include <stdio.h>
void main()
/*Tentando descobrir se um dado era viciado, um dono de cassino o lançou 15 vezes.
Para ajuda-lo, faça um programa que leia os 15 resultados dos lançamentos efetuados e
calcule o número de ocorrências de cada face.*/
{
    int i, resultado, face1, face2, face3, face4, face5, face6;
    face1 =0;
    face2 = 0;
    face3 = 0;
    face4 = 0;
    face5 = 0;
    face6 = 0;

    for(i=1; i<=15; i++){
        printf("Informe o resultado do lancamento: ");
        scanf("%d", &resultado);

        switch (resultado)//de acordo com o valor informado ele soma a quantidade de acorrencia de casa face 
        {
        case 1:
            face1++;
        break;
        case 2:
            face2++;
        break;
        case 3:
            face3++;
        break;
        case 4:
            face4++;
        break;
        case 5:
            face5++;
        break;
        case 6:
            face6++;
        break;
        
        default:
            printf("\nValor invalido!");
        break;
        }

    }
    printf("\nO numero de ocorrencia de cada face e: \n");//apresenta a quantidade de acorrencias de cada face 
    printf("Face 1: %d", face1);
    printf("\nFace 2: %d", face2);
    printf("\nFace 3: %d", face3);
    printf("\nFace 4: %d", face4);
    printf("\nFace 5: %d", face5);
    printf("\nFace 6: %d", face6);

}