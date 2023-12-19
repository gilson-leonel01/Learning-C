#include <stdio.h>


int validarData(int dia, int mes, int ano) {
    
    int bissexto = 0;
    if (ano % 4 == 0 ) {
        bissexto = 1;
    }

    
    if (mes < 1 || mes > 12) {
        return 0; 
    }

  
    int diasNoMes;
    switch (mes) {
        case 2:
            diasNoMes = bissexto ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            diasNoMes = 30;
            break;
        default:
            diasNoMes = 31;
    }

   
    if (dia < 1 || dia > diasNoMes) {
        return 0; 
    }

    
    return 1;
}

int main() {
    int dia, mes, ano;

    
    printf("Digite a data (formato: DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    
    if (validarData(dia, mes, ano)) {
        printf("Data válida!\n");
    } else {
        printf("Data inválida!\n");
    }

    return 0;
}