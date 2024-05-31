/*Faça um programa contendo uma função para calcular o índice de massa corporal
(IMC). O IMC é calculado pela seguinte formula:*/

#include <iostream>
#include <string.h>

using namespace std;

float imc(int h, float p);

int main(){
    int altura;
    float peso, IMC;

    cout<<"Informe o peso: ";
    cin>>peso;

    cout<<"Informe a altura: ";
    cin>>altura;

    cout<<endl<<"O indice de massa corporal e de: "<<imc(altura, peso)<<endl;

    return 0;

}

float imc(int h, float p){
    float i;

    i = p/(h*h);

    return i;
}