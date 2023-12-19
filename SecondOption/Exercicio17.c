#include <stdio.h>

void converterTempo(int segundos) {
    int horas, minutos, segundosRestantes;

    horas = segundos / 3600;  // 1 hora = 3600 segundos
    minutos = (segundos % 3600) / 60;  // 1 minuto = 60 segundos
    segundosRestantes = segundos % 60;

    printf("Tempo: %d horas, %d minutos, %d segundos\n", horas, minutos, segundosRestantes);
}

int main() {
    int tempoEmSegundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempoEmSegundos);

    converterTempo(tempoEmSegundos);

    return 0;
}