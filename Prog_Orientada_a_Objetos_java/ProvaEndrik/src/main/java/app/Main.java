package app;

import classes.Carro;
import classes.Moto;
import classes.Bicicleta;

import javax.swing.JOptionPane;

public class Main {
    public static void main(String[] args) {
        //Instancia Carro
        Carro carro = new Carro("Toyota", "Trueno", 1986, "ABC1234");
        
        JOptionPane.showMessageDialog(null, "\nMarca: "+carro.getMarca()+
                                        "\nModelo: "+carro.getModelo()+
                                        "\nAno de fabricacao: "+carro.getAnoFabricacao()+
                                        "\nNumero de Identificacao: "+carro.getNumeroIdentificacao()+
                                        "\nImposto: "+carro.calcularImposto(),
                                    "Carro", JOptionPane.INFORMATION_MESSAGE, null);
        
        //Instancia Moto
        Moto moto = new Moto("Kawasaki", "Ninja 400",2018, "DEF5678");
        
        JOptionPane.showMessageDialog(null, "\nMarca: "+moto.getMarca()+
                                        "\nModelo: "+moto.getModelo()+
                                        "\nAno de fabricacao: "+moto.getAnoFabricacao()+
                                        "\nNumero de Identificacao: "+moto.getNumeroIdentificacao()+
                                        "\nImposto: "+moto.calcularImposto(),
                                    "Moto", JOptionPane.INFORMATION_MESSAGE, null);
        
        Bicicleta bicicleta = new Bicicleta("Caio", "Elite Carbon", 2022, "GHI9010");
        
        JOptionPane.showMessageDialog(null, "\nMarca: "+bicicleta.getMarca()+
                                        "\nModelo: "+bicicleta.getModelo()+
                                        "\nAno de fabricacao: "+bicicleta.getAnoFabricacao()+
                                        "\nNumero de Identificacao: "+bicicleta.getNumeroIdentificacao()+
                                        "\nImposto: "+bicicleta.calcularImposto()+
                                        "\nDesconto para veiculos Eletricos : "+bicicleta.calcularDescontoEletrico(),
                                    "Bicicleta", JOptionPane.INFORMATION_MESSAGE, null);
        
    }
}
