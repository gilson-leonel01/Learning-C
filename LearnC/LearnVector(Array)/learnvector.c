#include <stdio.h>
#include <stdlib.h>
#define DIM 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i, pares = 0, vet[];
    
    for(i=0; i<10; i++) {
        vet[i] = 0;
        printf("%d\n", vet[i]);
    }
            
    for (i = 0; i < DIM; i++) {
        vetor[i] = i * 2;  
    }
    
    for (i = 0; i < DIM; i++) {
        printf("%d\n", vetor[i]);
    }

    printf("Digite 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        printf("N. %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros no vetor:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }
    printf("\n\nQuantidade de numeros pares: %d\n", pares);
    
    printf("Insira os valores do vector: ");
    for(i=0; i<15; i++) {
        scanf("%d", &vet[i]);
    }
    
    for(i=1; i<15; i++) {
        printf("%d - %d\n", i, vet[i-1]);
    }
    
	return 0;
}
