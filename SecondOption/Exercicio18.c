#include <stdio.h>
#include <stdlib.h>

int calcularIdade(int anoNascimento, int anoAtual) {
    return anoAtual - anoNascimento;
}

int main() {
    int anoNascimento, anoAtual;

  
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    
    int idade = calcularIdade(anoNascimento, anoAtual);
    printf("A idade atual é: %d anos\n", idade);

    return 0;
}