// GABRIEL FIALHO, D27724
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");

	double HorasTrabalhadas, SalMinimo, HorasExtras;

	printf("Salario Minimo\n");
	scanf("%.2lf\n", SalMinimo);
	printf("Horas Trabalhadas\n");
	scanf("%.2lf\n", HorasTrabalhadas);
	printf("Hotas Extras Trabalhadas\n");
	scanf("%.2lf\n", HorasExtras);

	printf("Receberá por Hora Trabalhada: %.2lf", HorasTrabalhadas * (SalMinimo / 8));
	printf("Receberá por Horas Extras Trabalhada: %.2lf", HorasExtras * (SalMinimo / 4));
	printf("Salario a receber: %.2lf", +HorasTrabalhadas * (SalMinimo / 8) + HorasExtras * (SalMinimo / 4));

	return 0;
}
