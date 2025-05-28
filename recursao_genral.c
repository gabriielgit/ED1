#include <math.h>
#include <stdio.h>
// Questão 1: Multiplicação por somas sucessivas
int multiplicar(int a, int b) {
	if (b == 0) return 0;
	return a + multiplicar(a, b - 1);
}
int multiplicar_cauda(int a, int b, int acum) {
	if (b == 0) return acum;
	return multiplicar_cauda(a, b - 1, acum + a);
}
// Questão 2: Mostrar múltiplos de um número
void mostrar_multiplos(int n, int q) {
	if (q == 0) return;
	mostrar_multiplos(n, q - 1);
	printf("%d x %d = %d\n", n, q, n * q);
}
void mostrar_multiplos_cauda(int n, int i, int q) {
	if (i > q) return;
	printf("%d x %d = %d\n", n, i, n * i);
	mostrar_multiplos_cauda(n, i + 1, q);
}
// Questão 3: Série 1
double serie(int n) {
	if (n == 1) return 1.0;
	return (n * n * n) / pow(10, n - 1) + serie(n - 1);
}
double serie_cauda(int n, int i, double soma) {
	if (i > n) return soma;
	return serie_cauda(n, i + 1, soma + (i * i * i) / pow(10, i - 1));
}
// Questão 4: Soma dos elementos de um vetor
int somar(int v[], int n) {
	if (n == 0) return 0;
	return v[n - 1] + somar(v, n - 1);
}
int somar_cauda(int v[], int n, int soma) {
	if (n == 0) return soma;
	return somar_cauda(v, n - 1, soma + v[n - 1]);
}
// Função principal
int main() {
	// Questão 1
	int a = 3, b = 4;
	printf("Multiplicacao comum: %d\n", multiplicar(a, b));
	printf("Multiplicacao cauda: %d\n", multiplicar_cauda(a, b, 0));
	// Questão 2
	int n = 5, q = 4;
	printf("\nMultiplos comuns:\n");
	mostrar_multiplos(n, q);
	printf("Multiplos cauda:\n");
	mostrar_multiplos_cauda(n, 1, q);
	// Questão 3
	int termos = 4;
	printf("\nSerie comum: %.5f\n", serie(termos));
	printf("Serie cauda: %.5f\n", serie_cauda(termos, 1, 0.0));
	// Questão 4
	int vetor[] = { 1, 2, 3, 4 };
	int tam = 4;
	printf("\nSoma vetor comum: %d\n", somar(vetor, tam));
	printf("Soma vetor cauda: %d\n", somar_cauda(vetor, tam, 0));
	return 0;
}