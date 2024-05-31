/*Faca um programa contendo uma funcao para receber, por parametro, um valor inteiro
e positivo n e calcular e mostrar o valor de S, obtido pelo seguinte cálculo:
    S = 1/1 + 1/2 + 1/3 + ... + 1/n*/
#include <iostream>
using namespace std;

void valorS(int n){
    float s = 0, i;

    for(i=1; i<n; i++){
        s = s + 1/i;
    }

    cout<<"O valor de S obtido foi: "<< s <<endl;
}

int main (){
    int n;

    cout<<"Informe um numero inteiro positivo: ";
    cin>>n;

    valorS(n);

    return 0;
}
