/*Faça um programa para ler as notas (n1, n2, n3) de cada aluno de
uma turma de 10 alunos e, em seguida, calcular e mostrar a media
de cada aluno. No final deve ser mostrada também a média da
turma.*/
#include <iostream>
using namespace std;

int main ()
{
    int i;
    float n1, n2, n3, media, mediaT;

    mediaT = 0;

    cout<<"Informe as notas dos alunos."<<endl;
    for (i=0; i<10; i++){
        cout<<endl<<"Nota 1: ";
        cin>>n1;
        cout<<"Nota 2: ";
        cin>>n2;
        cout<<"Nota 3: ";
        cin>>n3;

        media = (n1 + n2 + n3) /3;
        cout<<"media do aluno "<<i+1<<": "<<media<<endl;

        mediaT += media;
    }

    mediaT = mediaT/10;
    cout<<endl<<"A media total dos alunos e: "<<mediaT<<endl;

    return 0;
}
