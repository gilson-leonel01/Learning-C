#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float precoPropina, precoFinal;
    char cartaoEstudante, bolseiro;

    printf("Digite o preco da propina: ");
    scanf("%f", &precoPropina);

    printf("Possui cartao de estudante? (S/N): ");
    scanf(" %c", &cartaoEstudante);

    printf("E bolseiro do INAGB? (S/N): ");
    scanf(" %c", &bolseiro);

    if (cartaoEstudante == 'S' || cartaoEstudante == 's') {
        if (bolseiro == 'S' || bolseiro == 's') {
            precoFinal = precoPropina - (precoPropina * 0.075); 
        } else {
            precoFinal = precoPropina - (precoPropina * 0.005);
        }
    } else {
        if (bolseiro == 'S' || bolseiro == 's') {
            precoFinal = precoPropina + (precoPropina * 0.20); 
        } else {
            precoFinal = precoPropina;
        }
    }

    printf("Preco final da propina: %.2f\n", precoFinal);
	
	return 0;
}
