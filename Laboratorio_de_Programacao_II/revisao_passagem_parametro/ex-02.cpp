/*Faça um programa contendo uma função para calcular a média aritmética de dois
números inteiros fornecidos por parâmetros. A leitura dos dados e a exibição do
resultado deverão ser feitas na função principal. Dessa forma, o resultado deverá ser
retornado por passagem de parâmetro por referência.*/

#include <iostream>
#include <string.h>

using namespace std;

float m_arit(int x, int n, float &m);

int main(){
    int n1, n2;
    float media;

    cout<<"Informe um nuemro: ";
    cin>>n1;

    cout<<"Informe outro numero: ";
    cin>>n2;

    m_arit(n1, n2, media);

    cout<<"A media aritmetica dos numeros e: "<<media<<endl;

    return 0;
}

float m_arit(int x, int y, float &m){
    m = (x+y)/2;
}

