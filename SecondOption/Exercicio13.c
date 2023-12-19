#include <stdio.h>

void verificarCondicao(int num1, int num2) {
    if ((num1 < 50 || num1 > 100) && (num2 <= num1)) {
        printf("Condição Verificada\n");
    } else {
        printf("Condição não verificada\n");
    }
}

int main() {
    // Exemplo de uso da função
    int numero1 = 45;
    int numero2 = 40;
    
    verificarCondicao(numero1, numero2);

    return 0;
}