#include <stdio.h>

void verificarNumero(int numero) {
    if (numero < 0) {
        printf("O número é menor do que zero.\n");
    } else if (numero == 0) {
        printf("O número é igual a zero.\n");
    } else {
        printf("O número é maior do que zero.\n");
    }
}

int main() {
    // Exemplo de uso da função com diferentes números
    verificarNumero(-5);
    verificarNumero(0);
    verificarNumero(10);

    return 0;
}