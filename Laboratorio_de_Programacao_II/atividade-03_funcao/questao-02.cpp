/*Faca um programa contendo uma funcao que recebe por parametro dois numeros inteiros, e que
calcula e mostra na tela a soma de todos os numeros inteiros existentes entre eles.*/

#include <iostream>
using namespace std;

void soma (int n1, int n2){
    int s, i, menor, maior;

    s = 0;

    if(n1>n2){
        maior = n1;
        menor = n2;
    }else{
        maior = n2;
        menor = n1;
    }

    for( i = menor +1; i< maior; i++){
        s = s + i;
    }

    cout<<"A soma entre os numeros existentes entre os valores informados e: "<<s<<endl;
}

int main (){
    int n1, n2;

    cout<<"Informe um numero inteiro: ";
    cin>>n1;

    cout<<"Informe outro numero inteiro: ";
    cin>>n2;

    soma(n1, n2);

    return 0;
}
