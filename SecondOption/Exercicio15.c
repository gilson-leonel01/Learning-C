#include <stdio.h>

void verificarIntervalo(int num1, int num2) {
    
    int condicao1 = (num1 >= 1 && num1 <= 10);

   
    int condicao2 = (num2 >= 20 && num2 <= 200);

    
    if ((condicao1 && !condicao2) || (!condicao1 && condicao2)) {
        printf("*\n");
    } else {
        printf("Condições não atendidas.\n");
    }
}

int main() {
   
    int numero1, numero2;

    
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    
    verificarIntervalo(numero1, numero2);

    return 0;
}