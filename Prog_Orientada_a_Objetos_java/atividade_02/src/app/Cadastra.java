// Crie um programa que cadastre varios veiculos e imprima seus dados.
// Crie um menu com a opcao de cadastrar, listar e sair.
// Utilize uma classe para representar o veiculo.
// Adicione um contrutor vazio e um construtor com parametros

package app;

import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;
import entidade.Veiculo;

public class Cadastra {

    public static void main(String[] args) {
        List<Veiculo> veiculos = new LinkedList<>();
        Scanner input = new Scanner(System.in);
        System.out.println("\nCadastro de Veiculos!");
        do {
            System.out.println("\nInforme a operacao que deseja realizar: ");
            System.out.println("1. Cadastrar um veiculo.");
            System.out.println("2. Listar veiculos cadastrados.");
            System.out.println("3. Sair do programa.");
            int opc = input.nextInt();
            input.nextLine();
            
            if (opc == 3) {
                System.out.println("\nEncerrando Programa...");
                break;
            }
            
            
            switch (opc) {
                case 1:
                    Veiculo veiculo = new Veiculo();
                    System.out.println("\nInforme os dados do casastro.\n");
                    System.out.println("Placa: ");
                    veiculo.placa = input.nextLine();
                    
                    System.out.print("Modelo: ");
                    veiculo.modelo = input.nextLine();
                    
                    System.out.print("Cor: ");
                    veiculo.cor = input.nextLine();
                    
                    System.out.print("Ano: ");
                    veiculo.ano = input.nextInt();
                    
                    input.nextLine();
                    veiculos.add(veiculo);
                break;
                
                case 2:
                    if (veiculos.isEmpty()) {
                    System.out.println("Nenhum veiculo cadastrado.");
                    } else {
                        for (int i = 0; i < veiculos.size(); i++) {
                            System.out.println("Veiculo " + (i + 1) + ": ");
                            System.out.println(veiculos.get(i).listData());
                        }
                    }
                break;
                
                default:
                    System.out.println("\nOpcao invalida! Tente novamente.");
                break;
            }
          
        }while(true);
        input.close();
    }
}
