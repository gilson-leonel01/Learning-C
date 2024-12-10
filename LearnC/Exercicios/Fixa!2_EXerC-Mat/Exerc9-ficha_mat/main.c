#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ORDEM 4

int main(int argc, char *argv[]) {
	int mat[ORDEM][ORDEM], i, j, count = 0;

    printf("Insira os elementos da matriz %dx%d:\n", ORDEM, ORDEM);
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > 10) {
                count++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", count);
    
	return 0;
}

