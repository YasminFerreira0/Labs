#include <stdio.h>
void main (){
    int mat[5][5], x, i, j;

    printf("\nInfome os valores da matriz.\n");
    for (i=0;i<5; i++){
        for (j=0;j<5;j++){
            printf("\nLinha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &x);

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            //verifica qual e a linha
            if ( i == 3){//se a linha for a 4
                mat[i][j] = mat[i][j] * x;//os valores da linha 4 sao multiplicados pelo valor x
            }
        }
    }
    printf("\nmatriz modificada.\n");
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
}
