
package app;

import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

import classes.ContaBancaria;
import classes.ContaPoupanca;
import classes.ContaCorrente;
import classes.ContaInvestimento;


public class GerenciadorDeContas {
    public static void main(String[] args) {
        
        List<ContaBancaria> contas = new LinkedList<>();
        Scanner input = new Scanner(System.in);
        
        System.out.println("\nGerenciador de Conta Bancaria.\n");
        
        while(true){
            
            System.out.println("\nMenu");
            System.out.println("1. Cadastrar Conta Poupanca");
            System.out.println("2. Cadastrar Conta Corrente");
            System.out.println("3. Cadastrar Conta Investimento");
            System.out.println("4. Exibir Juros de Todas as Contas");
            System.out.println("5. Encerrar Prigrama");
            System.out.print("Selecione uma opcao: ");
            int opc = input.nextInt();
            
            if(opc == 5){
                System.out.println("\n\nEncerrando programa...");
                System.out.println("\n*****************************");
                System.out.println("*****Programa Encerrado!*****");
                System.out.println("*****************************");
                break;
            }
            
            
            switch(opc){
                case 1:
                    System.out.println("\n***************************");   
                    System.out.println("Cadastro de Conta Poupanca"); 
                    System.out.println("***************************\n");   
                    
                    System.out.print("Informe o saldo inicial da conta: "); 
                    double saldoPoupanca = input.nextDouble();
                    
                    System.out.print("Informe a taxa de juros (%): ");
                    double taxaJurosPoupanca = input.nextDouble();
                    
                    System.out.print("Informe o valor minimo para rendimentos: ");
                    double valorMinimoPoupanca = input.nextDouble();
                    
                    System.out.print("Informe o tipo de conta: ");
                    String tipoContaPoupanca = input.next();

                    ContaPoupanca contaPoupanca = new ContaPoupanca(valorMinimoPoupanca, tipoContaPoupanca, saldoPoupanca, taxaJurosPoupanca);
                    contas.add(contaPoupanca);
                    
                    System.out.println("\nConta Poupanca cadastrada com sucesso!");
                    System.out.println("****************************************");
                break;  
                
                case 2:
                    System.out.println("\n***************************");   
                    System.out.println("Cadastro de Conta Corrente"); 
                    System.out.println("***************************\n"); 
                    
                    System.out.print("Informe o saldo inicial: ");
                    double saldoCorrente = input.nextDouble();
                    
                    System.out.print("Informe a taxa de juros (%): ");
                    double taxaJurosCorrente = input.nextDouble();
                    
                    System.out.print("Informe o limite do cheque especial: ");
                    double limiteChequeCorrente = input.nextDouble();
                    
                    System.out.print("Informe a taxa adicional (se saldo negativo): ");
                    double taxaAdicionalCorrente = input.nextDouble();

                    ContaCorrente contaCorrente = new ContaCorrente(saldoCorrente, taxaJurosCorrente, limiteChequeCorrente, taxaAdicionalCorrente);
                    contas.add(contaCorrente);
                    System.out.println("\nConta Corrente cadastrada com sucesso!");
                    System.out.println("****************************************");
                break;
                
                case 3:
                    System.out.println("\n*****************************");   
                    System.out.println("Cadastro de Conta Investimento"); 
                    System.out.println("*****************************\n"); 
                    
                    System.out.print("Informe o saldo inicial: ");
                    double saldoInvestimento = input.nextDouble();
                    
                    System.out.print("Informe a taxa de juros fixa (%): ");
                    double taxaJurosInvestimento = input.nextDouble();
                    
                    System.out.print("Informe a taxa de juros variavel (%): ");
                    double taxaJurosVariavelInvestimento = input.nextDouble();
                    
                    System.out.print("Informe o valor do investimento: ");
                    double valorInvestimento = input.nextDouble();

                    ContaInvestimento contaInvestimento = new ContaInvestimento(saldoInvestimento, taxaJurosInvestimento, taxaJurosVariavelInvestimento, valorInvestimento);
                    contas.add(contaInvestimento);
                    
                    System.out.println("\nConta Investimento cadastrada com sucesso!");
                    System.out.println("********************************************");
                break;
                
                case 4:
                    if (contas.isEmpty()) {
                        System.out.println("\nNenhuma conta cadastrada.");
                    } else {
                        for (int i = 0; i < contas.size(); i++) {
                            ContaBancaria conta = contas.get(i);
                            double juros = conta.calcularJuros();
                            System.out.println("\nConta " + (i + 1) + ": \nSaldo = " + conta.getSaldo() + "\nJuros Calculados = " + juros);
                        }
                    }
                break;
                
                default:
                    System.out.println("\nOpcao invalida! Tente Novamente!\n");
            }
        }
        
        input.close();
    }
}
