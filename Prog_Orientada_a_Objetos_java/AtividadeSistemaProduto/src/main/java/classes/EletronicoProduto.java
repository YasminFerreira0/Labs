package classes;

public class EletronicoProduto extends Produto implements InterfaceProdutos{
    private String marca;
    private double voltagem;
    
    public EletronicoProduto(String nome, double preco, String descricao, String marca, double voltagem){
        super(nome, preco, descricao);
        this.marca = marca;
        this.voltagem = voltagem;
    }
    
    
    public EletronicoProduto(String nome, double preco, String marca, double voltagem) {
        super(nome, preco, "Produto eletrônico");
        this.marca = marca;
        this.voltagem = voltagem;
    }
    
    
    public String getMarca(){
        return marca;
    }
    public void setMarca(String marca){
        this.marca = marca;
    }
    
    public double getVoltagem(){
        return voltagem;
    }
    public void setVoltagem(double voltagem){
        this.voltagem = voltagem;
    }

    @Override
    public double calculaDesconto() {
        return this.preco - (this.preco * 0.20);
    }

    @Override
    public String obtemDescricao(){
        return super.getDescricao() + "\nMarca: " + marca + "\nVoltagem: " + voltagem + "V";
    } 
}
