/*Faça um programa contendo uma função que receba por passagem de parâmetro cinco
valores inteiros e que determina o maior e o menor entre eles. O maior e o menor valor
devem ser apresentados na função principal do programa.*/

#include <iostream>
using namespace std;

int maior_menor(int vet[], int &maior, int &menor);

int main() {
    int V[5], maior, menor, i;

    cout<<"\nInforme cinco valores inteiros ";
    for(i = 0; i < 5; i++){
        cin>>V[i];
    }

    maior_menor(V, maior, menor);

    cout<<"\nMaior valor: "<<maior<<endl;
    cout<<"\nMenor valor: "<<menor<<endl;

    return 0;
}

int maior_menor(int V[], int &maior, int &menor){
    int i;

    maior = V[0];
    menor = V[0];

    for(i = 1; i < 5; i++)
    {
        if(maior < V[i]){
            maior = V[i];
        }else{
            if(menor > V[i])
                menor = V[i];
        }
    }
}
