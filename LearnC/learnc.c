#include <stdio.h>
#include <stdlib.h>

void mostrarNome() {
    int tamanho, i;

    printf("Insira a quantidade de letras que tem o teu nome: ");
    scanf("%d", &tamanho);

    char letrasNome[tamanho];

    printf("Insira as letras que compõem o teu nome:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%c", &letrasNome[i]);
    }

    printf("O nome inserido é: ");
    for (i = 0; i < tamanho; i++) {
        printf("%c", letrasNome[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    mostrarNome();

    system("PAUSE");
    return 0;
}

