#include <stdio.h>
void main ()
{
    int conjA[15], i, n;

    printf("\nInforme os valores para A: \n");
    for (i=0; i<15; i++){
        scanf("%d", &conjA[i]);
    }
    for(i=0, n=0; i<15; i++){
        if(conjA[i] == 10){
            n++;
        }
    }
    printf("\nO numero 10 aparece %d vezes", n);

}
