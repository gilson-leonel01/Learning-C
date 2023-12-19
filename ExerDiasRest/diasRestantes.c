#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    int dia, mes, ano;
    int diaMes, diasTerminar;

    printf("Insira o dia: ");
    scanf("%d", &dia);
    
    printf("Insira o mes: ");
    scanf("%d", &mes);
    
    printf("Insira o ano: ");
    scanf("%d", &ano);

    switch (mes) {
        case 1: // Janeiro
        case 3: // Marco
        case 5: // Maio
        case 7: // Julho
        case 8: // Agosto
        case 10: // Octubro
        case 12: // Dezembro
            diaMes = 31;
        break;
        case 4: // Abril
        case 6: // Junho
        case 9: // Setembro
        case 11: // Novembro
            diaMes = 30;
        break;
        case 2: // Feveiro
            if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
                diaMes = 29; 
			} 
            else{
                diaMes = 28;
			}
        break;
        default:
            printf("Mes invalido\n");
        break;
        return 0;
    }

    diasTerminar = diaMes - dia;

    printf("Faltam %d dias para terminar o mes.\n", diasTerminar);
	
	return 0;
}
