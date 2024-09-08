package app;

import entidade.Pessoa;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args){
        List <Pessoa> pessoas = new LinkedList();//lista duplamente encadeada
        Scanner input = new Scanner(System.in);
       
        for(int i=0; i<2; i++){
            Pessoa pessoa = new Pessoa();
            System.out.println("\nCadastro de Pessoa.\n");
            System.out.printf("entre com o nome: ");
            pessoa.nome = input.nextLine();
            pessoas.add(pessoa);
            
            System.out.printf("entre com a idade: ");
            pessoa.idade = input.nextInt();
            pessoas.add(pessoa);
            
            input.nextLine();
            
            System.out.printf("entre com o nome da mae: ");
            pessoa.nomeMae = input.nextLine();
            pessoas.add(pessoa);
            
            System.out.printf("entre com o CPF: ");
            pessoa.CPF = input.nextLine();
            pessoas.add(pessoa);
        }
        //023.123.931-90
        
        System.out.println("\nItens cadastrados: ");
        for(int i=0; i<2; i++){
            System.out.println("\nPessoa "+i+1);
            System.out.println(pessoas.get(i).imprimeTudo());
        }
    }
}
