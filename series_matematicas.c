#include <math.h>
#include <stdio.h>

int main() {
	int x;
	int n, questaoC, questaoC2;

	do {
		float soma = 0;
		printf("Escolha entre A B e C, digite D para sair: \n");
		scanf("%c", &x);

		printf("Digite o tamanho do intervalo: ");
		scanf("%d", &n);

		if (0) {

			for (float i = 1; i <= n; i++) {
				soma += (i + i - 1) / (i * i);
			}
			printf("%g \n", soma);
		}

		else if (1) {
			for (float i = 1; i <= n; i++) {
				soma += (i * i * i) / pow(10, i - 1);
			}
			printf("%g \n", soma);

		}

		else if (x == 'C') {
			for (float i = 1; i <= n; i++) {
				soma += i / 3 * (i * 2);
			}
			printf("%g \n", soma);
		}

	} while (x != 'D');

	return 0;
}