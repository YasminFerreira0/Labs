
package classes;

public class ContaPoupanca extends ContaBancaria{
    private double valorMinimo;
    private String tipoConta;
    
    public ContaPoupanca(double valoMinimo, String tipoConta, double saldo, double taxaJuros){
        super(saldo, taxaJuros);
        this.valorMinimo = valoMinimo;
        this.tipoConta = tipoConta;
    }
    
    public double getValorMinimo(){
        return valorMinimo;
    }
    public void setValorMinimo(double valorMinimo){
        this.valorMinimo = valorMinimo;
    }

    public String getTipoConta(){
        return tipoConta;
    }
    public void setTipoConta(String tipoConta){
        this.tipoConta = tipoConta;
    }
    
    /**
     *
     * @return
     */
    @Override
    public double calcularJuros (){
        if(saldo >= valorMinimo){
            return saldo * taxaJuros;
        }else{
            return 0;
        }
    }
}
