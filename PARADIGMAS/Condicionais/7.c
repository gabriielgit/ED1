#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int x;
	double y;

	scanf("%d\n", &x);
	scanf("%lf", &y);

	if ((x >= 6 && x <= 10) && (y >= 1.00)) {
		printf("Categoria Infantil");
	} else if ((x > 11 && x <= 17) && (y >= 1.40)) {
		printf("Categoria Junior");
	} else if ((x > 18 && x <= 34) && (y >= 1.70)) {
		printf("Categoria Profissional");
	} else if ((x > 18) && (y >= 1.60)) {
		printf("Categoria Senior");
	} else {
		printf("Entrevista individualizada");
	}

	return 0;
}