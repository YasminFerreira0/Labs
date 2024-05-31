/*Faça um programa para ler 10 números inteiros aleatórios e
calcular e mostrar o produto dos números ímpares e a soma dos
números pares.*/

#include <iostream>
using namespace std;

int main ()
{
    int i, n, impares, pares;

    pares = 0;
    impares = 1;

    cout<<"Informe um numero inteiro aleatorio: "<<endl;
    for (i=0; i<10; i++){
        cin>>n;
        if (n%2 == 0){
            pares += n;
        }else{
            impares = impares * n;
        }
    }

    cout<<"O produto dos numers impares e: "<<impares<<endl;
    cout<<"A soma dos numeros pares e: "<<pares<<endl;

    return 0;
}
