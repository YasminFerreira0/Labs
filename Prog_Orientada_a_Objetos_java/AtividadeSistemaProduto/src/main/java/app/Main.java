package app;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;


import javax.swing.JOptionPane;
import java.util.LinkedList;
import java.util.List;

import classes.Produto;
import classes.EletronicoProduto;
import classes.RoupaProduto;
import classes.InterfaceProdutos;

public class Main {
    public static void main(String[] args){
        List<Produto> produtos = new LinkedList<>();
        
        JOptionPane.showMessageDialog(null, "Gerenciador de Produtos");
        
        while(true){
            String[] opcoes = {"Cadastrar um Produto", "Listar Produtos cadastrados", "Sair"};

            int opc = JOptionPane.showOptionDialog(null, "Escolha uma opcao:", "Menu Principal",
                JOptionPane.DEFAULT_OPTION, JOptionPane.INFORMATION_MESSAGE, null, opcoes, opcoes[0]);
        
            if(opc == 2){
                JOptionPane.showMessageDialog(null, "Programa encerrado!");
                break;
            }
            
            switch(opc){
                case 0:
                    String[] tipo = {"Produto diverso", "Eletronico", "Roupa"};

                    int t = JOptionPane.showOptionDialog(null, "Que tipo de produto deseja cadastrar:", "Cadastro Produto",
                        JOptionPane.DEFAULT_OPTION, JOptionPane.INFORMATION_MESSAGE, null, tipo, tipo[0]);
                    
                    switch(t){
                        case 0:
                            String nomeProd = JOptionPane.showInputDialog("Informe o nome do produto:");
                        
                            String preco = JOptionPane.showInputDialog("Informe o preco do Produto:");
                            double precoProd = Double.parseDouble(preco);
                        
                            String descricaoProd = JOptionPane.showInputDialog("Informe a descricao do produto:");
                        
                            Produto produto = new Produto(nomeProd, precoProd, descricaoProd);
                            produtos.add(produto);
                        
                            JOptionPane.showMessageDialog(null, "Produto Cadastrado com sucesso!");
                    
                        break;
                        
                        case 1:
                            String nomeElet = JOptionPane.showInputDialog("Informe o nome do produto:");
                        
                            String prec = JOptionPane.showInputDialog("Informe o preco do Produto:");
                            double precoElet = Double.parseDouble(prec);
                        
                            String descricaoElet = JOptionPane.showInputDialog("Informe a descricao do produto:");
                            
                            String marcaElet = JOptionPane.showInputDialog("Informe a marca do produto:");
                            
                            String voltagem = JOptionPane.showInputDialog("Informe a voltagem do Produto:");
                            double voltagemElet = Double.parseDouble(voltagem);
                        
                            EletronicoProduto produtoEletronico = new EletronicoProduto(nomeElet, precoElet, descricaoElet, marcaElet, voltagemElet);
                            produtos.add(produtoEletronico);
                        
                            JOptionPane.showMessageDialog(null, "Produto Cadastrado com sucesso!");
                        break;
                        
                        case 2:
                            
                            String nomeRoupa = JOptionPane.showInputDialog("Informe o nome do produto:");
                        
                            String p = JOptionPane.showInputDialog("Informe o preco do Produto:");
                            double precoRoupa = Double.parseDouble(p);
                        
                            String descricaoRoupa = JOptionPane.showInputDialog("Informe a descricao do produto:");
                            
                            String tamanhoRoupa = JOptionPane.showInputDialog("Informe o tamanho do produto:");
                            
                            String corRoupa = JOptionPane.showInputDialog("Informe a cor do Produto:");
                        
                            RoupaProduto produtoRoupa = new RoupaProduto(nomeRoupa, precoRoupa, descricaoRoupa, tamanhoRoupa, corRoupa);
                            produtos.add(produtoRoupa);
                        
                            JOptionPane.showMessageDialog(null, "Produto Cadastrado com sucesso!");
                        break;
                    }
                    
                break;
                
                case 1:
                    if(produtos.isEmpty()){
                        JOptionPane.showMessageDialog(null, "Nenhum produto cadastrado.");
                    } else {
                        StringBuilder listaProdutos = new StringBuilder();
                        
                        for (Produto produto : produtos) {
                            listaProdutos.append(produto.exibirDados());
                            if (produto instanceof EletronicoProduto || produto instanceof RoupaProduto) {
                                InterfaceProdutos prodComDesconto = (InterfaceProdutos) produto;
                                listaProdutos.append("\nPreço com desconto: R$").append(prodComDesconto.calculaDesconto()).append("\n");
                            }
                            listaProdutos.append("\n-----------------------\n");
                        }

                        JOptionPane.showMessageDialog(null, listaProdutos.toString(), "Lista de Produtos", JOptionPane.INFORMATION_MESSAGE);
                        
                        
                        int salvar = JOptionPane.showConfirmDialog(null, "Deseja salvar a lista em um arquivo de texto?", 
                                    "Salvar Lista", JOptionPane.YES_NO_OPTION);
                        
                        if (salvar == JOptionPane.YES_OPTION) {
                            try (BufferedWriter writer = new BufferedWriter(new FileWriter("lista_produtos.txt"))) {
                                writer.write(listaProdutos.toString());
                                JOptionPane.showMessageDialog(null, "Lista salva com sucesso no arquivo 'lista_produtos.txt'!");
                            } catch (IOException e) {
                                JOptionPane.showMessageDialog(null, "Erro ao salvar o arquivo: " + e.getMessage());
                            }
                        }
                    }
                break;
            }
        
        }
    }
}

