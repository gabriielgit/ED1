#include <stdio.h>
#include <stdlib.h>

void calcularDuracao(int hi, int mi, int hf, int mf, int *horas, int *minutos, int *total_min, int *total_seg) {
	int duracao = (hf * 60 + mf) - (hi * 60 + mi);

	if (duracao <= 0) {
		duracao += 1440;
	}

	*horas = duracao / 60;
	*minutos = duracao % 60;
	*total_min = duracao;
	*total_seg = duracao * 60;
}

int main() {
	system("cls");

	int hi, mi, hf, mf;
	int horas, minutos, total_min, total_seg;

	printf("Hora e minuto de inicio: ");
	scanf("%d %d", &hi, &mi);
	printf("Hora e minuto de termino: ");
	scanf("%d %d", &hf, &mf);

	calcularDuracao(hi, mi, hf, mf, &horas, &minutos, &total_min, &total_seg);

	printf("Duracao: %d hora(s) e %d minuto(s)\n", horas, minutos);
	printf("Duracao em minutos: %d\n", total_min);
	printf("Duracao em segundos: %d\n", total_seg);

	return 0;
}
