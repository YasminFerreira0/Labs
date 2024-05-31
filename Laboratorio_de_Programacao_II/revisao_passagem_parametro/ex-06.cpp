/*Faça um programa contendo uma função para receber, por parâmetro, um valor inteiro
e positivo n e retornar o valor de S, obtido pelo seguinte cálculo:
    S = 1/1 + 1/2 + 1/3 + ... + 1/n*/
    
    
#include <iostream>
#include <string.h>

using namespace std;

float numS(int x);

int main(){
    int n, i;

    cout<<"Informe um numero para calcular: ";
    cin>>n;
    
    cout<<"O valor de S e: "<<numS(n)<<endl;

    return 0;
}

float numS(int x){
    int i, j, f;
    float s = 1;

    cout<<endl<<"S = 1 + ";

    for (i=1; i<=x; i++){
        f =1;
        for(j=1; j <= i; j++){
            f = f*j;
        }
        s = s + (float)1/f;
        cout<<"1/"<<i<<"! + ";
    }

    return s;
}