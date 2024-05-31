/*Faca um programa contendo uma funcao que mostra se
um numero inteiro passado como parametro e par ou impar.
*/
#include <iostream>
using namespace std;

void parImpar(int n);

int main (){
    int n;
    cout<<"Inoforme um numero inteiro: ";
    cin>>n;

    parImpar(n);

    return 0;
}

void parImpar(int n){
    if(n%2 == 0){
        cout<<"O numero e par."<<endl;
    }else{
        cout<<"O numero e impar."<<endl;
    }
}