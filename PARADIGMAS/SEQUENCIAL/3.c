// GABRIEL FIALHO, D27724
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	float raio, area;
	const float PI = 3.14159265;

	printf("Digite o valor do raio: ");
	scanf("%f", &raio);

	area = PI * (raio * raio);

	printf("Area da circunferencia: %.2f\n", area);

	return 0;
}