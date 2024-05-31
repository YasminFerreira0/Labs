/*Capicuas sao numeros que tem o mesmo valor, se lido da esquerda para direita ou da direita para a
esquerda. Ex.: 44, 22, 66, etc. Faca um programa contendo uma funcao que recebe por parametro
um numero inteiro de dois digitos e que verifica e mostra se o numero e capicua ou nao.*/

#include <iostream>

using namespace std;

void capicua (int n){
    if((n/10) == (n%10)){
        cout<<"O numero e um capicua."<<endl;
    }else{
        cout<<"O numero nao e uma capicua."<<endl;
    }
}

int main (){
    int n;

    cout<<"Informe um numero inteiro: ";
    cin>>n;

    capicua(n);

    return 0;
}
