/*Uma revendedora de carros usados paga a seus funcionários
vendedores um salário fixo por mês e mais 5% do valor total das
vendas por ele efetuadas. Faça um programa que leia o salário
fixo do funcionário e o valor total de suas vendas. Calcule e
mostre o salário final do vendedor.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float sFixo, vendas, sFinal;

    cout<<"Informe o dalario fixo do funcionario: ";
    cin>>sFixo;
    cout<<"Informe o valor das vendas: ";
    cin>>vendas;

    sFinal = sFixo + (vendas * 0.05);

    cout<<"\nSalario Total R$: "<<fixed << setprecision(2)<<sFinal<<endl;

    return 0;
}
