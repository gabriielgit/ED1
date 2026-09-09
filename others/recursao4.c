#include <stdio.h>

int somar(int v[], int n) {
	if (n == 0) return 0;
	return v[n - 1] + somar(v, n - 1);
}
int somar_cauda(int v[], int n, int soma) {
	if (n == 0) return soma;
	return somar_cauda(v, n - 1, soma + v[n - 1]);
}
int main() {

	int vetor[] = { 1, 2, 3, 4 };
	int tam = 4;
	printf("\nSoma vetor comum: %d\n", somar(vetor, tam));
	printf("Soma vetor cauda: %d\n", somar_cauda(vetor, tam, 0));
	return 0;
}