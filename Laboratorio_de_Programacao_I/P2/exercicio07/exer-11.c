#include <stdio.h>
void main ()
/*Construa um programa que apure uma eleição com três candidatos. O programa deve
realizar as seguintes tarefas:
    • Calcular o total de votos para cada candidato;
    • Calcular a quantidade de votos nulos;
    • Calcular a quantidade de votos em branco;
    • Calcular o percentual de votos em branco e nulos em relação ao total.
    • A votação deve obedecer as seguintes convenções:
    1,2,3 => votos dos candidatos
    4 => votos em branco
    5 => votos nulos
    0 => encerramento da apuração*/
{
    int voto, cand1 = 0, cand2 = 0, cand3 = 0, branco = 0, nulo = 0, total;

    do{
        printf("\nOpcoes de Voto:\n");
        printf("\n- 1 - Candidato 01");
        printf("\n- 2 - Candidato 02");
        printf("\n- 3 - Candidato 03");
        printf("\n- 4 - Voto em Branco");
        printf("\n- 5 - Voto Nulo");
        printf("\n- 0 - Para Encerrar");
        printf("\n\nInforme o Voto: ");
        scanf("%d", &voto);

        switch(voto)
        {
            case 0:
                printf("\nVotacao Encerrada!\n");
                break;
            case 1:
                cand1++;
                break;
            case 2:
                cand2++;
                break;
            case 3:
                cand3++;
                break;
            case 4:
                branco++;
                break;
            case 5:
                nulo++;
                break;
            default:
                printf("\nVoto Incorreto!");
        }

    }while(voto != 0);

    total = (branco+nulo)*100/(cand1+cand2+cand3+branco+nulo);

    printf("\nNumero de votos dos Candidatos");
    printf("\nCandidato 01: %d", cand1);
    printf("\nCandidato 02: %d", cand2);
    printf("\nCandidato 03: %d", cand3);
    printf("\nNumero de votos em Branco: %d", branco);
    printf("\nNumero de votos Nulos: %d", nulo);
    printf("\nPercentual de votos brancos e nulos: %.1f\n\n", total);
}
