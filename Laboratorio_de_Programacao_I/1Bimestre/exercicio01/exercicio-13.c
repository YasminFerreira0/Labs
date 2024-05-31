
//Calcule e mostre o número de lâmpadas necessárias para iluminar um determinado cômodo de uma residência. Dados de entrada: a potência da lâmpada utilizada (em watts), as dimensões (largura e comprimento, em metros) do cômodo. Considere que a potência necessária é de 20 watts por metro quadrado.
    
#include <stdio.h>
void main()
{
    float potencia, largura, comprimento, num_lampadas;
    printf("\nInflorme a potencia da lampada a ser utilizada: ");
    scanf("%f", &potencia);

    printf("\nInforme a larguara do comodo: ");
    scanf("%f", &largura);

    printf("\nInforme o comprimernto do comodo:");
    scanf("%f", &comprimento);

    num_lampadas = ((largura * comprimento) * 20) / potencia;

    printf("\nNumero de Lampadas: %.1f\n\n", num_lampadas); 
}
