#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int valores[5];
    int i, maior, menor, soma = 0;

    printf("Digite 5 valores: \n");

    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        soma += valores[i];
    }

    maior = menor = valores[0];

    for (i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }

        if (valores[i] < menor) {
            menor = valores[i];
        }
    }
	
    float media = soma / 5;
    
    printf("___________________________\n");

    printf("\nValores inseridos: \n");
    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
	
	printf("\n___________________________\n");
	
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}

