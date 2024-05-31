/*Uma loja de materiais de construção pretende promover uma
liquidação de seu estoque com descontos variáveis de acordo
com o produto. Para isto, a loja necessita de um programa para
ler o código e o valor do produto e, em seguida, calcular e
mostrar o valor do produto com o devido desconto, conforme
apresenta a tabela abaixo. Dessa forma, faça o programa que
atenda a necessidade da loja. (Obs: usar a estrutura Switch)

    Código do Produto Desconto (%)
    1001        22%
    1254        30%
    1548        32%
    1687        37%
    1923        40%
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int codigo;
    float valor, desconto;

    cout<<"Informe o codigo do produto: ";
    cin>>codigo;

    cout<<"Informe o valor do produto: ";
    cin>>valor;

    switch (codigo){
        case 1001:
            desconto = valor - (valor * 0.22);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        case 1254:
            desconto = valor - (valor * 0.30);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        case 1548:
            desconto = valor - (valor * 0.32);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        case 1687:
            desconto = valor - (valor * 0.37);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        case 1923:
            desconto = valor - (valor * 0.40);
            cout<<"O valor do produto e: "<<desconto<<endl;
        break;
        default:
            cout<<"Codigo invalido.";
    }
}
