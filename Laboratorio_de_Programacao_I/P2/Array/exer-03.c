#include <stdio.h>
void main ()
{
    int conjA[15], conjB[15], conjC[30], i;

    printf("informe os valores para A: \n");
    for(i=0; i<15; i++){
        scanf("%d", &conjA[i]);
    }

    printf("\nInforme os valores para B: \n");
    for(i=0; i<15; i++){
        scanf("%d", &conjB[i]);
    }

    for(i=0; i<15; i++){
        conjC[i] = conjA[i];
        conjC[i + 15] = conjB[i];
    }

    printf("\nos elementos de C sao: \n");
    for(i=0; i<30; i++){
        printf(" %d", conjC[i]);
    }
}
