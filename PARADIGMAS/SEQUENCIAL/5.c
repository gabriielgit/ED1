// GABRIEL FIALHO, D27724
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	double minutos_totais, resto_minutos, segundos;
	int horas, minutos_inteiros;

	printf("Digite o valor em minutos: ");
	scanf("%lf", &minutos_totais);

	horas = (int)(minutos_totais / 60);

	resto_minutos = minutos_totais - (horas * 60);
	minutos_inteiros = (int)resto_minutos;

	segundos = (resto_minutos - minutos_inteiros) * 60;

	printf("%g minutos = %d h %d min. e %.0f seg.\n", minutos_totais, horas, minutos_inteiros, segundos);

	return 0;
}