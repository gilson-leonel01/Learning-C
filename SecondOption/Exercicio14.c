#include <stdio.h>

void verificarCondicao(int numero1, int numero2) {
    if ((numero1 >= 50 && numero1 <= 100) || (numero2 > numero1)) {
        printf("**** Condição ****\n");
    } else {
        printf("Condição não atendida.\n");
    }
}

int main() {
    int num1, num2;

    
    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);


    verificarCondicao(num1, num2);

    return 0;
}