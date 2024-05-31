#include <stdio.h>
void main()
{
    int conjA[15], conjB[15], i;

    printf("\nInforme os valore para A: \n");
    for(i=0; i<15; i++){
        scanf("%d", &conjA[i]);
    }

    for(i=0; i<15; i++){
        conjB[i] = conjA[i] * 2;
    }

    printf("\nOs valores de B sao: \n");
    for(i=0; i<15; i++){
        printf(" %d", conjB[i]);
    }
}
