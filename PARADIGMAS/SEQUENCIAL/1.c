// GABRIEL FIALHO, D27724
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	float base, altura, area;

	printf("Digite a base do triangulo: ");
	scanf("%f", &base);

	printf("Digite a altura do triangulo: ");
	scanf("%f", &altura);

	area = (base * altura) / 2.0;

	printf("Area do triangulo: %.2f\n", area);

	return 0;
}