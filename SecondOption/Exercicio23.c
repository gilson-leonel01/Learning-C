#include <stdio.h>


int isBissexto(int ano) {
    return ano % 4 == 0;
}


int diasRestantesNoMes(int dia, int mes, int ano) {
    
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isBissexto(ano)) {
        diasPorMes[2] = 29;
    }

    
    if (mes < 1 || mes > 12 || dia < 1 || dia > diasPorMes[mes]) {
        printf("Data inválida.\n");
        return -1;
    }

    
    int diasRestantes = diasPorMes[mes] - dia;


    printf("Faltam %d dias para o final do mês.\n", diasRestantes);

    return diasRestantes;
}

int main() {
   
    int dia, mes, ano;

   
    printf("Digite a data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    
    diasRestantesNoMes(dia, mes, ano);

    return 0;
}