/*Faça um programa contendo uma função que receba como parâmetro a hora de início e a
hora de término de um jogo, ambas subdivididas em dois valores distintos: horas e
minutos. A função deverá retornar a duração expressa em minutos, considerando que o
tempo máximo de duração de um jogo é de duração de um jogo é de 24 horas e que ele
pode começar em um dia e terminar no outro.*/

#include <iostream>
#include <string.h>

using namespace std;

int tempo_jogo(int h1, int m1, int h2, int m2);

int main() {
    int h1, m1, h2, m2, duracao;

    cout<<"\nInforme a hora de inicio do jogo ";
    cin>>h1;

    cout<<"\nInforme os minutos de inicio do jogo ";
    cin>>m1;

    cout<<"\nInforme a hora de termino do jogo ";
    cin>>h2;

    cout<<"\nInforme os minutos de termino do jogo ";
    cin>>m2;

    duracao = tempo_jogo(h1, m1, h2, m2);

    cout << "A duracao do jogo em minutos e: " <<duracao<< endl;

    return 0;
}


int tempo_jogo(int h1, int m1, int h2, int m2) {
    float dh, dm, total;

    if(h2 >= h1)
        dh = h2 - h1;
    else
        dh = 24 - h1 + h2;

    if(m2 >= m1)
        dm = m2 - m1;
    else
    {
        dm = 60 - m1 + m2;
        dh = dh - 1;
    }

    total = dh * 60 + dm;

    return total;
}
