#include <stdio.h>


float converterParaDolares(float valorEmKwanzas) {
    
    float taxaDeCambio = 100.0;
    
    
    float valorEmDolares = valorEmKwanzas / taxaDeCambio;
    
    return valorEmDolares;
}

int main() {
    
    float valorEmKwanzas;
    
   
    printf("Digite o valor em kwanzas: ");
    scanf("%f", &valorEmKwanzas);
    
    
    float valorEmDolares = converterParaDolares(valorEmKwanzas);
    
   
    printf("%.2f kwanzas equivalem a %.2f dólares\n", valorEmKwanzas, valorEmDolares);
    
    return 0;
}