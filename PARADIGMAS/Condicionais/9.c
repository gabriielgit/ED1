// GABRIEL FIALHO, D27724
#include <math.h>
#include <stdio.h>

int main() {

	double a, b, c, delta, x1, x2;

	printf("Digite o valor de a: ");
	scanf("%lf", &a);

	printf("Digite o valor de b: ");
	scanf("%lf", &b);

	printf("Digite o valor de c: ");
	scanf("%lf", &c);

	delta = (b * b) - (4 * a * c);

	if (delta < 0) {
		printf("As raizes nao sao reais.");
	} else {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);

		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);
	}

	return 0;
}
