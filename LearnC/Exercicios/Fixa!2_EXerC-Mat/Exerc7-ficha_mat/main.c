#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int valores[5], maior, menor, soma = 0;
    float media;
    int i;

    printf("Insira 5 valores:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        soma += valores[i];

        if (i == 0) { 
            maior = menor = valores[i];
        } else {
            if (valores[i] > maior) maior = valores[i];
            if (valores[i] < menor) menor = valores[i];
        }
    }

    media = soma / 5.0;

    printf("\nValores inseridos: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\nMaior valor: %d\nMenor valor: %d\nMedia: %.2f\n", maior, menor, media);

	return 0;
}

