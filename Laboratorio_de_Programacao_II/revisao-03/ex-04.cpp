/*Faça um programa que leia uma matriz 5x5 de números inteiros e
que verifica se a média dos elementos da diagonal principal é igual
ou não a média dos elementos da diagonal secundária.*/

#include <iostream>
using namespace std;

int main()
{
	int mat[5][5], soma_princ, soma_sec, i, j;

	cout<<"\nInforme os elementos da matriz\n";

	for(i=0; i<5; i++){
        for(j=0; j<5; j++){
			cout<<" Linha "<<i+1<<" e Coluna "<<j+1<<" : ";
		   	cin>>mat[i][j];
        }
	}

	soma_princ = 0;
	soma_sec = 0;

	for(i=0; i<5; i++){
        soma_princ = soma_princ + mat[i][i];
        soma_sec = soma_sec + mat[i][5-i-1];
	}

    cout<<"\nMatriz Informada:\n";
    for(i=0; i<5; i++){
        cout<<"\n";
		for(j=0; j<5; j++){
			cout<<" "<<mat[i][j];
        }
    }

    cout<<endl<<endl;

	if((soma_princ / 5) == (soma_sec / 5) ){
        cout<<"\nA Media da Diagonal Principal eh Igual a Media da Diagonal Secundaria"<<endl<<endl;
    }else{
        cout<<"\nA Media da Diagonal Principal NAO eh Igual a Media da Diagonal Secundaria"<<endl<<endl;
    }

    return 0;
}