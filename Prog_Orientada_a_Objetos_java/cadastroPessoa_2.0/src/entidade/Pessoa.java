package entidade;

public class Pessoa {
    public String nome;
    public int idade;
    public String nomeMae;
    public String CPF;
    
    public String imprimeTudo(){
        return 
		"\nNome: "+nome+
		"\nIdade: "+idade+
		"\nNome da mae: "+nomemae+
		"\nCPF: "+CPF;
    }
}
