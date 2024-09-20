package classes;

public abstract class Veiculo {
    protected String marca;
    protected String modelo;
    protected int anoFabricacao;
    protected String numeroIdentificacao;

    public Veiculo() {
    }


    public Veiculo(String marca, String modelo, int anoFabricacao, String numeroIdentificacao){
        this.marca = marca;
        this.modelo = modelo;
        this.anoFabricacao = anoFabricacao;
        this.numeroIdentificacao = numeroIdentificacao;
    }
    
    public String getMarca(){
        return marca;
    }
    public void setMarca(String marca){
        this.marca = marca;
    }
    
    public String getModelo(){
        return modelo;
    }
    public void setModelo(String modelo){
        this.modelo = modelo;
    }
    
    public int getAnoFabricacao(){
        return anoFabricacao;
    }
    public void setAnoFabricacao(int anoFabricacao){
        this.anoFabricacao = anoFabricacao;
    }
    
    public String getNumeroIdentificacao(){
        return numeroIdentificacao;
    }
    public void setNumeroIdentificacao(String numeroIdentificacao){
        this.numeroIdentificacao = numeroIdentificacao;
    }
    
    public abstract double calcularImposto();
    
}
