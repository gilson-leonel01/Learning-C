#include <stdio.h>

// Função para calcular a área de um retângulo
float calcularAreaRetangulo(float comprimento, float largura) {
    return comprimento * largura;
}

int main() {
   
    float comprimento, largura;

    
    printf("Insira o comprimento do retangulo em cm: ");
    scanf("%f", &comprimento);

    printf("Insira a largura do retangulo em cm: ");
    scanf("%f", &largura);

    
    float area = calcularAreaRetangulo(comprimento, largura);

    printf("A area do retangulo é: %.2f cm²\n", area);

    return 0;
}