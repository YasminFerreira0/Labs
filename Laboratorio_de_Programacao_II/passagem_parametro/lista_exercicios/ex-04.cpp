/*Construa um programa contendo uma função que receba como parâmetro um valor inteiro
e positivo N e retorne o valor de S, obtido pelo seguinte cálculo:
    S = 1 + 1/1! + 1/2! 1/3! + ... + 1/N!
*/

#include <iostream>
#include <string.h>

using namespace std;

float valorS(int x);

int main(){
    int n;
    float s;

    cout<<"Informe um valor inteiro positivo: ";
    cin>>n;

    s = valorS(n);

    cout<<endl<<"S = "<<s<<endl;

    return 0;

}

float valorS (int x){
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

