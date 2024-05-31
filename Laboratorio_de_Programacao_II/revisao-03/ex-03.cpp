/*Faça um programa para ler uma matriz 5x5 de números inteiros e
ler um número inteiro x. A seguir, o programa deve multiplicar os
elementos da terceira linha da matriz por x e exibir a matriz
modificada.*/

#include <iostream>
using namespace std;

int main ()
{
    int mat[5][5], x, i, j;

    cout<<"Informe os valores da matriz."<<endl;

    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout<<"Linha "<<i+1<<" e Coluna "<<j+1<<": ";
            cin>>mat[i][j];
        }
    }

    cout<<"Informe um valor para x: ";
    cin>>x;

    for (i=0; i<5; i++){
        mat[2][i] = mat[2][i] * x;
    }

    cout<<"Matriz modificada: "<<endl;
    for (i=0; i<5; i++){
        cout<<"\n";
        for(j=0; j<5; j++){
            cout<<" "<<mat[i][j];
        }
    }
    cout<<endl<<endl;
    return 0;
}