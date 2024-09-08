
package classes;

public class ContaBancaria {
    protected double saldo = 100;
    protected double taxaJuros = 1.4;
    
    public ContaBancaria(double saldo, double taxaDeJuros){
        this.saldo = saldo;
        this.taxaJuros = taxaDeJuros;
    }
    public double getSaldo(){
        return saldo;
    }
    public void setSaldo(double saldo){
        this.saldo = saldo;
    }

    public double getTaxaDeJuros(){
        return taxaJuros;
    }
    public void setTaxaDeJuros(double taxaDeJuros){
        this.taxaJuros = taxaDeJuros;
    }
    
    public double calcularJuros(){
        return saldo * taxaJuros;
    }
    
}
