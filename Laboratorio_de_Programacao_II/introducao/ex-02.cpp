/*Faça um programa que leia o raio e a altura de uma lata de óleo e
calcule e apresente o seu volume, utilizando a seguinte fórmula:
VOLUME = 3.14159 * RAIO2 * ALTURA.*/

#include <iostream>
#define PI 3.14159 //Declaração de constante
using namespace std;
int main()
{
    float raio, altura, volume;

    cout<<"Informe o raio da lata de oleo: ";
    cin>>raio;
    cout<<"Informe a altura da lata de oleo: ";
    cin>>altura;

    volume = PI * (raio * raio) * altura;

    cout<<"O volume da lata de oleo e: "<<volume<<endl;

    return 0;
}
