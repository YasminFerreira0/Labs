#include <iostream>
#include <string.h>

using namespace std;

float desconto(float &valorF, float taxa){
    float d;
    if(valorF >=0 && taxa >=0 && taxa <=100){
        d = valorF * (taxa/100);
        valorF = valorF - d;
        return d;
    }else{
        cout<<"Valores Incorretos!"<<endl;
        return 0;
    }
}

void exibir(float valorO, float desc, float valorF, float taxa){
    cout<<endl;
    cout<<"Valor Oridinal: R$ "<<valorO<<endl;
    cout<<"Desconto ("<<taxa<<"%): R$ "<<desc<<endl;
    cout<<"Valor Final: R$ "<<valorF<<endl;
}

int main (){
    float vTotal, t_desc, vOrig, desc;

    cout<<"Calculo de Desconto em Compras"<<endl;

    cout<<"Digite o valor total da compra: ";
    cin>>vTotal;

    cout<<"Informe a taxa de desconto (%): ";
    cin>>t_desc;

    vOrig = vTotal;
    desc = desconto(vTotal, t_desc);

    cout<<endl<<endl;

    exibir(vOrig, desc, vTotal, t_desc);

    return 0;

}
