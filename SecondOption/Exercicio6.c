#include <stdio.h>


float calcularModulo(float numero) {
    if (numero < 0) {
        return -numero; 
    } else {
        return numero; 
    }
}

int main() {
    float numero;

    
    printf("Insira um número: ");
    scanf("%f", &numero);


    printf("O modulo do numero e: %.2f\n", calcularModulo(numero));

    return 0;
}