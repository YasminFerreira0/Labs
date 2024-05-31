/*Faca um programa contendo uma funcao, onde passado um numero inteiro n como parametro, calcula e mostra o valor de n elevado a segunda potencia (n2). O valor n devera ser informado pelo usuario na funcao principal.*/
#include <iostream>

using namespace std;

void potencia(int n){
    int p;
    p = n * n;

    cout<<"O resultado e : "<<p<<endl;
}

int main (){
    int x;
    cout<<"Informe um numero inteiro: ";
    cin>>x;

    potencia(x);
}
