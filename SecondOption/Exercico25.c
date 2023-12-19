#include <stdio.h>

// Função para calcular o preço do bilhete de comboio
float calcularPrecoBilhete(int opc) {
    // Preço base do bilhete
    float precoBase = 100.0;

    
    float descontoCartaoJovem = 0.2;

  
    float suplementoFumante = 0.15;

    switch (opc)
    {
    case 1: precoBase -= precoBase * descontoCartaoJovem;
        break;
    case 2:  precoBase += precoBase * suplementoFumante;
    
    default:

        break;
    }
   

    return precoBase;
}

int main() {
    int opc;

   
    
    printf("Possui cartão-jovem? (1 para sim): \n");
    printf("É fumante? (2 para sim): \n");
    scanf("%d", &opc);

    
    float precoFinal = calcularPrecoBilhete(opc);

    
    printf("O preço do bilhete é: %.2f\n", precoFinal);

    return 0;
}