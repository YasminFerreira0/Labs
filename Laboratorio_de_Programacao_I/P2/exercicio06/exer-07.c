#include <stdio.h>
void main()
{
    float jose, pedro;
    int anos = 0;

    pedro = 1.50;
    jose = 1.10;

    while(pedro<=jose){
        jose = jose + 0.02;
        pedro = pedro + 0.03;
        anos++;
    }
    printf("\nPedro sera maior que jose em %d anos", anos);
}
