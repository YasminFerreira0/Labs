/*Faca um programa contendo uma funcao para receber por parametro o salario e o tempo de servico
de um funcionario e promover um reajuste salarial. A funcao devera reajustar o salario de acordo
com o tempo de servico do funcionario. Se o funcionario possui tempo de servico inferior a 10
anos, o reajuste sera de 10%, caso contrario, o reajuste sera de 15%. Ao final, a funcao devera
mostrar o salario reajustado.*/

#include <iostream>

using namespace std;

void reajuste (float salario, int tempo){
    float sr;
    if(tempo<10){
        salario = salario * 1.1;
    }else{
        salario = salario * 1.15;
    }

    cout<<"O salario do funcionario com reajuste e: "<<salario<<endl;

}

int main (){
    float salario;
    int tempo;

    cout<<"Informe o salario do funcionario: ";
    cin>>salario;

    cout<<"Informe o tempo de servico do funcionario: ";
    cin>>tempo;

    reajuste(salario, tempo);

    return 0;
}
