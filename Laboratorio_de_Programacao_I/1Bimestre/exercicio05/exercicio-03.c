#include <stdio.h>
void main()
{
    int codigo;
    float salario, Nsalario, diferenca;

    printf("\nInforme o codigo do cargo do funcionario: ");
    scanf("%d", &codigo);

    printf("\ninforme o salario do funcionario: ");
    scanf("%f", &salario);

    switch (codigo)
    {
        case 101:
        Nsalario = salario * 1.1;
        break;
        case 102:
            Nsalario = salario * 1.2;
        break;
        case 103:
            Nsalario = salario * 1.3;
        break;
        default:
            Nsalario = salario * 1.4;

    }
    diferenca = Nsalario - salario;

    printf("\nO salario antigo e %.2f", salario);
    printf("\nO novo salario e %.2f", Nsalario);
    printf("\nA diferenca e de %.2f", diferenca);


}
