#include <stdio.h>
void main ()
{
    //declaracao das variaveis
    int operacao, i;
    float n1, n2, resultado;


    do
    {
        //mostra pro usuario as operacoes que ele pode executar na calculadora
        printf("\nCALCULADORA\n");
        printf("\n0 - Sair");
        printf("\n1 - Adicao");
        printf("\n2 - Subtracao");
        printf("\n3 - Multiplicacao");
        printf("\n4 - Divisao");
        printf("\n5 - Potenciacao\n");

        printf("Informe qual opecao deseja realizar: ");
        scanf("%d", &operacao);

        //de acordo com a operacao escolhida ele vai realizar determinada conta
        switch (operacao)
        {
            case 0:
                printf("\nEncerrando calculadora...\n");
            break;
            case 1:
                //pede ao usuario os numeros a serem utilizados na operacao
                printf("\nInforme o primeiro numero: ");
                scanf("%f", &n1);

                printf("\nInforme o segundo numero: ");
                scanf("%f", &n2);

                resultado = n1 + n2;//realiza a operacao de soma

                printf("\n%.2f + %.2f = %.2f\n", n1, n2, resultado);//exibe o resultado
                
            break;
            case 2:
                printf("\nInforme o primeiro numero: ");
                scanf("%f", &n1);

                printf("\nInforme o segundo numero: ");
                scanf("%f", &n2);

                resultado = n1 - n2;//realiza a operacao de subtracao

                printf("\n%.2f - %.2f = %.2f\n", n1, n2, resultado);
            break;
            case 3:
                printf("\nInfoeme o primeiro numero: ");
                scanf("%f", &n1);

                printf("\nInfoeme o segundo numero: ");
                scanf("%f", &n2);

                resultado = n1 * n2;//realiza a operacao de multiplicacao

                printf("\n%.2f * %.2f = %.2f\n", n1, n2, resultado);
            break;
            case 4:
                printf("\nInfoeme o primeiro numero: ");
                scanf("%f", &n1);

                printf("\nInfoeme o segundo numero: ");
                scanf("%f", &n2);

                if (n2 == 0){
                    printf("\nNao e possivel realizar divisao por 0\n");
                }else{ 
                    resultado = n1 / n2;//realiza a operacao de divisao

                    printf("\n%.2f / %.2f = %.2f\n", n1, n2, resultado);
                }
            break;
            case 5:
                printf("Informe o valor da base: ");
                scanf("%f", &n1);

                printf("\nInforme o numero do expoente: ");
                scanf("%f", &n2);

                resultado = 1;
                i = 1;
                //realizara a operacao enquanto a variavel i for menor ou igual ao expoente
                while (i<=n2)
                {
                    resultado = resultado * n1;
                    i++;
                }
                printf("\n%.2f ^ %.2f = %.2f\n", n1, n2, resultado);
            break;
            default:
                printf("\nOperacao Invalida.");//a opecao infoemada nao esta na estrutura switch
            break;
        }

    } while (operacao != 0);
    
}
    