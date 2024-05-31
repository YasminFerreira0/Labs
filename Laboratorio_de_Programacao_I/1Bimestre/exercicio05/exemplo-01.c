#include <stdio.h>
void main ()
{
    int est;
    printf("\ndigite o estagio de usinagem:\n");
    scanf("%d", &est);
    switch (est)
    {
        case 1:
            printf("\nDesbaste grosso");
        break;
        case 2:
            printf("\nDesbalte fino");
        break;
        case 3:
            printf("\nAcabamento");
        break;
        case 4:
            printf("\nPolimento");
        break;
    }
}
