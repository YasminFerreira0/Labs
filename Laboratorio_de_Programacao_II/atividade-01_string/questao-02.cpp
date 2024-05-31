/*Fazer um programa para ler uma frase (string) de no máximo 100 caracteres e contar o
número de vezes em que cada vogal (a, e, i, o, u) aparece na frase.
    Exemplo:
    String: “Nesta prova vou tirar dez”. Número de vogais: a = 3, e = 2, i = 1, o = 2, u = 1.
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    char frase[101];
    int v_a, v_e, v_i, v_o, v_u, i;
    v_a = 0;
    v_e = 0;
    v_i = 0;
    v_o = 0;
    v_u = 0;

    cout<<"Informe uma frase de no maximo 100 caracteres."<<endl;
    gets(frase);

    for(i=0; i<strlen(frase)-1; i++){
        if(frase[i] == 'a' || frase[i]=='A'){
            v_a ++;
        }else{
            if(frase[i] == 'e' || frase[i]=='E'){
                v_e ++;
            }else{
                if(frase[i] == 'i' || frase[i]=='I'){
                    v_i ++;
                }else{
                    if(frase[i] == 'o' || frase[i]=='O'){
                        v_o ++;
                    }else{
                        if (frase[i]=='u'|| frase[i]=='U')
                        {
                            v_u ++;
                        }
                        
                    }
                }
            }
        }
    }
        
    cout<<"Numero de vogais."<<endl;
    cout<<"a: "<<v_a<<endl;
    cout<<"e: "<<v_e<<endl;
    cout<<"i: "<<v_i<<endl;
    cout<<"o: "<<v_o<<endl;
    cout<<"u: "<<v_u<<endl;

    return 0;
}
