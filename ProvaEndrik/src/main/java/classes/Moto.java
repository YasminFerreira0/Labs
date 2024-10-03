package classes;

public class Moto extends Veiculo{
    
    public Moto(String marca, String modelo, int anoFabricacao, String numeroIdentificacao){
        super(marca, modelo, anoFabricacao, numeroIdentificacao);
    }
    
    @Override
    public double calcularImposto() {
        return anoFabricacao * 150;
    }
    
}
