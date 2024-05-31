#include <iostream>
using namespace std;
struct Aluno {
    int matricula;
    float nota[3];
    float media;
};
int main(){
    Aluno a;

    a.matricula = 456;
    a.nota[0]=7.5;
    a.nota[1]=5.2;
    a.nota[2]=8.4;

    a.media = (a.nota[0] + a.nota[1] + a.nota[2])/3;

    cout<<"Matricula: "<<a.matricula<<endl;
    cout<<"Media: "<<a.media<<endl;

    return 0;
}
