/*Crie um programa que leia dados de um animal e cadastre ele em uma lista
O programa deve:
    Conter um Menu com opcao de cadastrar, Listar e sair
    Utilizar uma classe para representar o animal
    Utilizar metodos acessores.
    Realizar leitura atraves do objeto Scanner
*/

package app;

import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;
import entidade.Animal;


public class Cadastra {

    public static void main(String[] args) {
        List<Animal> animais = new LinkedList<>();
        Scanner input = new Scanner(System.in);


        System.out.println("\nCadastro de Animais!");

        do{
            System.out.println("\nInforme a operacao que deseja realizar: ");
            System.out.println("1. Cadastrar um animal.");
            System.out.println("2. Listar animais cadastrados.");
            System.out.println("3. Sair do programa.");

            int opc = input.nextInt();
            input.nextLine();

            if(opc == 3){
                System.out.println("\nEncerrando Programa...");
                break;
            }

            switch(opc){
                case 1:
                    Animal animal = new Animal();

                    System.out.println("\nInforme os dados do casastro.\n");
                    System.out.println("Nome: ");
                    animal.setNome(input.nextLine());

                    System.out.print("Raca: ");
                    animal.setRaca(input.nextLine());

                    System.out.print("Idade: ");
                    animal.setIdade(input.nextInt());
                    input.nextLine();

                    animais.add(animal);
                    break;

                case 2:
                    if (animais.isEmpty()) {
                        System.out.println("Nenhum registro cadastrado.");
                    } else {
                        for (int i = 0; i < animais.size(); i++) {
                            System.out.println("Animal " +(i+1)+ ": ");
                            System.out.println(animais.get(i).listData());
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
