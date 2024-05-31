/*Faça um programa para ler um vetor de 10 números reais, calcular
e mostrar a média dos números do vetor e, em seguida, calcular e
mostrar a quantidade de números menores que a média e a
quantidade de números maiores ou iguais à média.*/

#include <iostream>
using namespace std;

int main ()
{
    int i, menor, maiorIgual;
    float vet[10], soma, media;

    menor = 0;
    maiorIgual = 0;

    cout<<"Informe os valores do vetor."<<endl;
    for (i=0; i<10; i++){
        cin>>vet[i];
        soma += vet[i];
    }

    media = soma /10;

    for(i=0; i<10; i++){
        if(vet[i]<media){
            menor ++;
        }else{
            maiorIgual ++;
        }
    }

    cout<<"A media dos valores do vetor e: "<<media<<endl;
    cout<<"A quantidade dos numeros menores que a media e: "<<menor<<endl;
    cout<<"A quantidade dos numeros maiores que a media e: "<<maiorIgual<<endl;
}
