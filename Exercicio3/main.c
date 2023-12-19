#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int mat[10][10];
    int lin, col, i, j;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &lin);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &col);

    if (lin <= 0 || lin > 20 || col <= 0 || col > 20) {
        printf("Valores invalidos para linhas ou colunas\n");
        return 1; 
    }
	
	printf("___________________________________________\n");
	
    printf("Digite os elementos da matriz: \n");

    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
	printf("___________________________________________\n");
	
    printf("Matriz primaria: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    
	printf("___________________________________________\n");

    printf("Matriz transposta: \n");
    for (j = 0; j < col; j++) {
        for (i = 0; i < lin; i++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}

