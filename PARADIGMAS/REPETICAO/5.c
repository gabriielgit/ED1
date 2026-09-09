#include <stdio.h>
#include <stdlib.h>

double SomaFracao(int S, double soma, int a, double b) {

	if (S != 0) {
		if (!a) {
			soma -= (1 / b);
			printf("%lf\n", soma);
			a = 1;
		} else {
			soma += (1 / b);
			printf("%lf\n", soma);
			a = 0;
		}
		SomaFracao(S - 1, soma, a, b + 2);
	} else {
		soma = 1 - soma;
		return soma;
	}
}

int main() {
	system("cls");
	int S;
	double b = 3, soma = 0;
	int a = 1;
	scanf("%d", &S);
	printf("Soma :%lf\n", SomaFracao(S, soma, a, b));
	return 0;
}
