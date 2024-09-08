// Crie um programa que cadastre varios veiculos e imprima seus dados.
// Crie um menu com a opcao de cadastrar, listar e sair.
// Utilize uma classe para representar o veiculo.
// Adicione um contrutor vazio e um construtor com parametros

package entidade;

public class Veiculo {

    public String placa;
    public String modelo;
    public String cor;
    public int ano;

    public Veiculo() {
        placa = "Nao informada.";
        modelo = "Nao informada.";
        cor = "Nao informada.";
        ano = 0000;
    }

    public Veiculo(String placa, String modelo, String cor, int ano) {
        this.placa = placa;
        this.modelo = modelo;
        this.cor = cor;
        this.ano = ano;

    }

    public String listData() {
        return "\nPlaca: " + placa
                + "\nModelo: " + modelo
                + "\nCor: " + cor
                + "\nAno: " + ano;
    }
}