/*Faca um programa contendo uma funcao que calcula a media aritmetica de dois numeros. A leitura dos numeros e a exibicao do resultado deverão ser feitos dentro da funcao.*/

#include <iostream>

using namespace std;

void media(int a, int b){
    float m_arit;

    m_arit = (a + b) / 2;

    cout<<"Media aritmetica: "<<m_arit<<endl;
}

int main (){
    int n1, n2;

    cout<<"Informe um numero: ";
    cin>>n1;

    cout<<"Informe outro numero: ";
    cin>>n2;

    media(n1, n2);

    return 0;
}