#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int hora, min, seg;
    int segRestantes;

    printf("Insira o tempo atual na ordem (hora - minuto - segundo): \n");
    scanf("%d %d %d", &hora, &min, &seg);

    int tempoAtuaSeg = (hora * 3600) + (min * 60) + seg;

    segRestantes = (24 * 3600) - tempoAtuaSeg;

    printf("Restam estes segundos para o dia acabar: %d\n", segRestantes);
	
	
	return 0;
}
