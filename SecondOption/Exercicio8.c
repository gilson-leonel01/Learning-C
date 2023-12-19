#include <stdio.h>


void verificaParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("%d é um número par.\n", numero);
    } else {
        printf("%d é um número ímpar.\n", numero);
    }
}

int main() {
    int numero;

   
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    verificaParOuImpar(numero);

    return 0;
}