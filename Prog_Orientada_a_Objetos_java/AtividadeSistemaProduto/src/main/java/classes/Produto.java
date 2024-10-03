package classes;

public class Produto {
    protected String nome;
    protected double preco;
    protected String descricao;

    public Produto(String nome, double preco, String descricao){
        this.nome = nome;
        this.preco = preco;
        this.descricao = descricao;
    }

    public String getNome(){
        return nome;
    }
    public void setNome(String nome){
        this.nome = nome;
    }

    public double preco(){
        return preco;
    }
    public void setPreco(double preco){
        this.preco = preco;
    }
    
    public String getDescricao(){
        return descricao;
    }
    public void setDescricao(String descricao){
        this.descricao = descricao;
    }

    public String exibirDados(){
        return  "Nome: " +nome+ "\n"+
                "Preco: R$" +preco+ "\n"+
                "Descricao: " +descricao;
    }

}
