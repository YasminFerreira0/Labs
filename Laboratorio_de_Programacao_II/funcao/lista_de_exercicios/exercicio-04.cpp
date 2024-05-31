/*Faca um programa contendo uma funcao para receber, por parametro, tres valores
inteiros representando um horario expresso em horas, minutos e segundos. A funcao
devera entao converter e mostrar o horario (horas, minutos e segundos) para apenas
segundos.*/

#include <iostream>

using namespace std;

void horario(int h, int m, int s){
    int segundos;

    segundos = (h * 3600) + (m * 60) + s;

    cout<<"O horario em sungundos e: "<<segundos;

}

int main (){
    int h, m, s;

    cout<<"Informe as horas: ";
    cin>>h;

    cout<<"Informe os minutos: ";
    cin>>m;

    cout<<"Informe os segundos: ";
    cin>>s;

    horario(h, m, s);

    return 0;

}
