#include <stdio.h>
#include <stdlib.h>

int SomaFracao(int S, double soma, double a, double b) {

	if (S == 0) {
		return 0;
	} else {
		soma += (a += 2) / (b++);
		SomaFracao(S - 1, soma, a, b);
		return 0;
	}
}

int main() {
	int S;
	double soma = 0, a = 1, b = 1;
	scanf("%d", &S);
	printf("Soma :%.2lf\n", SomaFracao(S, soma, a, b));
	return 0;
}
