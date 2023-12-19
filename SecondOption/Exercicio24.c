#include <stdio.h>


int segundosAteFimDoDia(int horas, int minutos, int segundos) {
    
    int segundosNoDia = 24 * 60 * 60; 
    int segundosDecorridos = horas * 60 * 60 + minutos * 60 + segundos;

   
    int segundosRestantes = segundosNoDia - segundosDecorridos;

    return segundosRestantes;
}

int main() {
    int horas, minutos, segundos;

    
    printf("Digite o valor temporal (horas minutos segundos): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    
    int segundosRestantes = segundosAteFimDoDia(horas, minutos, segundos);
    printf("Segundos restantes até o fim do dia: %d segundos\n", segundosRestantes);

    return 0;
}