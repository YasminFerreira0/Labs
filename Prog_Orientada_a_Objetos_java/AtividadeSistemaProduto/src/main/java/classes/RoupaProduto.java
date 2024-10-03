package classes;

public class RoupaProduto extends Produto implements InterfaceProdutos{
    private String tamanho;
    private String cor;
    
    public RoupaProduto(String nome, double preco, String descricao, String tamanho, String cor){
        super(nome, preco, descricao);
        this.tamanho = tamanho;
        this.cor = cor;
    }
    
    
    public RoupaProduto(String nome, double preco, String tamanho, String cor) {
        super(nome, preco, "Roupa");
        this.tamanho = tamanho;
        this.cor = cor;
    }
    
    
    public String getTamanho(){
        return tamanho;
    }
    public void setTamanho(String tamanho){
        this.tamanho = tamanho;
    }
    
    public String getCor(){
        return cor;
    }
    public void setCor(String cor){
        this.cor = cor;
    }

    @Override
    public double calculaDesconto() {
        return this.preco - (this.preco * 0.40);
    }

    @Override
    public String obtemDescricao() {
        return super.getDescricao() + "\nTamanho: " + tamanho + "\nCor: " + cor + "V";
    }
    
}
