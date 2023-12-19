#include <stdio.h>


void calcularChegada(int horaPartida, int minPartida, int duracaoHoras, int duracaoMinutos, int *horaChegada, int *minChegada) {
   
    int totalMinutosPartida = horaPartida * 60 + minPartida;
    int totalMinutosViagem = duracaoHoras * 60 + duracaoMinutos;
    int totalMinutosChegada = totalMinutosPartida + totalMinutosViagem;

    
    *horaChegada = totalMinutosChegada / 60;
    *minChegada = totalMinutosChegada % 60;
}

int main() {
    int horaPartida, minPartida, duracaoHoras, duracaoMinutos;
    int horaChegada, minChegada;

    
    printf("Digite a hora de partida (formato 24 horas): ");
    scanf("%d", &horaPartida);

    printf("Digite os minutos de partida: ");
    scanf("%d", &minPartida);

    printf("Digite a duração da viagem em horas: ");
    scanf("%d", &duracaoHoras);

    printf("Digite os minutos da duração da viagem: ");
    scanf("%d", &duracaoMinutos);

    
    calcularChegada(horaPartida, minPartida, duracaoHoras, duracaoMinutos, &horaChegada, &minChegada);

    
    printf("O voo chegará às %02d:%02d.\n", horaChegada, minChegada);

    return 0;
}