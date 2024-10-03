package classes;

public class Carro extends Veiculo{
    
    public Carro(String marca, String modelo, int anoFabricacao, String numeroIdentificacao){
        super(marca, modelo, anoFabricacao, numeroIdentificacao);
    }

    @Override
    public double calcularImposto() {
        return anoFabricacao * 200;
    }
    
}
