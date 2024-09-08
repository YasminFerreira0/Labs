
package classes;

public class ContaInvestimento extends ContaBancaria{
    private double taxaJurosVariavel;
    private double valorInvestimento;
    
    public ContaInvestimento(double saldo, double taxaJuros, double taxaJurosVariavel, double valorInvestimento) {
        super(saldo, taxaJuros);
        this.taxaJurosVariavel = taxaJurosVariavel;
        this.valorInvestimento = valorInvestimento;
    }
    
    public double getTaxaJurosVariavel(){
        return taxaJurosVariavel;
    }
    public void setTaxaJurosVariavel(double taxaJurosVariavel){
        this.taxaJurosVariavel = taxaJurosVariavel;
    }

    public double getValorInvestimento(){
        return valorInvestimento;
    }
    public void setValorInvestimento(double valorInvestimento){
        this.valorInvestimento = valorInvestimento;
    }
    
    @Override
    public double calcularJuros() {
        return valorInvestimento * (taxaJuros + taxaJurosVariavel);
    }
}
