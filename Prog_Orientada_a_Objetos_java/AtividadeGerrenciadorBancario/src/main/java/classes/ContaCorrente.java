
package classes;

public class ContaCorrente extends ContaBancaria{
    private double limiteCheque;
    private double taxaAdicional;
    
    public ContaCorrente(double saldo, double taxaJuros, double limiteCheque, double taxaAdicional) {
        super(saldo, taxaJuros);
        this.limiteCheque = limiteCheque;
        this.taxaAdicional = taxaAdicional;
    }
    
    public double getLimiteCheque(){
        return limiteCheque;
    }
    public void setLimiteCheque(double limiteCheque){
        this.limiteCheque = limiteCheque;
    }

    public double getTaxaAdicional(){
        return taxaAdicional;
    }
    public void setTaxaAdicional(double taxaAdicional){
        this.taxaAdicional = taxaAdicional;
    }
    
    @Override
    public double calcularJuros() {
        if(saldo < 0 ){
          return saldo * (taxaJuros + taxaAdicional);
        }else{
            return saldo * taxaJuros;
        }
    }
}
