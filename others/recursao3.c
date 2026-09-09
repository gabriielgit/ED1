#include <stdio.h>
double serie(int n) {
	if (n == 1) return 1.0;
	return (n * n * n) / pow(10, n - 1) + serie(n - 1);
}
double serie_cauda(int n, int i, double soma) {
	if (i > n) return soma;
	return serie_cauda(n, i + 1, soma + (i * i * i) / pow(10, i - 1));
}
int main() {
	int termos = 4;
	printf("\nSerie comum: %.5f\n", serie(termos));
	printf("Serie cauda: %.5f\n", serie_cauda(termos, 1, 0.0));
	return 0;
}