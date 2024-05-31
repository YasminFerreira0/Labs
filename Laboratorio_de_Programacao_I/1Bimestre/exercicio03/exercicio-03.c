#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y, d;
    printf("informe um numero nteiro: ");
    scanf("%d", &x);
    printf("\ninforme um segundo numero inteiro: ");
    scanf("%d", &y);
    if (x>y){
        d = x-y;
    }else{
        d = y-x;
    }
        printf("\nA diferença entre os numeros e %d", d);
}
