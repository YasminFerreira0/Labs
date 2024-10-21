package entidade;

/*Crie um programa que leia dados de um animal e cadastre ele em uma lista
O programa deve:
    Conter um Menu com opcao de cadastrar, Listar e sair
    Utilizar uma classe para representar o animal
    Utilizar metodos acessores.
    Realizar leitura atraves do objeto Scanner
*/

public class Animal {
    private String nome;
    private String raca;
    private int idade;

    public Animal(){
        nome = "Nao informada.";
        raca = "Nao informada.";
        idade = 0;
    }

    public Animal(String nome, String raca, int idade) {
        this.nome = nome;
        this.raca = raca;
        this.idade = idade;
    }

    public String getNome(){
        return nome;
    }
    public void setNome(String nome){
        this.nome = nome;
    }

    public String getRaca(){
        return raca;
    }
    public void setRaca(String raca){
        this.raca = raca;
    }

    public int getIdade(){
        return idade;
    }
    public void setIdade(int idade){
        this.idade = idade;
    }

    public String listData(){
        return  "\nNome: "+nome+
                "\nRaca: "+raca+
                "\nIdade: "+idade;
    }
}

