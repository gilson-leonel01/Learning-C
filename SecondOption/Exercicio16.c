#include <stdio.h>

int calcularSegundos(int horas, int minutos, int segundos) {
    int totalSegundos = 0;

    // Convertendo horas e minutos para segundos
    totalSegundos += horas * 3600;
    totalSegundos += minutos * 60;

    // Adicionando os segundos
    totalSegundos += segundos;

    return totalSegundos;
}

int main() {
    int horas, minutos, segundos;

    
    printf("Insira o tempo no formato horas minutos segundos: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    // Chama a função para calcular os segundos
    int totalSegundos = calcularSegundos(horas, minutos, segundos);

    // Exibe o resultado
    printf("O equivalente em segundos é: %d segundos\n", totalSegundos);

    return 0;
}