/*Faça um programa para ler o tempo de serviço e o salário de um
funcionário e, em seguida, calcular e mostrar um reajuste salarial
de acordo com a seguinte situação: se o funcionário possui
tempo de serviço inferior a 10 anos, o reajuste será de 8%, caso
contrário, o reajuste salarial será de 10%.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int tempo;
    float salario, reajuste;

    cout<<"Informe o tempo de servico do funcionario: ";
    cin>>tempo;

    cout<<"Informe o salario do funcionario: ";
    cin>>salario;

    if (tempo < 10){
        reajuste = salario * 1.08;
    }else{
        reajuste = salario * 1.10;
    }

    cout<<"\nValor do Salario Reajustado R$: "<<fixed<<setprecision(2)<<reajuste<<endl;

    return 0;
}
