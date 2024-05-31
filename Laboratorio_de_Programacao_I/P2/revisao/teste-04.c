#include <stdio.h>
void main ()
{
    int mat_A[4][4], mat_T[4][4], i, j;

    printf("\ninforme os valores da matriz.\n");
    for (i = 0; i < 4; i++){
        for (j=0; j<4; j++){
            printf("Linha %d e Coluna %d: ", i+1, j+1);
            scanf("%d", &mat_A[i][j]);
        }
    }

    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            mat_T[j][i] = mat_A[i][j];
        }
    }

    printf("\nMatriz transposta:\n");
    for(i = 0; i < 4; i++){
        printf("\n");
		for(j = 0; j < 4; j++)
			printf("%d", mat_T[i][j]);
    }

}
