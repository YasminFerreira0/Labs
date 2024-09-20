package classes;

public class Bicicleta extends Veiculo implements VeiculoEletrico{

    public Bicicleta(String marca, String modelo, int anoFabricacao, String numeroIdentificacao) {
        super(marca, modelo, anoFabricacao, numeroIdentificacao);
    }
    
    public String anoFabricacao(){
        return anoFabricacao+"";
    }

    @Override
    public double calcularImposto() {
        return 0;
    }

    @Override
    public double calcularDescontoEletrico() {
        return 10;
    }
    
}
