#include <stdio.h>



void calcularSalarioLiquido(float salario) {
  
    float salarioLiquido ;


if (salario <= 8500) {
        printf("Salário Líquido Inseto: %.2f\n", salarioLiquido);
    } else if (salario  >= 8501 && salario <= 11000) {
        
        salarioLiquido =salario - (salario * 0.02);
        printf("Salário Líquido: %.2f\n", salarioLiquido);
    } else if (salario >= 11001 && salario <= 16000) {
        
        salarioLiquido = salario - salario * 0.04;
        printf("Salário Líquido: %.2f\n", salarioLiquido);
    } else if (salario >= 16001 &&salario  <= 21000) {
       
        salarioLiquido = salario - salario * 0.06;
        printf("Salário Líquido: %.2f\n", salarioLiquido);
    } else {
        
        salarioLiquido = salario - salario * 0.08;
        printf("Salário Líquido: %.2f\n", salarioLiquido);
    }
   
    
    
}

int main() {
    float salario;

    
    printf("Digite o salário bruto: ");
    scanf("%f", &salario);

    
    calcularSalarioLiquido(salario);

    return 0;
}