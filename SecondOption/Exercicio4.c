#include <stdio.h>


double calcularAreaCirculo(double raio) {
    
    const double pi = 3.14159265359;
    double area = pi * raio * raio;
    return area;
}

int main() {
  
    double raio;
    printf("Digite o raio do circulo em cm: ");
    scanf("%lf", &raio);

   
    double area = calcularAreaCirculo(raio);

    
    printf("A area do circulo com raio %.2lf cm eh: %.2lf cm^2\n", raio, area);

    return 0;
}