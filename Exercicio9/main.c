#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int mat[4][4];
    int i, j, lin, col;
    int contadorMaiorQue10 = 0;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &lin);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &col);

    if (lin <= 0 || lin > 4 || col <= 0 || col > 4) {
        printf("Valores invalidos para linhas ou colunas\n");
        return 1; 
    }

	printf("____________________________________\n");
	
    printf("Digite os elementos da matriz: \n");

    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);

            if (mat[i][j] > 10) {
                contadorMaiorQue10++;
            }
        }
    }
	
	printf("____________________________________\n");
	
    printf("Matriz inserida: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("____________________________________\n");

    printf("\nQtd de valores maiores que 10: %d\n", contadorMaiorQue10);
    
	return 0;
}
