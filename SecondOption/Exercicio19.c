#include <stdio.h>

int calcularIdade(int anoNascimento, int mesNascimento, int diaNascimento, int anoAtual, int mesAtual, int diaAtual) {
   
    if ((mesAtual > mesNascimento) || 
        (mesAtual == mesNascimento && diaAtual >= diaNascimento)) {
        return anoAtual - anoNascimento;
    } else {
      
        return anoAtual - anoNascimento - 1;
    }
}

int main() {
  
    int anoNascimento = 1990, mesNascimento = 5, diaNascimento = 15;

   
    int anoAtual, mesAtual, diaAtual;
    printf("Informe a data atual (ano mes dia): ");
    scanf("%d %d %d", &anoAtual, &mesAtual, &diaAtual);

   
    int idade = calcularIdade(anoNascimento, mesNascimento, diaNascimento, anoAtual, mesAtual, diaAtual);

   
    printf("Idade: %d anos\n", idade);

    return 0;
}