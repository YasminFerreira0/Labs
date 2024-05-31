#include <stdio.h>
void main ()
/*O algoritmo de Euclides pode ser usado para encontrar o máximo divisor comum (MDC) de
dois inteiros positivos, n1 e n2. Exemplo: suponha n1 = 72 e n2 = 42; você pode usar este
algoritmo da seguinte maneira:
a) Divida o maior pelo menor (72/42): 72 = 42 * 1 + 30
b) Divida o divisor (42) pelo resto (30): 42 = 30 * 1 + 12
c) Repita este processo até que obtenha um resto igual a zero:
30 = 12 * 2 + 6
12 = 6 * 2 + 0
d) O último resto não zero é o MDC de n1 e n2.*/
{
    int n1, n2, resto, aux;

    printf("\nInforme o primeiro numero: ");
    scanf("%d", &n1);

    printf("\nInforme o segundo numero: ");
    scanf("%d", &n2);

    if(n1 < n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    resto = n1 % n2;

    while(resto != 0){
        n1 = n2;
        n2 = resto;
        resto = n1 % n2;
    }

    printf("\nMDC dos numeros: %d\n\n", n2);

}
