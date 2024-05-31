#include <stdio.h>
void main ()
{
    int i = 0;
    float n, resultado;

    do{
        printf("Informe um numero aleatorio: ");
        scanf("%f", &n);
        if (n>=0){
            resultado = n;
        }
        i++;


    }while(n != -99);
}
