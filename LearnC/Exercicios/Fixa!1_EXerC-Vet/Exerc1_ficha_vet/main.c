#include <stdio.h>
#include <stdlib.h>

#define DIM 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int vetor1[10] = {0};  
    int vetor2[DIM];
    int i;
 
    for (i = 0; i < DIM; i++) {
        vetor2[i] = i * 2;  
	}

    printf("Vetor2 (pares): ");
    for (i = 0; i < DIM; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");
    
    system("PAUSE");
	return 0;
}
