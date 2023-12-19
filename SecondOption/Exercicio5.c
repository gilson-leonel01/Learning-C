// Função para calcular e imprimir o quadrado de um número
void calcularQuadrado(int numero) {
    int quadrado = numero * numero;
    printf("O quadrado de %d é: %d\n", numero, quadrado);
}

int main() {
   
    int numero;

    
    printf("Digite um número: ");
    scanf("%d", &numero);

   
    calcularQuadrado(numero);

    return 0;
}