/*A corretora Segtotal concederá um aumento de salário aos seus funcionários, variável
de acordo com o cargo, conforme tabela abaixo. Para isso, faça um programa contendo
uma função para receber, por parâmetro, o salário e o código do cargo de um
funcionário, e calcular e mostrar o seu salário reajustado. Se o cargo do funcionário
não estiver na tabela, ele deverá, então, receber 35,5% de aumento.
    Código Cargo Percentual
    91 Gerente 10%
    92 Analista 20%
    93 Técnico 30%*/

#include <iostream>
using namespace std;

void reajuste(float salario, int codigo){
    switch (codigo){
        case 91:
            salario = salario * 1.1;
        break;
        case 92:
            salario = salario * 1.2;
        break;
        case 93:
            salario = salario * 1.3;
        break;
        default:
            salario = salario * 1.355;
        break;
    }

    cout<<"Salario com reajuste: "<<salario;

}

int main (){
    float salario;
    int codigo;

    cout<<"Informe o salario do funcionario: ";
    cin>>salario;

    cout<<"Informe o codigo do funcionario: ";
    cin>>codigo;

    reajuste(salario, codigo);

    return 0;
}
