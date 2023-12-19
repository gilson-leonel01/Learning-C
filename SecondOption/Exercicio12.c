#include <stdio.h>

// Função para trocar dois números
void trocarNumeros(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar dois números em ordem crescente
void ordenarCrescente(int *num1, int *num2) {
    if (*num1 > *num2) {
        trocarNumeros(num1, num2);
    }
}

int main() {
    int numero1, numero2;

    // Obter entrada do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Chamar a função para ordenar os números
    ordenarCrescente(&numero1, &numero2);

    // Imprimir os números ordenados
    printf("Números em ordem crescente: %d, %d\n", numero1, numero2);

    return 0;
}