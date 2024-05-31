/*Faca um programa contendo uma funcao para receber, por parametro, tres valores
inteiros informados no modulo principal. A funcao devera entao determinar e mostrar o
menor valor dos tres valores informados.*/

#include <iostream>
using namespace std;

void menor(int a, int b, int c){
    int menor;
    menor = a;

    if(b<menor){
        menor = b;
    }
    if(c<menor){
        menor = c;
    }
    cout<<"O menor numero e: "<<menor<<endl;
}

int main (){
    int a, b, c;

    cout<<"Informe tres numeros para comparar."<<endl;

    cout<<"A: ";
    cin>>a;

    cout<<"B: ";
    cin>>b;

    cout<<"C: ";
    cin>>c;

    menor(a, b, c);

    return 0;
}
